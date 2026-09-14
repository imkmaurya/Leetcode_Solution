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
        int carry=0;
        int sum;
        ListNode* add=NULL;
        ListNode* head=NULL;
        while(l1!=NULL || l2!=NULL || carry){
            sum=carry;
            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2=l2->next;
            }
            carry=sum/10;

            if(add==NULL){
                add=new ListNode(sum%10);
                head=add;
            }
            else{
                ListNode* temp=new ListNode(sum%10);
                head->next=temp;
                head=temp;

                
            }
        }
        return add;
        




















        
    }
};