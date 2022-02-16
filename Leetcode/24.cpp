// 24. Swap Nodes in Pairs

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
    ListNode* swapPairs(ListNode* head) {
        int n=0;
        ListNode *curr=head;
        while(curr!=NULL)
        {
            n++;
            curr=curr->next;
        }
        curr=head;
        for(int i=0;i<n/2;i++)
        {
            ListNode *temp=curr->next;
            int v=curr->val;
            curr->val=temp->val;
            temp->val=v;
            curr=temp->next;
        }
        return head;
    }
};
