// Q: https://www.codechef.com/problems/NEGPROD
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A,B,C;
	    cin>>A>>B>>C;
	    
	    if (((A*B)<0) || ((A*C)<0) || ((B*C)<0)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/POLTHIEF
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X,Y,seconds;
	    seconds=0;
	    cin>>X>>Y;
	    while(X!=Y){
	        if (X<=Y){
    	        X+=2;
    	        Y+=1;
    	        seconds++;
	        }
	        else {
	            X-=2;
	            Y-=1;
	            seconds++;
	        }
	    }
	    cout<<seconds<<endl;
	}
	return 0;
}


// Q: https://www.codechef.com/problems/JENGA
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,X;
	    cin>>N>>X;
	    if (X<N){
	        cout<<"NO"<<endl;
	    }
	    else{
	        if (X%N==0){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/MINCARS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    if (N%4==0){
	        cout<<(N/4)<<endl;
	    }
	    else{
	        cout<<((N/4)+1)<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/SUMNEQ
#include <iostream>
using namespace std;

int main() {
	int N;
	cin>>N;
	cout<<N-1<<endl;
	return 0;
}


// Q: https://www.codechef.com/problems/SST
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A,B;
	    cin>>A>>B;
	    
        int valA, valB;
        valA = 10*A;
        valB = 5*B;
        if (valA==valB){
            cout<<"ANY"<<endl;
        }
        else if (valA>valB){
            cout<<"FIRST"<<endl;
        }
        else{
            cout<<"SECOND"<<endl;
        }
	}        
	return 0;
}


// Q: https://www.codechef.com/problems/BATH
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    cout<<(X/(2*Y))<<endl;
	}
	return 0;
}


// Q: https://www.codechef.com/problems/FLIPCARDS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,X,up,down;
	    cin>>N>>X;
	    up = X;
	    down = N-X;
	    
	    if (N==X){
	        cout<<"0"<<endl;
	    }
	    else{
	        if (up<down){
	            cout<<up<<endl;
	        }
	        else{
	            cout<<down<<endl;
	        }
	    }
	}
	return 0;
}