#include <bits/stdc++.h> 
using namespace std; 
struct node{
	public:
	int data;
	node *next;
node(int d) 
    { 
        data = d; 
        next = NULL; 
    } 

};
struct QueLinklist
{
    struct node *front;
struct node *raer;

QueLinklist()
{
  front=raer=NULL;  
}

void Enque(int value){
node *temp = new node(value);
if(raer==NULL)
{front=raer=temp;
return;
}
    raer->next = temp;
    raer =  temp;
    }
    void deque(){
        if (front == NULL) 
            return; 

node *temp=front;
    front = front->next ;
delete(temp);
};

};
int main() 
{ 
  
    QueLinklist q; 
    q.Enque(10); 
    q.Enque(20); 
    q.deque(); 
    q.deque(); 
    q.Enque(30); 
    q.Enque(40); 
    q.Enque(50); 
    q.deque(); 
   q.Enque(70);
//  cout << "Queue Front : " << (q.front)->data ; 
    cout << "Queue Rear : " << (q.raer)->data; 

    
    
    return 0;
} 
