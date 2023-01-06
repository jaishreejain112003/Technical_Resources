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
    
    ListNode* reorderList1(ListNode* head) {
       while(head->next->next){
           head=head->next;
       }
       ListNode * h1 = head->next;
       head->next = NULL;
       return h1;
      }
      
      void reorderList(ListNode* head){
          if(!head || !head->next || !head->next->next){
              return ;
          }
          ListNode * tail =reorderList1(head->next);
          ListNode * cc = head->next;
          head->next = tail;
          tail->next =cc;
          reorderList(cc);
      }
};