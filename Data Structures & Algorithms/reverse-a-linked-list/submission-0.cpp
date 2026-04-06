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
    ListNode* reverseList(ListNode* head) {
        // stack<int> st;
        // ListNode* temp=head;

        // while(temp!=NULL){
        //     st.push(temp->val);
        //     temp=temp->next;
        // }
        // //reset the temp back to the head
        // temp= head;
        // while(temp!=NULL){
        //     temp->val=st.top();
        //     st.pop();
        //     temp=temp->next;
        // }
        // return head;

        //optimal sol
        ListNode* prev=NULL;
        ListNode* temp=head;
        while(temp!=NULL){
            // Save the next node
            ListNode* front= temp->next;

            // Reverse the current node's pointer
            temp->next= prev;

            // Move prev to current node
            prev=temp;

            // Move to the next node
            temp = front;
        }
        return prev;
    }
};
