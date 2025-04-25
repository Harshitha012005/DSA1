class Solution:
    def insertAtHead(self, head, X):
      
        new_node = ListNode(X)
        new_node.next = head    
        return new_node         
