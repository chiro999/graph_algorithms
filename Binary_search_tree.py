# Python program to implement preorder traversal 
class Node: 
    # Constructor to create a new node 
    def __init__(self, key): 
        self.key = key 
        self.left = None
        self.right = None
  
# Function to insert a new node with 
# given key in BST 
def insert(node, key): 
    # If the tree is empty, return a new node 
    if node is None: 
        return Node(key) 
  
    # Otherwise, recur down the tree 
    if key < node.key: 
        node.left = insert(node.left, key) 
    elif key > node.key: 
        node.right = insert(node.right, key) 
  
    # Return the node pointer 
    return node 
  
# Function to do preorder traversal of BST 
def preOrder(root): 
    if root: 
        print(root.key, end=" ") 
        preOrder(root.left) 
        preOrder(root.right) 
  
# Driver Code 
if __name__ == '__main__': 
    """ 
        Let us create a BST with a different set of keys
              40 
           /     \ 
          20      60 
         /  \    /  \ 
       10   30  50   70 
   """
    root = None
    keys = [40, 20, 10, 30, 60, 50, 70] 
  
    # Creating the BST 
    for key in keys: 
        root = insert(root, key) 
  
    # Function Call 
    print("Preorder Traversal of BST:")
    preOrder(root)
