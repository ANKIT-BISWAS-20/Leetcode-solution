/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* thisNode = node;
        ListNode* nextNode = node->next;
        thisNode->val = nextNode->val;
        thisNode->next = nextNode->next;
        delete nextNode;   
    }
};