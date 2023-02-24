
// Q: https://www.codechef.com/problems/TEKKEN
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A,B,C;
	    cin>>A>>B>>C;
	    
	    if(A>(max(B,C))){
	        cout<<"YES"<<endl;
	    }
	    else if (A<(min(B,C))){
	        if ((A>((B-(min(B,C))))) && (A>(C-(min(B,C))))){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	    else{
	        if ((A>((B-(min(B,C))))) && (A>(C-(min(B,C))))){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	    
	}
	return 0;
}