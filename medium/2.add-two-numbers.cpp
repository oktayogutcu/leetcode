/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
 
    void insertAfter(ListNode* prev_node, int new_val)
    {
        // allocate new node
        ListNode* new_node = new ListNode();
    
        // put in the data
        new_node->val = new_val;
    
        // move the next of prev_node as new_node
        prev_node->next = new_node;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int tempVal = 0, carry = 0;
        ListNode *returnList, *tempList;
        returnList = new ListNode();
        tempList = returnList;

        // until the reaching end of both lists, continue to sum
        while(l1 || l2){
            tempVal = 0;
            // if there is remaining digits on l1 add to tempVal
            if(l1){
                tempVal += l1->val;
                l1 = l1->next;
            }
            // if there is remaining digits on l2 add to tempVal
            if(l2){
                tempVal += l2->val;
                l2 = l2->next;
            }

            tempVal += carry;

            // calculate the new carry
            carry = tempVal / 10;

            // insert new node with new value after current node 
            insertAfter(tempList, tempVal%10);

            // change current node as next node
            tempList = tempList->next; 

            // cout << tempVal%10 << endl;
        }

        // if there is a non zero value in carry, add the last node to list.
        if(carry > 0) insertAfter(tempList, carry);

        return returnList->next;
    }
};
// @lc code=end

