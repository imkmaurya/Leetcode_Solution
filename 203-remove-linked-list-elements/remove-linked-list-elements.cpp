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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL){
            if(temp->val==val){
                if(prev==NULL){
                    head=temp->next;
                    ListNode* curr=temp;
                    temp=temp->next;
                    delete curr;

                }
                else{
                    ListNode* curr=temp;
                    prev->next=temp->next;
                    temp=prev->next;
                    delete curr;
                }
            }
            else{
                prev=temp;
                temp=temp->next;
            }
        }
        return head;
        
    }
};