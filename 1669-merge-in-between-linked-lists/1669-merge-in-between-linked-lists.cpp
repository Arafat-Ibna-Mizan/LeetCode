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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* ptr1;
        ListNode* ptr2;
        ListNode* temp1=list1;
        ListNode* root=list1;
        while(a>0){
            ptr1=list1;
            list1=list1->next;
            a--;

        }

        while(b>=0){
            ptr2=temp1;
            temp1=temp1->next;
            b--;
        }
        ptr2=ptr2->next;
        ptr1->next=list2;
        while(list2->next!=NULL){
            list2=list2->next;
        }
        list2->next=temp1;
        return root;
        
    }
};