// Q: https://www.codechef.com/problems/NAICHEF
#include<bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    
	    double N,A,B;
	    cin>>N>>A>>B;
	    
	    int countA=0, countB=0;
	    
	    for (int i=0; i<N; i++){
	        int x;
	        cin>>x;
	        
	        if (x==A){
	            countA++;
	        }
	        
	        if (x==B){
	            countB++;
	        }
            continue;
	    }
	    
	    double pA = countA/N;
	    double pB = countB/N;
	    
	    double pWin = pA*pB;
	    
	    cout<<fixed<<setprecision(10)<<pWin<<endl;
	}
	return 0;
}


// Q: https://www.codechef.com/problems/DARLIG
#include <iostream>
using namespace std;

int main() {
    
	int T;
	cin>>T;
	
	while(T--){
	    
	    int N,K;
	    cin>>N>>K;
	    
	    if (K==0){
	        if ((N==0) || (N%4==0)){
	            cout<<"Off"<<endl;
	        }
	        else{
	            cout<<"On"<<endl;
	        }
	    }
	    else if (K==1){
	        if ((N==0) || (N%4==0)){
	            cout<<"On"<<endl;
	        }
	        else{
	            cout<<"Ambiguous"<<endl;
	        }
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/KTTABLE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    
	    int N, count=0;
	    cin>>N;
	    
	    int A[(N+1)] = {0};
	    
	    for (int i=1; i<=N; i++){
	        int a;
	        cin>>a;
	        A[i] = a;
	    }
	    
	    int newA[N] = {};
	    
	    for (int k=0; k<N; k++){
	        newA[k] = A[k+1] - A[k];
	    }
	    
	    int B[N] = {};
	    
	    for (int j=0; j<N; j++){
	        int b;
	        cin>>b;
	        B[j] = b;
	    }
	    
	    for (int check=0; check<N; check++){
	        if (newA[check] >= B[check]){
	            count++;
	        }
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}


// Q: https://www.codechef.com/problems/LUCKYFR
#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,count=0;
	    cin>>N;
	    
	    string str = to_string(N);
	    
	    for (int i=0; i<(str.length()); i++){
	        if (str[i] == '4'){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}