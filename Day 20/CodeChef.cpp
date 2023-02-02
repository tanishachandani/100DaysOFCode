// Q: https://www.codechef.com/LP1TO201/problems/SMOL
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,K,smol_N;
	    cin>>N>>K;
	    
	    if (N<K){
	        cout<<N<<endl;
	    }
	    else if (N==K){
	        cout<<"0"<<endl;
	    }
	    else{
	        if (K!=0){
    	        smol_N = N-K;
	            for (int i=1; i<(N/K); i++){
	                smol_N = smol_N - K;
	            }
	            cout<<smol_N<<endl;
	        }
	        else{
	            cout<<N<<endl;
	        }
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/LP1TO201/problems/CHFSPL
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A,B,C;
	    int max, max2;
	    cin>>A>>B>>C;
        
        if (A>=B && A>=C){
            max = A;
            if (B>=C){
                max2 = B;
            }
            else{
                max2 = C;
            }
        }
        else {
            if (B>=C) {
                max = B;
                if (C>=A){
                    max2 = C;
                }
                else{
                    max2 = A;
                }
            }
            else{
                max = C;
                if (B>=A){
                    max2 = B;
                }
                else{
                    max2 = A;
                }
            }
        }
        
	    cout<<max+max2<<endl;
	}
	return 0;
}


// Q: https://www.codechef.com/LP1TO201/problems/VDATES
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int D,L,R;
	    cin>>D>>L>>R;
	    if (D>=L && D<=R){
	        cout<<"Take second dose now"<<endl;
	    }
	    else{
    	    if (D<L){
	            cout<<"Too Early"<<endl;
	        }
	        else if (D>R){
	            cout<<"Too Late"<<endl;
	        }
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/LP1TO201/problems/CHFRICH
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A,B,X;
	    cin>>A>>B>>X;
	    cout<<((B-A)/X)<<endl;
	}
	return 0;
}