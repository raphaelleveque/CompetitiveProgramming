class Node:
    def __init__(self, key = 0, val = 0, nxt = None, prev = None):
        self.key = key
        self.val = val
        self.next = nxt
        self.prev = prev

class LRUCache:
    def __init__(self, capacity: int):
        self.lru = {} # key : node
        self.capacity = capacity
        self.left = Node(val=-1)
        self.right = Node(val=999)
        self.left.next = self.right
        self.right.prev = self.left

    def remove(self, node):
        prev = node.prev
        nxt = node.next
        prev.next = nxt
        nxt.prev = prev
    def insert(self, node, prev):
        nextnode = prev.next
        node.prev = prev
        node.next = nextnode
        prev.next = node
        nextnode.prev = node

        

    def get(self, key: int) -> int:
        if key in self.lru:
            node = self.lru[key]
            self.remove(node)
            self.insert(node, self.right.prev)
        node = self.lru.get(key, None)
        return node.val if node else -1
        

    def put(self, key: int, value: int) -> None:
        if key in self.lru:
            node = self.lru[key]
            self.remove(node)
            self.insert(node, self.right.prev)
            self.lru[key].val = value
        else:
            if len(self.lru) >= self.capacity:
                node = self.left.next
                self.remove(node)
                del self.lru[node.key]
            node = Node(key, value, prev=self.right.prev)
            self.insert(node, self.right.prev)
            self.lru[key] = node


        


# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)


# Create an LRUCache object with capacity 2
lru = LRUCache(2)

# Test case 1: Insert key-value pairs
lru.put(2, 1)
lru.put(1, 1)
lru.put(2, 3)
lru.put(4, 1)

# Test case 2: Retrieve values
print(lru.get(1))  # Expected output: 1
print(lru.get(2))  # Expected output: 1