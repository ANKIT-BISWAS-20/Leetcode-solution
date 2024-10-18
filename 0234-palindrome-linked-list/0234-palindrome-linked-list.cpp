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
    ListNode* findMid(ListNode* head) {
        ListNode* fast = head->next;
        ListNode* slow = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    
    ListNode* reverse(ListNode* head){
        if(head->next == nullptr) return head;
        ListNode* prev = nullptr;
        ListNode* temp = nullptr;
        ListNode* current = head;
        while(current){
            temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head == nullptr) return false;
        if(head->next == nullptr) return true;
        ListNode* temp1 = head;
        ListNode* temp = findMid(head);
        ListNode* secondHead = temp->next;
        temp->next=nullptr;
        secondHead = reverse(secondHead);
        ListNode* temp2 = secondHead;
        while(temp2){
            if(temp1->val != temp2->val) {
                secondHead = reverse(secondHead);
                temp->next = secondHead;
                return false;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        secondHead = reverse(secondHead);
        temp->next = secondHead;
        return true;
    }
};