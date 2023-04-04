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

    while (temp != nullptr) {
        ListNode *next = temp->next;
        temp->next = last;
        last = temp;
        temp = next;
    }

    return last;
}
      
    

int main (){
ListNode* list=new ListNode(2, new ListNode(0, new ListNode(2, new ListNode(3))));
  list = reverseList(list);
  while (list != nullptr) {
      cout << list->val << ' ';
      list = list->next;
    }
  return 0;
  
}
