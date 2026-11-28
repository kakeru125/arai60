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
    ListNode dummy = ListNode{0, head};
    ListNode* tail = &dummy;

    while (tail->next != nullptr) {
      ListNode* node = tail->next;
      while (node->next != nullptr && node->val == node->next->val) {
        node = node->next;
      }
      if (tail->next == node) {
        tail = node;
      } else {
        tail->next = node->next;
      }
    }

    return dummy.next;
  }
};
