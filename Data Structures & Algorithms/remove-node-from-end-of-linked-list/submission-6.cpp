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
       
       ListNode*next(ListNode*head,int dest)
       {       int count=0;
         ListNode*temp=head;
             while(count!=dest-1)
             {    count++;
                temp=temp->next;

             }
             return temp;

       }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
                int s=0;      
                         ListNode* temp=head;
                    while(temp!=NULL)
                   {  s++;
                    temp=temp->next;
                   }
                   int dest=s-n+1;
          ListNode*ptr=next(head,dest);
               
                temp=head;
         if(s!=1&& dest!=1)
         {

          while(temp->next!=ptr)
          {
            temp=temp->next;
          }
     
         
            // Not last element
          if(temp->next->next!=NULL)
          {
              ListNode*prev=temp;
              ListNode*current=temp->next;
              ListNode*upcoming=temp->next->next;

              prev->next=upcoming;


          }

          else{
            
           

            
              ListNode*prev=temp;
             prev->next=NULL;
             
            
              
            
          }

         }

         else{

            head=NULL;
         }

         if(dest==1)
         {
            temp=temp->next;
            delete head;
            return temp;
         }

         return head;

        




    }
};
