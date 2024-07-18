from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        if not head or not head.next:
            return
        
        # Passo 1: Encontrar o ponto médio da lista
        def findMiddle(head: ListNode) -> ListNode:
            slow, fast = head, head
            while fast and fast.next:
                slow = slow.next
                fast = fast.next.next
            return slow
        
        # Passo 2: Reverter a segunda metade da lista
        def reverseList(head: ListNode) -> ListNode:
            prev, curr = None, head
            while curr:
                next_temp = curr.next
                curr.next = prev
                prev = curr
                curr = next_temp
            return prev
        
        # Passo 3: Intercalar as duas metades
        def mergeLists(first: ListNode, second: ListNode) -> None:
            while second:
                tmp1, tmp2 = first.next, second.next
                first.next = second
                second.next = tmp1
                first, second = tmp1, tmp2
        
        # Encontra o ponto médio e divide a lista
        mid = findMiddle(head)
        second_half = mid.next
        mid.next = None
        
        # Reverte a segunda metade
        second_half = reverseList(second_half)
        
        # Intercala as duas metades
        mergeLists(head, second_half)

# Exemplo de uso:
head = ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5)))))
sol = Solution()
sol.reorderList(head)

# Print the reordered list: 1 -> 5 -> 2 -> 4 -> 3
current = head
while current:
    print(current.val, end=" -> " if current.next else "\n")
    current = current.next
