# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def mergeLists(self, l1, l2):
        dummy = ListNode()
        cur = dummy
        while l1 and l2:
            if l1.val < l2.val:  # Note: use < to merge in ascending order
                cur.next = l1
                l1, cur = l1.next, cur.next
            else:
                cur.next = l2
                l2, cur = l2.next, cur.next
        if l1:
            cur.next = l1
        elif l2:
            cur.next = l2
        return dummy.next

    def mergeKLists(self, lists):
        if not lists or len(lists) == 0:
            return None
        
        while len(lists) > 1:
            mergedLists = []

            for i in range(0, len(lists), 2):
                l1 = lists[i]
                l2 = lists[i + 1] if i + 1 < len(lists) else None
                l1andl2 = self.mergeLists(l1, l2)
                mergedLists.append(l1andl2)
            lists = mergedLists
        return lists[0]

# Helper function to create linked list from Python list
def create_linked_list(arr):
    if not arr:
        return None
    head = ListNode(arr[0])
    current = head
    for val in arr[1:]:
        current.next = ListNode(val)
        current = current.next
    return head

# Helper function to convert linked list to Python list
def linked_list_to_list(node):
    result = []
    while node:
        result.append(node.val)
        node = node.next
    return result

# Test cases
solution = Solution()

# Test case 1: merging three sorted linked lists
lists = [
    create_linked_list([1, 4, 5]),
    create_linked_list([1, 3, 4]),
    create_linked_list([2, 6])
]

merged_head = solution.mergeKLists(lists)
print(linked_list_to_list(merged_head))  # Output: [1, 1, 2, 3, 4, 4, 5, 6]

# Test case 2: merging an empty list of linked lists
lists = []
merged_head = solution.mergeKLists(lists)
print(linked_list_to_list(merged_head))  # Output: []

# Test case 3: merging a list of one empty linked list
lists = [None]
merged_head = solution.mergeKLists(lists)
print(linked_list_to_list(merged_head))  # Output: []

# Test case 4: merging linked lists with one element each
lists = [
    create_linked_list([1]),
    create_linked_list([0])
]
merged_head = solution.mergeKLists(lists)
print(linked_list_to_list(merged_head))  # Output: [0, 1]
