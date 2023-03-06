// Q: https://www.codechef.com/problems/PLAYPIAN
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    string s;
	    cin>>s;
	    
	    int temp=0;
	    
	    for (int i=0; i<s.length(); i+=2){
	        int A=0,B=0;
	        
	        for (int j=i; j<i+2; j++){
	            if (s[j]=='A'){
	                A++;
	            }
	            else{
	                B++;
	            }
	            if ((A==1)&&(B==1)){
	                temp++;
	            }
	        }
	    }
	    if (temp==(s.length()/2)){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/POPCORN
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A1,A2,B1,B2,C1,C2;
	    cin>>A1>>A2>>B1>>B2>>C1>>C2;
	    
	    int a = A1+A2;
	    int b = B1+B2;
	    int c = C1+C2;
	    
	    cout<<(max(max(a,b),c))<<endl;
	}
	return 0;
}


// Q: https://www.codechef.com/problems/BALLBOX
#include <iostream>
using namespace std;

int sum (int x) {
    int temp = 0;
    for (int i=1; i<=x; i++){
        temp+=i;
    }
    return temp;
}

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,K;
	    cin>>N>>K;
	    
	    if (N>=(sum(K))){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}