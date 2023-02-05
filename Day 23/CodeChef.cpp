// Q: https://www.codechef.com/problems/PENALTY
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A1,A2,A3,A4,A5,A6,A7,A8,A9,A10;
	    cin>>A1>>A2>>A3>>A4>>A5>>A6>>A7>>A8>>A9>>A10;
	    int A[11] = {0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10};
	    
	    int countT1 = 0;
	    int countT2 = 0;
	    
	    for (int i=1; i<=10; i++){
	        if (i%2!=0){
    	        if (A[i]==1){
	            countT1++;
	            }
	        }
	        else{
	            if (A[i]==1){
	                countT2++;
	            }
	        }
	    }
	    if (countT1==countT2){
	        cout<<"0"<<endl;
	    }
	    else if (countT1>countT2){
	        cout<<"1"<<endl;
	    }
	    else{
	        cout<<"2"<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/CHFCLASS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int leaves=0;
	    if (N<7 && N>5){
	        leaves++;
	    }
	    else{
	        if (N%7==0){
	            leaves = N/7;
	        }
	        else if (N%7==6){
	            leaves = (N/7)+1;
	        }
	        else{
	            leaves = N/7;
	        }
	    }
	    cout<<leaves<<endl;
	}
	return 0;
}


// Q: https://www.codechef.com/problems/MINDAYSRET
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,K;
	    cin>>N>>K;
	    int days=0;
	    if (N<=K){
	        days = 1;
	    }
	    else{
	        if(N%K==0){
	            days = N/K;
	        }
	        else{
	            days = (N/K) + 1;
	        }
	    }
	    cout<<days<<endl;
	}
	return 0;
}


// Q: https://www.codechef.com/problems/JMARKET
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X,A,B,C;
	    cin>>X>>A>>B>>C;
	    int cost=0;
	    int arr[3]={A,B,C};
	    
	    for (int i=0; i<3; i++){
	        for (int j=i+1; j<3; j++){
	            if (arr[i]<=arr[j]){
	                continue;
	            }
	            else {
	                int temp = arr[j];
	                arr[j] = arr[i];
	                arr[i] = temp;
	            }
	        }
	    } 
	    cost = ((X-1)*arr[0]) + arr[1];
	    cout<<cost<<endl;
	}
	return 0;
}


// Q: https://www.codechef.com/problems/NONNEGPROD
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int arr[N]={};
	    for (int j=0; j<N; j++){
	        int num;
	        cin>>num;
	        arr[j]=num;
	    }
	    
	    int count_neg = 0;
	    int count_zeros = 0;
	    
	    for (int i=0; i<N; i++){
	        if (arr[i]<0){
	            count_neg++;
	        }
	        else if (arr[i]==0){
	            count_zeros++;
	        }
	    }
	    if (count_zeros>0){
	        cout<<"0"<<endl;
	    }
	    else if (count_neg%2==0){
	        cout<<"0"<<endl;
	    }
	    else {
	        cout<<"1"<<endl;
	    }
	}
	return 0;
}