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
    ListNode* reverseList(ListNode* head) {
          ListNode* temp=head;
          stack<int> st;
          int s=0;

        while(temp!=NULL)
        {     
             st.push(temp->val);
             temp=temp->next;
             s++;
        }
 temp=head;
      
      while(temp!=NULL)
      {
        temp->val=st.top();
        st.pop();
        temp=temp->next;
      }

          
        return head;

    }
  
};
