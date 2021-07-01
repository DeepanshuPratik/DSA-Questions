#include <bits/stdc++.h>

using namespace std;

// Leatcode Add two numbers (Adobe Medium level)
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0,sum=0;   
        ListNode* r=NULL;    //another linked list to store addition
        ListNode** node=&r;  // pointer to that linked list
        int x,y;
        while(l1!=NULL || l2!=NULL){ // it will run till any one of linked list reaches end.
            x=0; y=0;      // as one of the list reaches end so its value should be zero for other linked list sum.
            if(l1!=NULL){           
                x=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                y=l2->val;
                l2=l2->next;
            }
            if(x+y+carry>=10){    // if previous carry + sum of both nos >=10 then we have to update carry and final answer
                sum=x+y+carry;    // x=5 y=4 carry=3 sum=12 actual answer= sum%10=2 and carry=12/10=1
                carry=sum/10;
                sum=sum%10;
            }
            else{
                sum=x+y+carry;
                carry=0;
            }
            *node= new ListNode(sum);  // created new node for sum of 2 digits 
            node=&((*node)->next);     // and then setting the node of the result to the next node.
        }
        return r;
    }
};
