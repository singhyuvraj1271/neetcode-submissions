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
    void reorderList(ListNode* head) {
        
             int count=0;
            ListNode* temp=head;
            while(temp!=NULL)
            {
                count++;
                temp=temp->next;
            }

            int s=count/2;
            temp=head;

            for(int i=0;i<s;i++)
            {

                temp=temp->next;
            }
            ListNode*ptr=temp->next;
            stack<ListNode*> result;

            while(temp->next!=NULL)
            {
                result.push(temp->next);
                temp=temp->next;

            }
           
           temp=head;
           ListNode*repeat=temp->next;
             int i=0;
           while(result.empty()!=true)
           {    
              if(i%2==0)
                {
                     temp->next=result.top();
                          result.pop();
                          temp=temp->next;
                }

                else{
                      temp->next=repeat;
                      temp=repeat;
                      repeat=repeat->next;

                }

                i++;
           }




           while(repeat!=ptr)
           { 

                      temp->next=repeat;
                      temp=repeat;
                      repeat=repeat->next;
                 
           }

           temp->next=NULL;




         

    }
};
