class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || k==1)return head;
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        int count=0;
        ListNode* cur=dummy;
        ListNode *next=dummy;
        ListNode *prev=dummy;
        while(cur->next!=NULL){
            cur=cur->next;
            count++;
        }
        while(count>=k)
        {
            cur=prev->next;
            next=cur->next;
        
        for(int i=1;i<k;i++)
        {
            cur->next=next->next;
            next->next=prev->next;
            prev->next=next;
            next=cur->next;
            
        }
        prev=cur;
        count-=k;
    }
    return dummy->next;
}
};
