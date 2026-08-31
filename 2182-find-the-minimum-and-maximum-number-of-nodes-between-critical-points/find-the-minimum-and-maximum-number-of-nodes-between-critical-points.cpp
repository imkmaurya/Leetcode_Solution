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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        if(head==NULL || head->next==NULL || head->next->next==NULL){
            return {-1,-1};
        }


        ListNode* prev=head;
        
        head=head->next;
        ListNode* temp=head;

        if(head==NULL || head->next==NULL){
            return {-1,-1};
        }

        int count=2;

        vector<int> vt;
        while(temp->next!=NULL){

            if(temp->val>temp->next->val && temp->val>prev->val){
                vt.push_back(count);
            }
            else if(temp->val<temp->next->val && temp->val<prev->val){
                vt.push_back(count);
            }
            prev=temp;
            temp=temp->next;
            count++;
        }

        if(vt.size()<2){
            return {-1,-1};
        }

        int minD=INT_MAX;
        int maxD=vt.back()-vt.front();

        for(int i=1;i<vt.size();i++){
            
            minD=min(minD,vt[i]-vt[i-1]);
                
        }

        return {minD,maxD};

        
           

       



        
        
    }
};