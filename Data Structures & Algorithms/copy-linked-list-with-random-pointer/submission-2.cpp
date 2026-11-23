/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
   public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> ll;
        Node* temp = head;

        if (head == NULL) {
            return NULL;
        }
        while (temp != NULL) {
            ll[temp] = new Node(temp->val);
            temp = temp->next;
        }
        temp = head;

        while (temp != NULL) {
            if (temp->next != NULL && temp->random != NULL) {
                ll[temp]->next = ll[temp->next];
                ll[temp]->random = ll[temp->random];
            }
            
            if(temp->next==NULL&& temp->random!=NULL)
            {
                 ll[temp]->next = NULL;
                 ll[temp]->random = ll[temp->random];

            }
            
             if(temp->next!=NULL&&temp->random==NULL)
             {
                ll[temp]->random=NULL;
                ll[temp]->next = ll[temp->next];

             }
            
            temp = temp->next;
        }

        temp = head;
        Node* s = ll[temp];

        return s;
    }
};
