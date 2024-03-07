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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        ListNode* mid = head;

        while(temp->next!=NULL && temp->next->next!=NULL){
            temp = temp->next->next;
            mid = mid->next;
        }

        if(temp->next==NULL){
            return mid;
        }
        else{
            return mid->next;
        }

    }
};