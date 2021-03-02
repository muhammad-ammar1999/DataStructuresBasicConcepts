// C++ program to Implement a stack 
#include <bits/stdc++.h> 
using namespace std; 

struct node
{
    int data;
    node* next;
};
struct node* top;

void push(int value)
{
    struct node* temp;
    temp = new node();

    if (!temp)
    { 
        cout << "\nHeap Overflow"; 
        exit(1); 
    }

    temp->data=value;
    temp->next=top;
    top=temp;


}
void pop()
{
    struct node* temp;
   

if (top == NULL) 
    { 
        cout << "\nStack Underflow" << endl; 
        exit(1); 
    } 
    else
    { 
        temp = top; 
        top = top->next; 
        temp->next = NULL;
        free(temp);     
    
    }
}

void display() 
{ 
	struct node* temp; 

	// Check for stack underflow 
	if (top == NULL)
	{ 
		cout << "\nStack Underflow"; 
		exit(1); 
	} 
	else
	{ 
		temp = top; 
		while (temp != NULL)
		{ 

			// Print node data 
			cout << temp->data << "-> "; 

			// Assign temp link to temp 
			temp = temp->next; 
		} 
	} 
} 

// Driver Code 
int main() 
{ 
	
	// Push the elements of stack 
	push(11); 
	push(22); 
	push(33); 
	push(44); 

	// Display stack elements 
	display(); 

	// Delete top elements of stack 
	pop(); 
	 

	// Display stack elements 
	display(); 

	return 0; 
} 


