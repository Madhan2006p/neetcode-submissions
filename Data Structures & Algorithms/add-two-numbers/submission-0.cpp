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
        ListNode* res = new ListNode();

        ListNode* curr_res = res;
        ListNode* curr_l1 = l1;
        ListNode* curr_l2 = l2;
        int c = 0;

        while (curr_l1 != NULL || curr_l2 != NULL || c != 0) {
            int sum = c;

            if (curr_l1 != nullptr) {
                sum += curr_l1->val;
                curr_l1 = curr_l1->next;
            }

            if (curr_l2 != nullptr) {
                sum += curr_l2->val;
                curr_l2 = curr_l2->next;
            }

            c = sum / 10;

            curr_res->next = new ListNode(sum % 10);
            curr_res = curr_res->next;
        }
        ListNode* actual_result = res->next;
        delete res; 

        return actual_result;

    }
};
