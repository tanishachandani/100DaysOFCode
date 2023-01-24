// Q: https://www.codechef.com/problems/CHEFBOTTLE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,X,K;
	    cin>>N>>X>>K;
	    
	    int possible = K/X;
	    if (possible<=N){
	        cout<<possible<<endl;;
	    }
	    else{
	        cout<<N<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/CABS
#include <iostream>
using namespace std;

int main() {
    
    int T;
    cin>>T;
    
	while(T--){
	    
	    int X, Y;
	    cin>>X>>Y;
	    
	    if (X<Y){
	        cout<<"FIRST"<<endl;
	    }
	    else if (X>Y){
	        cout<<"SECOND"<<endl;
	    }
	    else{
	        cout<<"ANY"<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/INSTAGRAM
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    int X, Y;
	    cin>>X>>Y;
	    
	    if (X>10*Y){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}

// Q: https://www.codechef.com/problems/VOLCONTROL
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    if (X>Y){
	        cout<<(X-Y)<<endl;
	    }
	    else{
	        cout<<(Y-X)<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/MANIPULATE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    
	    if (X>=Y){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/COURSEREG
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,M,K;
	    cin>>N>>M>>K;
	    if ((M-K)>=N){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/INCRIQ
#include <iostream>
using namespace std;

int main() {
	int X;
	cin>>X;
	
	if ((X+7)>170){
	    cout<<"YES"<<endl;
	}
	else{
	    cout<<"NO"<<endl;
	}
	return 0;
}


// Q: 