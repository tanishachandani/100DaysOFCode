// Q: https://www.codechef.com/problems/MISSP
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,temp,count=0;
	    cin>>N;
	    int dolls[N]={};
	    
	    for (int i=0; i<N; i++){
	        int type;
	        cin>>type;
	        dolls[i]=type;
	    }
	    
	    for (int i=0; i<N; i++){
	        for (int j=0; j<N; j++){
	            if (dolls[i]==dolls[j]){
	                count++;
	                continue;
	            }
	            else{
	                continue;
	            }
	        }
    	    if (count%2!=0){
	            temp = dolls[i];
	            cout<<temp<<endl;
	            break;
	        }
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/CHN09
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    string s;
	    cin>>s;
	    
    	int a = 0;
	    int b = 0;
	    int n = s.length();
	    
	    for (int i=0; i<n; i++){
	        
	        if (s[i] == 'a'){
	            a++;
	        }
	        else {
	            b++;
	        }
	    }
	    
	    cout<<min(a,b)<<endl;
	}
	return 0;
}


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
