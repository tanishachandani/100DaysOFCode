// Q: https://www.codechef.com/problems/PPSUM
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int D,N;
	    cin>>D>>N;
	    
	    int final = 0, temp = 0;
	    
	    for (int i=0; i<D; i++){
	        for (int j=1; j<=N; j++){
	            temp += j;
	        }
	        N = temp;
	        temp = 0;
	    }
	    
	    cout<<N<<endl;
	}
	return 0;
}