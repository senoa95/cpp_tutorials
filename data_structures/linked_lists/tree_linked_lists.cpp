#include<iostream>
using namespace std;

struct Tnode  //each struct that has a value and the reference to the next struct
{
  int data;
  Tnode* left;
  Tnode* right;

Tnode(int userData)
{
  data = userData;
  left = NULL;
  right = NULL;
}
};

class Tree
{
public:
  Tnode* root;


Tree()
  {
    root->data = 0;
    root->left = NULL;
    root->right = NULL;
  }
};

int main(int argc, char const *argv[]) {
  Tree appleTree;
  appleTree.root->data = 23;
  appletree.root->left = new Tnode(4);
  appleTree.root->right = new Tnode(17);

  appleTree.root->left->right = new Tnode(36);
  appleTree.root->left->right->data = 42;

  cout<<LL.root->data<<endl;



  return 0;
}
