#include <iostream>
using namespace std;
void changeValue(int *x);
int main(){
    int a = 5;
    cout << "Before function call: " << a << endl;
    changeValue(&a);
cout << "After function call: " << a << endl;
return 0;
}
void changeValue(int *x){
    *x = *x + 10;
}