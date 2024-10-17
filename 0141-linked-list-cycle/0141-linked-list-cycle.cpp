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
    bool hasCycle(ListNode *head) {
        unordered_map <ListNode* , int> mpp;
        if (head == nullptr || head->next == nullptr) return false;
        ListNode* temp = head;
        while(temp){
            mpp[temp]++;
            if(mpp[temp] == 2) return true;
            temp = temp->next;
        }
        return false;
    }
};