class node:
    def __init__(self,u):
        self.data=u
        self.left=None
        self.right=None
        
def inorder(root):
    if(root==None):
        return
    inorder(root.left)
    print(root.data,end=" ")
    inorder(root.right)
    
def preorder(root):
    if(root==None):
        return
    print(root.data,end=" ")
    preorder(root.left)
    preorder(root.right)
    
def postorder(root):
    if(root==None):
        return
    postorder(root.left)
    postorder(root.right)
    print(root.data,end=" ")

def height(root):
    if(root==None):
        return -1
    l=height(root.left)
    r=height(root.right)
    return max(l,r)+1
def sum(root):
    if(root==None):
        return 0
    return root.data+sum(root.left)+sum(root.right)
    
head=node(4)
head.right=node(5)
head.left=node(6)
head.left.left=node(6)

inorder(head)
print()

preorder(head)
print()

postorder(head)
print()

print("height of tree",(height(head)))
    
print("sum of tree:",sum(head))
