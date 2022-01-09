struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *p1=NULL, *p2=NULL, *result=NULL, *cur=NULL;
    int flag = 0;
    int sum = 0;
    cur=(struct ListNode*)malloc(sizeof(struct ListNode));
    for(p1=l1,p2=l2,result=cur;;p1=p1->next,p2=p2->next){
        sum = p1->val + p2->val + flag;
        cur->val = sum % 10;
        if(p1->next!=NULL&&p2->next!=NULL){
            cur->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            cur=cur->next;
            flag = (sum/10!=0) ? 1 : 0;
        }
        else{
            p1=p1->next;
            p2=p2->next;
            flag = (sum/10!=0) ? 1 : 0;
            break;
        }
    }
    if(!p1&&!p2){
        if(flag==0){
            cur->next = NULL;
        }
        else{
            cur->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            cur->next->val = flag;
            cur->next->next = NULL;
        }
        return result;
    }
    else if(!p1){
        cur->next = p2;
        for(cur=p2;cur!=NULL;cur=cur->next){
            sum = cur->val + flag;
            cur->val = sum % 10;
            flag = (sum/10!=0) ? 1 : 0;
            if(cur->next==NULL){
                break;
            }
        }
        if(flag==1){
            cur->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            cur = cur->next;
            cur->val = flag;
            cur->next = NULL;
        }
        return result;
    }
    else if(!p2){
        cur->next = p1;
        for(cur=p1;;cur=cur->next){
            sum = cur->val + flag;
            cur->val = sum % 10;
            flag = (sum/10!=0) ? 1 : 0;
            if(cur->next==NULL){
                break;
            }
        }
        if(flag==1){
            cur->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            cur = cur->next;
            cur->val = flag;
            cur->next = NULL;
        }
        return result;
    }
    return result;
}
