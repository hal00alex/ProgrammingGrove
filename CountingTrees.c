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
