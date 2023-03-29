// Q: https://www.codechef.com/problems/CAN_REACH
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,k;
	    cin>>x>>y>>k;
	    if(x%k==0 && y%k==0){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}

// Q: https://www.codechef.com/problems/TRISQ
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int b;
	    cin>>b;
	    cout<<((b/2)*(b/2)-(b/2))/2<<endl;
	}
	return 0;
}

// Q: https://www.codechef.com/problems/FRGAME
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int A,B,C,D;
	    cin>>A>>B>>C>>D;
	    
	    if(B>A)
	    {
	        A=A+C;
	    }
	    else
	    {
	        B=B+C;
	    }
	    if(B>A)
	    {
	        A=A+D;
	    }
	    else
	    {
	        B=B+D;
	    }
	    if(B>A)
	    {
	        cout<<"S"<<endl;
	    }
	    else
	    {
	        cout<<"N"<<endl;
	    }
	}
	return 0;
}

// Q: https://www.codechef.com/problems/TWOVSTEN
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x%10==0){
	        cout<<0<<endl;
	    }
	    else if(x%10==5){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<-1<<endl;
	    }
	}
	return 0;
}