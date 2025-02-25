struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
  struct ListNode*p=NULL,*q=NULL,*r=NULL;
  int sum=0;
  int carry=0;
  while(l1!=NULL || l2!=NULL || carry)
  {
    sum=carry;
    if(l1!=NULL)
    {
        sum+=l1->val;
        l1=l1->next;
    }
    if(l2!=NULL)
    {
       sum+=l2->val;
       l2=l2->next;
    }
    carry=sum/10;
    sum=sum%10;
    p=(struct ListNode*)malloc(sizeof(struct ListNode));
    p->val=sum;
    p->next=NULL;
    if(q==NULL && r==NULL) 
    q=r=p;
    else
    {
        r->next=p;
        r=p;
    }
  }
  return q;
}