#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data ; struct Node *left ; struct Node *Right; 
Node(int value)
{
    data = value;
    left=NULL;
    Right=NULL;
}  
};

int main(){

Node *root = new Node(5);
root->left=new Node(3);
root->Right=new Node(6);

root->left->left=new Node(2);
root->left->left->left=new Node(1);

root->Right->Right=new Node(10);
root->Right->left=new Node(8);

}