
// global variable
// a variable created outside of a function is called globle variable and can access  from the outside

#include <iostream>
using namespace std ;

int x = 5;

void myFunction (){
    cout<< x<<"\n";
}

int main(){
    myFunction ();
    cout << x <<"\n";
    return 0;
}
