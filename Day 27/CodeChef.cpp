// Q: https://www.codechef.com/problems/TRUESCORE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A,B,C,D;
	    cin>>A>>B;
	    cin>>C>>D;
	    if (A<=C && B<=D){
	        cout<<"POSSIBLE"<<endl;
	    }
	    else{
	        cout<<"IMPOSSIBLE"<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/LP1TO201/problems/CHFRICH
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A,B,X;
	    cin>>A>>B>>X;
	    cout<<((B-A)/X)<<endl;
	}
	return 0;
}