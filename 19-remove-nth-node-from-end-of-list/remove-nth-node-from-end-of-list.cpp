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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*dummyHead=new ListNode(-1);
        dummyHead->next=head;
        ListNode*ptr1=dummyHead;
        ListNode*ptr2=dummyHead;
        for(int i=0;i<=n;i++){
            if(ptr2==NULL){
                return head;
            }
            ptr2=ptr2->next;
        }
        while(ptr2!=NULL){
            ptr1=ptr1->next;
            ptr2=ptr2->next;

        }
        ListNode*nodetodelete=ptr1->next;
        ptr1->next=nodetodelete->next;
        delete nodetodelete;
        return dummyHead->next;

         
        
    }
};