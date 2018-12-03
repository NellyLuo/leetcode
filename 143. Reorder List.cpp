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
    void reorderList(ListNode* head) {
        if(head && head->next){
             ListNode* mid = findMid(head);
            // cout << mid->val << endl;
            ListNode* rev = reverseList(mid->next);
            mid->next = NULL;
            // cout << rev->val << endl;
            ListNode* p = head;
            ListNode* temp;
            ListNode* temp2;
            while(rev && p){
                temp = p->next;
                temp2 = rev->next;
                p->next = rev;
                rev->next = temp;
                p = temp;
                rev = temp2;
            }
        
        }
       
    }
    
    ListNode* findMid(ListNode* head){
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast->next && fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    
    ListNode* reverseList(ListNode* head){
        ListNode* temp;
        ListNode* p = head;
        ListNode* q = head->next;
        head->next = NULL;
        while(q){
            temp = q->next;
            q->next = p;
            
            p = q;
            q = temp;
        }
        
        return p;
        
    }
    
};
