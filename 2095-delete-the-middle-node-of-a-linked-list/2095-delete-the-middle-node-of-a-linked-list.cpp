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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return nullptr;
        int count = 0;
        ListNode* temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }
        int mid;
        if (count % 2 == 1) mid = (count - 1)/2;
        else mid = (count + 1)/2;
        temp = head;
        count = -1;
        ListNode* prev = nullptr;
        while(temp){
            count++;
            if(count == mid){
                prev->next = temp->next;
                break;
            }
            prev = temp;
            temp = temp->next;
        }
        return head;
    }
};