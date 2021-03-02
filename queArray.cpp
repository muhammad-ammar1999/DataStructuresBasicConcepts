#include <bits/stdc++.h> 
using namespace std; 
  struct que
  {
      int front ,rear , capsity;
int* queue;
      que(int size)
      {
          front=rear;
          capsity= size;
      }



      void enque(int value)
      {
        queue[rear]=value;
        rear++;
      }
      void deque()
      {
          for (int i = 0; i < rear-1; i++)
          {
              queue[i]= queue[i-1];
             
          }
           cout <<" dequed" << "\n";
          rear--;
      }  
      void Display()
      {
          for (int i = front; i < rear+1; i++)
          {
              cout << queue[i]<<"<--" ;
          }
      }
        };

        int main (){
            que q (4);
   q.enque(4);
   q.enque(8);
   q.enque(12);
   q.enque(16);
q.Display();   
   q.deque();
   q.deque();
q.Display();   
   
   return 0;
        }