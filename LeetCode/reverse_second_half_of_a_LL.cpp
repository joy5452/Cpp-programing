class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* s= head;
        ListNode* f=head;
        while(f!=NULL && f->next!=NULL){
            s=s->next;
            f=f->next->next;
        }
        ListNode* current=s;
        ListNode* temp=NULL;
        ListNode* prev=NULL;
        while(current!=NULL){
            temp=current->next;
            current->next=prev;
            prev=current;
            current=temp;
        }
        return prev;
    }
};