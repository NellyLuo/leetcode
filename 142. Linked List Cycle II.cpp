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
    ListNode *detectCycle(ListNode *head) {
        if(head == nullptr || head->next == nullptr) return nullptr;
        
        ListNode *p = head, *q = head;
        bool is_circle = false;
        while(q){
            p = p->next;
            if(q->next != nullptr) q = q->next->next;
            else return nullptr;
            if(p == q) {
                is_circle = true;
                break;
            }
        }
        if(!is_circle) return nullptr;

        ListNode* res = head;
        while(res != p){
            res = res->next;
            p = p->next;
        }
        return res;
    }
};
