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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* tail = NULL;
        ListNode* head = NULL;
        if(!list1){
            return list2;
        }
        else if(!list2){
            return list1;
        }
        if(list1 -> val >= list2 -> val){
             head = list2;
           list2 = list2 -> next;
        }
        else{
          head = list1;
        list1 = list1 -> next;
        }
         tail = head;
        while(list1 && list2){
            if(list1 -> val <= list2 -> val){
                
                tail -> next = list1;
                list1=list1 -> next;
            }
            else{
                
                tail -> next = list2;
                list2=list2 -> next;
            }
            tail = tail->next;
        }
        if(list1){
            tail->next =list1;
        }
        else if(list2){
            tail->next = list2;
        }
        return head;
    }
};