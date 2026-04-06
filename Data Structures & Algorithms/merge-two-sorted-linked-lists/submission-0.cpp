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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // vector<int> arr;
        // while(list1 !=NULL){
        //     arr.push_back(list1->val);
        //     list1 = list1->next;

        // }
        // while(list2 !=NULL){
        //     arr.push_back(list2->val);
        //     list2 = list2->next;
        // }
        // sort(arr.begin(), arr.end());
        // ListNode* dummy= new ListNode(-1);
        // ListNode* temp=dummy;
        // for(int x:arr){
        //     temp->next= new ListNode(x);
        //     temp= temp->next;
        // }
        // return dummy->next;

        //optimal approch
        ListNode* dummy= new ListNode(-1);
        ListNode* temp=dummy;
        while(list1 !=NULL && list2!= NULL){
            //compare element of both lists and link the smaller node to the merged list
            if(list1->val <= list2->val){
                temp->next = list1;
                list1 = list1->next;
            }else{
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }
        if(list1!=NULL){
            temp->next = list1;
        }else{
            temp->next= list2;
        }

        return dummy->next;
        
    }
};
