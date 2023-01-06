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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       int len1=0;
       int len2=0;
       ListNode * A_h=headA;
       ListNode * B_h=headB;
       while(A_h){
           A_h = A_h->next;
           len1++;
       }
       while(B_h){
           B_h = B_h->next;
           len2++;
       }
      
       while(len1>len2){
           headA = headA->next;
           len2++;
       }
       while(len1<len2){
           headB = headB -> next;
           len1++;
       }
       while(headA != headB){
           headA = headA -> next;
           headB = headB -> next;
       }
       return headA == headB ? headA : NULL;


        
    }
};

