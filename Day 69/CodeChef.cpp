// Q: https://www.codechef.com/problems/THREEQ
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A,B,count_saint=0,count_hero=0;
	    for (int i=0; i<3; i++){
	        cin>>A;
	        count_saint+=A;
	    }
	    for (int i=0; i<3; i++){
	        cin>>B;
	        count_hero+=B;
	    }
	    
	    if (count_saint==count_hero){
	        cout<<"Pass"<<endl;
	    }
	    else{
	        cout<<"Fail"<<endl;
	    }
	}
	return 0;
}