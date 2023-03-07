// Q: https://www.codechef.com/problems/ATM2
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,K;
	    cin>>N>>K;
	    
	    for (int i=1; i<=N; i++){
	        int A;
	        cin>>A;
	        
	        if (A<=K){
	            cout<<"1";
	            K = K-A;
	        }
	        else{
	            cout<<"0";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}


// Q: https://www.codechef.com/problems/CNDY
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    
	    int x = 2*N;
	    int arr[x]={};
	    
	    for (int i=0; i<x; i++){
	        int A;
	        cin>>A;
	        arr[i]=A;
	    }
	    
	    int temp=0;
	    
	    for (int i=0; i<x; i++){
	        int count=0;
	        for (int j=0; j<x; j++){
	            
	            if (arr[i]==arr[j]){
	                count++;
	            }
            	if (count>2){
                    temp=-1;
                }
                else{
                    continue;
                }
	        }
	        temp++;
	    }
	    if (temp==x){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/DIET
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,K,extra=0,enough=0;
	    cin>>N>>K;
	    
	    int arr[N]={};
	    for (int i=0; i<N; i++){
	        int x;
	        cin>>x;
	        arr[i]=x;
	    }
	    
	    
	    for (int i=0; i<N; i++){
	        
	        int A = arr[i];
	        
	        if (A==K){
	            enough++;
	        }
	        else if (A>K){
	            extra = extra + (A-K);
	            enough++;
	        }
	        else{
	            if ((A+extra)==K){
	                extra = extra-(K-A);
	                enough++;
	            }
	            else if ((A+extra)>K){
	                extra = (A+extra)-K;
	                enough++;
	            }
	            else{
	                cout<<"NO "<<(i+1)<<endl;
	                break;
	            }
	        }
	    }
	    
	    if (enough==N){
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}