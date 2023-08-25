/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 */

// @lc code=start
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

    void printList(struct ListNode* n)
    {
        while (n != NULL) {
            cout << "addr: " << n << " - " << n->val << endl;
            n = n->next;
        }
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode *mergedList, *temp;
        mergedList = new ListNode();
        temp = mergedList;

        //compare and merge until one of the lists goes to null
        while(list1 && list2){
            // cout << "List1: " << list1 << " - " << list1->val << endl;
            // cout << "List2: " << list2 << " - " << list2->val << endl;

            if(list1->val < list2->val){
                temp->next = list1;
                list1 = list1->next;
            }
            else{
                temp->next = list2;
                list2 = list2->next;   
            }
            temp = temp->next;
        }
    
    //Both list1 and list2 are sorted in non-decreasing order.
    //if list2(list1) ended first, next node (also rest of the nodes) of list1 (list2) must be merged.
    if(list1) temp->next = list1; 
    if(list2) temp->next = list2;

    // cout << "Temp Head: " << temp << endl;
    // cout << "MergedList Head: " << mergedList << endl;
    
    mergedList = mergedList->next;

    // printList(mergedList);
    return mergedList;   

    }
    
};
// @lc code=end

