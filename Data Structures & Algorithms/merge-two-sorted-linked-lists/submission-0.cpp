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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* i = list1;
        ListNode* j = list2;
        ListNode* test = new ListNode();
        ListNode* head = test;
        while (i != nullptr && j != nullptr) {
            if (j->val >= i->val) {
                test->next = new ListNode(i->val);
                test=test->next;
                i = i->next;
            }

            else {
                test->next = new ListNode(j->val);
                 test=test->next;
                j = j->next;
            }
        }

        if (i != NULL) {
            while (i != nullptr) {
                test->next = new ListNode(i->val);
                test=test->next;
                i=i->next;
            }
        }

        if (j != NULL) {
            while (j != nullptr) {
                test->next = new ListNode(j->val);
                test=test->next;
                j=j->next;
            }
        }

        return head->next;
    }
};



