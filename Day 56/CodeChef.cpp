// Q: https://www.codechef.com/problems/URCALC
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double A,B;
	cin>>A;
	cin>>B;
	
	char C;
	cin>>C;
	
	if (C=='+'){
	    cout<<fixed<<setprecision(7)<<(A+B)<<endl;
	}
	else if (C=='-'){
	    cout<<fixed<<setprecision(7)<<(A-B)<<endl;
	}
	else if (C=='/'){
	    cout<<fixed<<setprecision(7)<<(A/B)<<endl;
	}
	else if (C=='*'){
	    cout<<fixed<<setprecision(7)<<(A*B)<<endl;
	}
	return 0;
}


// Q: https://www.codechef.com/problems/ELECTIONS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A,B,C;
	    cin>>A>>B>>C;
	    
	    if (A>50){
	        cout<<"A"<<endl;
	    }
	    else if (B>50){
	        cout<<"B"<<endl;
	    }
	    else if (C>50){
	        cout<<"C"<<endl;
	    }
	    else{
	        cout<<"NOTA"<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/MUFFINS3
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    
	    if (N%2==0){
	        cout<<((N/2)+1)<<endl;
	    }
	    else{
	        cout<<((N+1)/2)<<endl;
	    }
	}
	return 0;
}