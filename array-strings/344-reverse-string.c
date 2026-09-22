void reverseString(char *s, int sSize)
{
#define SWAP(type, x, y)                                                                                               \
    do                                                                                                                 \
    {                                                                                                                  \
        type temp;                                                                                                     \
        temp = x;                                                                                                      \
        x = y;                                                                                                         \
        y = temp;                                                                                                      \
    } while (0)

    size_t left = 0, right = sSize - 1;

    if (sSize <= 1)
    {
        return;
    }

    while (left <= right)
    {
        SWAP(char, s[left], s[right]);
        left++;
        right--;
    }

#undef SWAP
}

/*
Test cases
- s = {'h','e','l','l','o'}, size = 5, result = {'o','l','l','e','h'}
- s = {'w', 'o', 'w'}, size = 3, result = {'w', 'o', 'w'}
*/