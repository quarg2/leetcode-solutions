int search(int *nums, int numsSize, int target)
{
    int left = 0, right = numsSize - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] < target)
            left = mid + 1;
        else if (nums[mid] > target)
            right = mid - 1;
        else
            return mid;
    }

    return -1;
}

/*
Tests
- nums: {1, 3, 5, 7}, size: 4, target: 5, expected: 2
- nums: {1, 5, 7, 10} size: 4, target: 8, expected: -1
*/