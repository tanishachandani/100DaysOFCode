// Q: https://www.codechef.com/problems/GRIDBL
#include <iostream>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    if(n%2==0 && m%2==0){
        cout<<"0"<<endl;
    }else if (n%2==0 && m%2!=0){
        cout<<n<<endl;
    }else if (n%2!=0 && m%2==0){
        cout<<m<<endl;
    }else{
        cout<<n+m-1<<endl;
    }
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}


// Q: https://www.codechef.com/problems/JOINING
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int n, k;
	    cin>>n>>k;
	    
	    cout<< ceil(n/5.0)- ceil(k/5.0) <<endl;
	}
	return 0;
}


// Q: https://www.codechef.com/problems/DOLL
#include <iostream>
using namespace std;

int main() {
	int T,K,N,count;
	cin>>T;
	while(T--){
	    int count=0;
	    cin>>N>>K;
	    int H[N];
	    for(int i=0;i<N;i++){
	        cin>>H[i];
	        if(H[i]>K){
	        count++;
	    }
	   
	    }
	    cout<<count<<endl;
	     
	}
	return 0;
}


// Q: https://www.codechef.com/problems/JOINING
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    if(n<=5 || k==n)
	    cout<<0<<"\n";
	    else if(n%5==0 && k%5!=0)
	    cout<<n/5-k/5-1<<endl;
	    else if(n%5!=0 && k%5==0)
	    cout<<n/5-k/5+1<<endl;
	    else
	    cout<<n/5-k/5<<endl;
	        
	}
	return 0;
}