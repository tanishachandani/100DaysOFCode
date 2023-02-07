// GOBAL VS LOCAL VARIABLES

// if not initialized, global variables take 0 value whereas local variables take a random undefined value.

// keyword: extern
// to access a global var in a function which is defined below the function
#include <iostream>
using namespace std;
extern int x;
int main(){
    cout<<x<<endl;
    return 0;
}
int x=10;

// when trying to access a variable, the innermost scope is is considered. 

// keywords: static, const, auto