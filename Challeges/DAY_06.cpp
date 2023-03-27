// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
/**
* has cycle - function to determine if the linked list has a cycle in it.
*@head: the head of a linkedlist
*Return: true if there is a cycle in the linked list. 
        Otherwise, return false.
*/
bool hasCycle(ListNode *head) {
    ListNode* tmp = head;
    map < ListNode*, bool > visited;
    while(tmp){
        if(visited[tmp]) return true;
        visited[tmp] = true;
        tmp = tmp->next;
    }
    return 0;
}
 
/**
*Constraints:
 
The number of the nodes in the list is in the range [0, 104].
-10^5 <= Node.val <= 10^5
*/

// complete the missing part.
