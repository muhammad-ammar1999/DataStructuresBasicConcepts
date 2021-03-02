
#include <iostream>
using namespace std;
 
int main()
{ int i,num;
cout<<"Enter Input size "<<"/n";
cin>>num;
int *array = new int[num];
cout<<"Enter  "<<num<<"item";
for(i=0;i<num;i++){
cin>>array[i];
}
for(i=0;i<num;i++)
cout<<array[i];

return 0;
}