/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
        struct ListNode *head = l1, *prev = NULL;
        int cf = 0, num = 0;
        /* first handle the bit that they all have */
        while (l1 && l2) {
            num = (l1->val + l2->val + cf) % 10;
            cf = (l1->val + l2->val + cf) / 10;
            l1->val = num;
            prev = l1;
            if (!l1->next && l2->next) {
                // l1 reach the end while l2 not
                l1->next = l2->next;
                l1 = l1->next;
                break;
            }
            else if (l1->next && !l2->next) {
                // l2 reach the end while l1 not
                l1 = l1->next;
                break;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        /* length are not equal */
        if (l1 && cf) {
            while (l1) {
                num = (l1->val + cf) % 10;
                cf = (l1->val + cf) / 10;
                l1->val = num;
                prev = l1;
                l1 = l1->next;
            }
        }
        /* if has a carry flag */
        if (cf) {
            prev->next = (struct ListNode *)malloc(sizeof(struct ListNode));
            prev->next->val = cf;
            prev->next->next = NULL;
        }
        return head;
}
