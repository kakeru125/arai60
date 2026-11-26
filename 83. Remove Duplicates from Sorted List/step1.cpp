/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
 public:
  ListNode* deleteDuplicates(ListNode* head) {
    ListNode* currentNode = head;
    while (currentNode != nullptr) {
      ListNode* nextNode = currentNode->next;
      while (nextNode != nullptr && currentNode->val == nextNode->val) {
        nextNode = nextNode->next;
      }
      currentNode->next = nextNode;
      currentNode = nextNode;
    }
    return head;
  }
};
