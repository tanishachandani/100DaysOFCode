// Q: https://www.codechef.com/problems/S01E01
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    if (N<21){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}


//Q: https://www.codechef.com/problems/FRIMEET
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X1,X2;
	    cin>>X1>>X2;
	    if (X1==X2){
	        cout<<"YES"<<endl;
	    }
	    else if (X1<X2){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/COMPCAND
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,K;
	    cin>>N>>K;
	    
	    if (K>N){
	        if (N==0){
	            cout<<"0"<<endl;
	        }
	        else{
	            cout<<"1"<<endl;
	        }
	    }
	    else{
    	    if (N%K==0){
	            cout<<(N/K)<<endl;
	        } 
	        else{
	            cout<<"-1"<<endl;
	        }
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/SAVWATER
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int H,x,y,C;
	    cin>>H>>x>>y>>C;
	    
	    if ((H*(x+(y/2)))<=C){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}


//Q: https://www.codechef.com/problems/SUNDAY
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    int holidays = (30/7)*2;
	    
	    cin>>N;
	    
	    for (int i=0; i<N; i++){
	        int A;
	        cin>>A;
	        
            if (A>7){
    	        if ((A%7!=0) && (A%7!=6)){
    	            holidays++;
    	        }
            }
            else if (A<6){
                holidays++;
            }
	    }
	    cout<<holidays<<endl;
	}
	return 0;
}


// Q: https://www.codechef.com/problems/DRUNKALK
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int k, position=0;
	    cin>>k;
	    
	    if (k%2==0){
	        position = k;
	    }
	    else{
	        position = (k-1)+3;
	    }
	    cout<<position<<endl;
	}
	return 0;
}