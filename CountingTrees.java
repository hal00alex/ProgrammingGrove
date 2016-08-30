//here we are going to sum a binary tree 
//based on https://stackoverflow.com/questions/3784411/c-sum-of-all-node-values-of-a-binary-tree 

#include <iostream>

typedef struct sNode {
    int value;
    struct sNode *left;
    struct sNode *right;
} 
  sNode tNode;
  //magically set up tNode with values
  //then run sum program 
  
//always do this via recurssion since left and right 
//O(n) if global varaible used? 
//O(n!) if stack used? 

int sum (tNode *node) {
    if (node == null){
      return 0;
      } 
    return (node->value + sum (node->left) + sum (node->right));
}


//searching for a node. You have to go left or right so it is recurisive with a few more decisions
//it is similar to binary search, however binary search only applies to sorted arrays. Trees have branches where we must make a choice 
private Node search(String name, Node node){
    if(node != null){
        if(node.name().equals(name)){
           return node;
        } else {
            Node foundNode = search(name, node.left);
            if(foundNode == null) {
                foundNode = search(name, node.right);
            }
            return foundNode;
         }
    } else {
        return null;
    }
}
