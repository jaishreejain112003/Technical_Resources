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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL){
            return head;
        }
        if( !head->next ){
            return head;
        }
        ListNode* h1=reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return h1;
       
        
    }
};