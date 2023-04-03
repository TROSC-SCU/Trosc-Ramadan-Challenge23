 #include <bits/stdc++.h> 

 using namespace std;

//reverse the linked list list and return it

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

   ListNode* reverseList(ListNode* head) {
        if (head==nullptr || head->next==nullptr) return head;
        ListNode* last=head;
       ListNode* temp=head->next;
     last->next=NULL;

     // complete the code :) 
     
     
    }
      
    

int main (){
ListNode* list;
  list = reverseList(list);
  
  return 0;
  
}
