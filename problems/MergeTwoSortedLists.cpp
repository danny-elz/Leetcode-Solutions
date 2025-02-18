//
// Created by Danny Elzein on 2025-02-14.
//
// The `mergeTwoLists` function merges two sorted linked lists `list1` and `list2` into a single sorted linked list.
//
// 1. Create a dummy node: `ListNode* dummy = new ListNode(0)`.
//    - This dummy node acts as a placeholder to simplify the merging process.
//
// 2. Initialize a pointer `cur` to the dummy node: `ListNode* cur = dummy`.
//    - `cur` will be used to build the merged list.
//
// 3. Iterate through both lists while neither is empty: `while(list1 && list2)`.
//    - Compare the values of the current nodes of `list1` and `list2`.
//    - Append the smaller value to the merged list and move the corresponding pointer to the next node.
//
// 4. Append the remaining nodes: After the loop, one of the lists may still have remaining nodes.
//    - Append the remaining nodes to the merged list: `cur->next = list1 ? list1 : list2`.
//
// 5. Return the merged list: The merged list starts from `dummy->next`.
//    - Store the head of the merged list: `ListNode *head = dummy->next`.
//    - Delete the dummy node to free memory: `delete dummy`.
//    - Return the head of the merged list: `return head`.
//
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) { }
    ListNode(int x) : val(x), next(nullptr) { }
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* dummy = new ListNode(0);
    ListNode* cur = dummy;
    while(list1 && list2) {
        if(list1->val < list2->val) {
            cur->next = list1;
            list1 = list1->next;
        } else {
            cur->next = list2;
            list2 = list2->next;
        }
        cur = cur->next;
    }
    cur->next = list1 ? list1 : list2;
    ListNode *head = dummy->next;
    delete dummy;
    return head;
};