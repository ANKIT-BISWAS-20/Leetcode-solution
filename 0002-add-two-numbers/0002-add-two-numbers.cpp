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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr) return l2;
        if(l2 == nullptr) return l1;
        ListNode* newLL = new ListNode(-1);
        ListNode* temp = newLL;
        int carry = 0;
        int sum = 0;
        while(l1!=nullptr || l2!=nullptr){
            sum = carry;
            if(l1) sum += l1->val;
            if(l2) sum += l2->val;
            if(sum > 9){
                carry = 1;
                sum -= 10;
            }
            else carry=0;
            ListNode* newNode = new ListNode(sum);
            temp->next = newNode;
            temp = newNode;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        if(carry==1){
            ListNode* newNode = new ListNode(carry);
            temp->next = newNode;
        }
        return newLL->next;
    }
};