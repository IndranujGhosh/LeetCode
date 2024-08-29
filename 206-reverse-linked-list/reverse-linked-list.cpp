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
        ListNode* node=nullptr; //initially points to null pointer
        while(head!=nullptr){
            ListNode* temp=head->next;
            head->next=node; //initially this will make '1' point to the NULL pointer[NULl<-1]
            node=head;
            head=temp;
        }
        return node;
    }
};