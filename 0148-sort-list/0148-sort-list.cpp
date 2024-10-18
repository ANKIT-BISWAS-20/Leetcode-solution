/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* findMiddle(ListNode* head) {
        ListNode* fast = head->next;
        ListNode* slow = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    
    ListNode* merge(ListNode* Lefthead,ListNode* Righthead){
        ListNode* temp = new ListNode(0);
        ListNode* newHead = temp;
        while(Lefthead && Righthead){
            if(Lefthead->val <= Righthead->val){
                temp->next = Lefthead;
                Lefthead = Lefthead->next;
                temp = temp->next;
            }else{
                temp->next = Righthead;
                Righthead = Righthead->next;
                temp = temp->next;
            }
        }
        if(Lefthead) temp->next = Lefthead;
        else temp->next = Righthead;
        return newHead->next;
    }
    
    ListNode* sortList(ListNode* head) {
        if(head == nullptr || head->next==nullptr) return head;
        ListNode* middle = findMiddle(head);
        ListNode* Lefthead = head;
        ListNode* Righthead = middle->next;
        middle->next = nullptr;
        Lefthead = sortList(Lefthead);
        Righthead = sortList(Righthead);
        return merge(Lefthead,Righthead);
    }
};