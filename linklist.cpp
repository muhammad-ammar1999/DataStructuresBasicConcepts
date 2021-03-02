#include <bits/stdc++.h> 
using namespace std; 
class node{
	public:
	int data;
	node *next;


};
void printList(node* head)
{
while (head != NULL)
{
	cout<< head->data << " ";
	head = head->next;
}

}
int main()
{
node *head = NULL;
node *one = NULL;
node *two = NULL;
node *three = NULL;

head = new node();
one = new node();
two = new node();
three  = new node();

one->data = 1;
two->data = 2;
three->data = 3;

head = one;
one-> next = two;
two-> next = three;

printList(head);

 return 0; 
 
}