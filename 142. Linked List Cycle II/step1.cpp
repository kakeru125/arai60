/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
 public:
  ListNode* detectCycle(ListNode* head) {
    std::unordered_set<ListNode*> visited;
    ListNode* node = head;
    while (node != nullptr) {
      if (visited.contains(node)) {
        return node;
      }
      visited.insert(node);
      node = node->next;
    }
    return nullptr;
  }
};
