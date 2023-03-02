// Q: https://www.codechef.com/problems/ZOOZ
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    
	    if (N%2==0){
	        cout<<"1";
	        for (int i=0; i<N-2; i++){
	            cout<<"0";
	        }
	        cout<<"1"<<endl;
	    }
	    else{
	        int temp=(N/2)+1;
	        cout<<"0";
	        for (int i=2; i<=N; i++){
	            if (i==temp){
	                cout<<1;
	            }
	            else{
	                cout<<"0";
	            }
	        }
	        cout<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/BOMBTHEBASE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,X,temp=0,temp2=0;
	    cin>>N>>X;
	    
	    int strength [N] = {};
	    
	    for(int i=0;i<N;i++){
	        int A;
	        cin>>A;
	        strength[i]=A;
	    }
	    
	    
	    for (int i=0; i<N; i++){
	        if (strength[i]<X){
	            temp = i;
	            temp2 = 1;
	        }
	        else{
	            continue;
	        }
	    }
	    
	    if ((temp==0) && (temp2 == 0)){
	        cout<<"0"<<endl;
	    }
	    else{
	        cout<<temp+1<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/CHFSPL
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A,B,C;
	    cin>>A>>B>>C;
	    
	    int a = A+B;
	    int b = B+C;
	    int c = C+A;
	    
	    int x = max(a,b);
	    int y = max(b,c);
	    int p = max(x,y);
	    
	    cout<<p<<endl;
	    
	}
	return 0;
}
