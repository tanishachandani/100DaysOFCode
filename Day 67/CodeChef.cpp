// Q: https://www.codechef.com/problems/SOLBLTY
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X,A,B;
	    cin>>X>>A>>B;
	    
	    int inc_100ML = A+((100-X)*B);
	    
	    cout<<(inc_100ML)*10<<endl;
	}
	return 0;
}


// Q: https://www.codechef.com/problems/RATING
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int S;
	    cin>>S;
	    
	    int X = S+1;
	    int Y = -1;
	    
	    if (S==0){
	        cout<<"-1"<<endl;
	    }
	    else{
	        cout<<X*Y<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/MARARUN
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int D,d,A,B,C;
	    cin>>D>>d>>A>>B>>C;
	    
	    int chefs_dist = d*D;
	    
	    if (chefs_dist<10){
	        cout<<"0"<<endl;
	    }
	    else if ((chefs_dist>=10)&&(chefs_dist<21)){
	        cout<<A<<endl;
	    }
	    else if ((chefs_dist>=21)&&(chefs_dist<42)){
	        cout<<B<<endl;
	    }
	    else if (chefs_dist>=42){
	        cout<<C<<endl;
	    }
	}
	return 0;
}
