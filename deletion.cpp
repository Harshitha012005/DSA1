class Solution {
public:
    void deleteNode(ListNode* node) {
        if (node == nullptr || node->next == nullptr) return; // Safety check

        // Copy data from the next node
        ListNode* nextNode = node->next;
        node->val = nextNode->val;

        // Bypass the next node
        node->next = nextNode->next;

        // Delete the next node to free memory
        delete nextNode;
    }
};
