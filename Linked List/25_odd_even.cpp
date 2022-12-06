//odd even of linked list
/*class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL)
         return head;
      ListNode* temp=head;
      ListNode* ptr=head->next;
      ListNode* node=ptr;
      while(ptr!=NULL && ptr->next!=NULL)
      {
          temp->next=ptr->next;
          ptr->next=temp->next->next;
          temp->next->next=node;
          temp=temp->next;
          ptr=ptr->next;
      }

          return head;
    }
};*/