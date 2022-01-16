/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
    //添加一个head的前导节点h
    struct ListNode* h = (struct ListNode*)malloc(sizeof(struct ListNode));
    h->next = head;

    struct ListNode* p = h;
    struct ListNode* q = p; 
    struct ListNode* temp = h;
    while(q->next != NULL)
    {
        //从h往后移动n个节点作为q节点
        if(n != 0)
        {
            p = p->next;
            q = p;
            n--;
        }
        //找到q节点后继续后移，直到q->next为null，得到temp：
        //temp就是要删除节点的前一个节点
        //被删除的节点有可能就是head节点，那么temp就是h节点了，这就是为什么引入前导节点的原因
        else
        {
            temp = temp->next;
            q = q->next;    
        }
    }
    //删除节点
    temp->next = temp->next->next;  
    return h->next;
}
