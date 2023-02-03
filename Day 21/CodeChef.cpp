// Q: https://www.codechef.com/problems/TRANSFORM
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X;
	    cin>>X;
        
        if (X==1){
            cout<<"HUGE"<<endl;
        }
        else if (X==2){
            cout<<"SMALL"<<endl;
        }
        else{
    	    if (X%3==0){
	            cout<<"NORMAL"<<endl;
	        }
	        else if (X%3==1){
	            cout<<"HUGE"<<endl;
	        }
	        else if (X%3==2){
	            cout<<"SMALL"<<endl;
	        }
        }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/WGHTS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int W,X,Y,Z;
	    cin>>W>>X>>Y>>Z;
	    
	    if ((X==W) || (Y==W) || (Z==W)){
	        cout<<"YES"<<endl;
	    }
	    else if ((X+Y==W) || (Y+Z==W) || (Z+X==W)){
	        cout<<"YES"<<endl;
	    }
	    else if (X+Y+Z==W){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/XJUMP
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    if (X%Y==0){
	        cout<<X/Y<<endl;
	    }
	    else{
	        cout<<(X/Y)+(X-(Y*(X/Y)))<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/BLACKJACK
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A,B;
	    cin>>A>>B;
	    if ((21-(A+B))>10){
	        cout<<"-1"<<endl;
	    }
	    else{
	        cout<<21-(A+B)<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/FILLCANDIES
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,K,M;
	    cin>>N>>K>>M;
	    int candies_in_one_bag = K*M;
	    
	    if (N%candies_in_one_bag == 0){
	        cout<<(N/candies_in_one_bag)<<endl;
	    }
	    else{
	        cout<<(N/candies_in_one_bag)+1<<endl;
	    }
	}
	return 0;
}