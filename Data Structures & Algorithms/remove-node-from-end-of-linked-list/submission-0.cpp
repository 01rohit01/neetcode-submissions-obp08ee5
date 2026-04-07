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
        vector<ListNode*> arr;
        ListNode* temp=head;
        while(temp!= NULL){
            arr.push_back(temp);
            temp = temp->next;
        }

        int size = arr.size();
        int deleteIndex = size-n;

        if(deleteIndex==0){
           return head->next;
        }
        arr[deleteIndex - 1]->next = arr[deleteIndex]->next;

        return head;

    }
};
