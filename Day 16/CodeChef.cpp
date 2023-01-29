// Q: https://www.codechef.com/problems/TRUESCORE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A,B,C,D;
	    cin>>A>>B;
	    cin>>C>>D;
	    if (A<=C && B<=D){
	        cout<<"POSSIBLE"<<endl;
	    }
	    else{
	        cout<<"IMPOSSIBLE"<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/DISCUS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A,B,C;
	    cin>>A>>B>>C;
	    
	    if (A>=B && A>=C){
	        cout<<A<<endl;
	    }
	    else if (B>=C){
	        cout<<B<<endl;
	    }
	    else{
	        cout<<C<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/FINDSHOES
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,M,shoes;
	    cin>>N>>M;
	    
	    if (N>=M){
	        shoes = N+N-M;
	        cout<<shoes<<endl;
	    }
	    else{
	        shoes = N+0;
	        cout<<shoes<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/LASTLEVELS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X,Y,Z,time;
	    cin>>X>>Y>>Z;
	    
	    if (X%3==0){
    	    time = (X*Y)+(((X/3)-1)*Z);
    	    cout<<time<<endl;   
	    }
        else{
            time = (X*Y)+((X/3)*Z);
            cout<<time<<endl;
        }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/MOVIE2X
#include <iostream>
using namespace std;

int main() {
	int X,Y;
	cin>>X>>Y;
	cout<<((Y/2)+(X-Y))<<endl;
	return 0;
}