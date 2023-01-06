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
    bool isPalindrome(ListNode* head) {
        vector<int> v1;
        while(head){
            v1.push_back(head->val);
            head = head -> next ;
        }
        int n = v1.size();
        for(int i=0;i<n/2;++i){
            if(v1[i] != v1[n-1-i]){
                return false;
            }
        }
        return true;
        
    }
};