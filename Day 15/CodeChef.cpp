// Q: https://www.codechef.com/problems/BOBBANK
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int W,X,Y,Z;
	    cin>>W>>X>>Y>>Z;
	    cout<<(W+((X-Y)*Z))<<endl;
	}
	return 0;
}


//Q: https://www.codechef.com/problems/DOMINANT
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A,B,C;
	    cin>>A>>B>>C;
	    
	    if (A>B+C || B>C+A || C>A+B){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/SONGS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,X;
	    cin>>N>>X;
	    cout<<(N/(3*X))<<endl;
	}
	return 0;
}


// Q: https://www.codechef.com/problems/ODDSUMPAIR
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A,B,C;
	    cin>>A>>B>>C;
	    
	    if ( ((A+B)%2 != 0) || ((A+C)%2 != 0) || ((B+C)%2 != 0) ){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/SUBSCRIBE_
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,X,total_cost;
	    cin>>N>>X;
	    
	    if (N%6==0){
	        total_cost = (N/6)*X;
	        cout<<total_cost<<endl;
	    }
	    else{
	        total_cost = ((N/6)+1)*X;
	        cout<<total_cost<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/AVGPROBLEM
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A,B,C;
	    cin>>A>>B>>C;
	    float avg = (float(A)+float(B))/2;
	    if ( avg > C) {
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/CHEFCHOCO
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int C,X,Y;
	    cin>>C>>X>>Y;
	    
	    if (C>=X){
	        cout<<(C-X)*Y<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/OFFICE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    cout<<((X*4)+Y)<<endl;
	}
	return 0;
}


// Q: https://www.codechef.com/problems/BIRDFARM
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X,Y,Z;
	    cin>>X>>Y>>Z;
	    
	    if ((Z%X==0) && (Z%Y==0)){
	        cout<<"ANY"<<endl;
	    }
	    else if (Z%Y==0){
	        cout<<"DUCK"<<endl;
	    }
	    else if (Z%X==0){
	        cout<<"CHICKEN"<<endl;
	    }
	    else{
	        cout<<"NONE"<<endl;
	    }
	}
	return 0;
}