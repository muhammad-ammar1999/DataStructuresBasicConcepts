#include <bits/stdc++.h>
 
using namespace std;
 
#define MAX 1000

class Mystack{
   int top ;

public:
int a[MAX];
Mystack(){top = -1;}
bool push(int x){
if (top >= (MAX-1))
{
   cout << "Stack Overflow";
        return false;
        }
        else{
           a[++top]=x;
            cout << x << " pushed into stack\n";
        return true;
        }
};
int pop(){
if (top < 0)
{
   cout << "Stack underflow";
        return false;
        }
        else{
            int x = a[top--];
         
        return x;
        }
 
};
};
int main(){
   class Mystack s;
   s.push(10);
   s.push(11);
   s.push(1);
   int x = s.pop();
   cout<< x<<  "  poped\n";
   
     return 0;
}

