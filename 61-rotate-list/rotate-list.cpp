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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        int n=1;
        ListNode* last=head;
        while(last->next!=NULL){
            n++;
            last=last->next;
        }
        
        if(k%n==0){
            return head;
        }
        k=k%n;
        ListNode* temp=head;
        last->next=temp;
        k=n-k-1;
        while(k){
            temp=temp->next;
            k--;
        }
        head=temp->next;
        temp->next=NULL;

        return head;

        
    }
};