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
private:
    int solve(ListNode* head){
        int count = 0;
        while(head != NULL){
            count++;
            head = head -> next;
        }
        return count;
    }

    void removeNode(ListNode* &head, ListNode* node){
    ListNode* curr = head;
    ListNode* prev = NULL;
    while(curr != NULL){
        if(curr == node){
            if(prev == NULL){
                // If the node to be removed is the head
                head = head->next;
            } else {
                // If the node to be removed is not the head
                prev->next = curr->next;
            }
            delete curr;
            break;
        }
        prev = curr;
        curr = curr->next;
        }
    } 
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = solve(head);
        int count = 0;
        ListNode* temp = head;
        while(temp != NULL){
            count++;
            if(count == (len - n + 1)){
                removeNode(head,temp);
                break;
            }
            temp = temp -> next;
        }
        return head;
    }
};