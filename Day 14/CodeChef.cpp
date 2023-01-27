// Q: https://www.codechef.com/problems/AMR15A
#include <iostream>
using namespace std;

int main() {
	int N;
	cin>>N;
	
	int countE, countO;
	countE = 0;
	countO = 0;
	
	while(N--){
	    int A;
	    cin>>A;
	    
	    if (A%2==0){
	        countE += 1;
	    }
	    else{
	        countO += 1;
	    }
	}
	if (countE>countO){
	    cout<<"READY FOR BATTLE";
	}
	else{
	    cout<<"NOT READY";
	}
	return 0;
}


// Q: https://www.codechef.com/problems/THREETOPICS
#include <iostream>
using namespace std;

int main() {
	int A,B,C,X;
	cin>>A>>B>>C>>X;
	
	if (X==A || X==B || X==C){
	    cout<<"YES";
	}
	else{
	    cout<<"NO";
	}
	return 0;
}


// Q: https://www.codechef.com/problems/DECINC
#include <iostream>
using namespace std;

int main() {
	int N;
	cin>>N;
	if (N%4==0){
	    N++;
	}
	else{
	    N--;
	}
	cout<<N;
	return 0;
}