#include <iostream>
using namespace std;
void add(int &x, int &y);
int main(){
int a=5;
int b=3;
cout<<"Before function call:"<< endl;
cout<<"a = " << a<<" b = "<<b<< endl;
add(a, b);   
cout<<"After function call:" <<endl;
cout<<"a = " <<a<< " b = " <<b<<endl;
return 0;
}
void add(int &x, int &y){
  x =x+10;
  y =y+10;
}