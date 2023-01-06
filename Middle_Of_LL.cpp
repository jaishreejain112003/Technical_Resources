#include<iostream>
#include<bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };


class Solution {
public:
   ListNode* middleNode(ListNode* head , int n ) {
       if(n==1){
           return head;
       }
      ListNode* temp1 = middleNode(head -> next,--n)  ;
      return temp1 ;


   }
    ListNode* middleNode(ListNode* head) {
        if(head == NULL){
            return head;
        }
        int c=1;
        ListNode* temp = head;
        while(head->next != NULL){
              c++;
              head = head -> next ;
        }
        int n = c/2 + 1;
        return middleNode(temp,n);
    }
};