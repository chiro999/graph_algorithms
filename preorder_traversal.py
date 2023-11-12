# Python3 program to for tree traversals
 
 
# A class that represents an individual node
# in a Binary Tree
class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key
 
 
# A function to do preorder tree traversal
def printPreorder(root):
 
    if root:
 
        # First print the data of node
        print(root.val, end=" "),
 
        # Recur on left child
        printPreorder(root.left)
 
        # Recur on right child
        printPreorder(root.right)
 
 
# Describe Binary Tree
if __name__ == "__main__":
    root = Node(1)
    root.left = Node(2)
    root.right = Node(8)
    root.left.left = Node(6)
    root.left.right = Node(7)
 
    print("Preorder traversal of binary tree is")
    printPreorder(root)
