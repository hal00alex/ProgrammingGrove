//creating a tree 
  struct TreeNode {
    int item;         // The data in this node.
    TreeNode *left;   // Pointer to the left .
    TreeNode *right;  // Pointer to the right .
    }
  
//adding a node in a sorted binary tree
  private void Insert(int item2, TreeNode TreeNode1){ 
  //if tree is empty ; 
  if (TreeNode1 == null){
    TreeNode1.item = item2; 
    TreeNode1.left = null; 
    TreeNode1.right = null; 
    } 
    
    //if going left
    if (item2 < TreeNode1.item){
      TreeNode TreeNode2 = TreeNode1.left; 
      Insert(item2, TreeNode2); 
      TreeNode1.left = TreeNode2; 
    }
    
    //if going right 
    if (item2 <= TreeNode.item){
      TreeNode TreeNode2 = TreeNode1.right; 
      Insert (item2, TreeNode2) 
      TreeNode1.right = TreeNode2
    } 
} 
//above function may need to check for duplicate keys 
//removing a node taken from http://www.algolist.net/Data_structures/Binary_search_tree/Removal 
//Basic idea is to find a root or node to replace the deleted node first. Then resort the tree 
bool BinarySearchTree::remove(int value) {
      if (root == NULL)
            return false;
      else {
            if (root->getValue() == value) {
                  BSTNode auxRoot(0);
                  auxRoot.setLeftChild(root);
                  BSTNode* removedNode = root->remove(value, &auxRoot);
                  root = auxRoot.getLeft();
                  if (removedNode != NULL) {
                        delete removedNode;
                        return true;
                  } else
                        return false;
            } else {
                  BSTNode* removedNode = root->remove(value, NULL);
                  if (removedNode != NULL) {
                        delete removedNode;
                        return true;
                  } else
                        return false;
            }
      }
}
 
BSTNode* BSTNode::remove(int value, BSTNode *parent) {
      if (value < this->value) {
            if (left != NULL)
                  return left->remove(value, this);
            else
                  return NULL;
      } else if (value > this->value) {
            if (right != NULL)
                  return right->remove(value, this);
            else
                  return NULL;
      } else {
            if (left != NULL && right != NULL) {
                  this->value = right->minValue();
                  return right->remove(this->value, this);
            } else if (parent->left == this) {
                  parent->left = (left != NULL) ? left : right;
                  return this;
            } else if (parent->right == this) {
                  parent->right = (left != NULL) ? left : right;
                  return this;
            }
      }
}
 
int BSTNode::minValue() {
      if (left == NULL)
            return value;
      else
            return left->minValue();
}
