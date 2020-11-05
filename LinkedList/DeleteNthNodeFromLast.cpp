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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count =0;
        ListNode* temp = head;
        if(head == NULL || head->next==NULL) return NULL;
        while(temp!=NULL){
            temp= temp->next;
            count++;
        }
        if(n==count){
            head = head->next;
            delete temp;
            return head;
        }
        temp = head; int i=1;
        while(i!=(count-n) && temp!=NULL){
            temp=temp->next;
            i++;
        }
        
        if(temp->next ==NULL) return head;
        if(temp->next->next == NULL ) {
            delete (temp->next);
             temp->next =NULL;
            return head;
        }
        ListNode* a = temp->next;
        temp->next = temp->next->next;
        delete a;
        return head;
        }
};
