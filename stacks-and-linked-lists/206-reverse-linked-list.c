struct ListNode *reverseList(struct ListNode *head)
{
    struct ListNode *curr = head, *next = NULL, *prev = NULL;

    if (!curr)
    {
        return NULL;
    }

    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

/*
Tests
- head: {1, 2, 3, 4}, result = {4, 3, 2, 1}
- head: NULL, result = NULL
*/