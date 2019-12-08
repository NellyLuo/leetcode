/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        struct ListNode* ans = new ListNode(0);
        struct ListNode* temp = ans;
        while( l1 != NULL || l2 != NULL || carry == 1 ){
            int a = 0;
            int b = 0;
            if (l1 != NULL) 
                a = l1->val;
            if (l2 != NULL)
                b = l2->val;
            int sum = a + b + carry;
            carry = sum/10;
            sum = sum%10;
            struct ListNode* extra = new ListNode(sum);
            ans->next = extra;
            ans = ans->next;
            if(l1!= NULL)
                l1 = l1->next;
            if(l2!= NULL)
                l2 = l2->next;
            
        }
        return temp->next;
    }
};
