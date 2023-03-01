// Q: https://www.codechef.com/problems/EZSPEAK
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N, count=0, temp=0; cin>>N;
	    
	    for (int i=0; i<N; i++){
	        char s; cin>>s;
	        if ((s=='a')||(s=='e')||(s=='i')||(s=='o')||(s=='u')){
	            count = 0;
	        }
	        else{
	            count++;
	            if (count>=4){
	                temp++;
	            }
	        }
	    }
	    
	    if (temp!=0){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/ZCOSCH
#include <iostream>
using namespace std;

int main() {
	int R;
	cin>>R;
	
	if (R<=50){
	    cout<<"100"<<endl;
	}
	else if (R>50 && R<=100){
	    cout<<"50"<<endl;
	}
	else{
	    cout<<"0"<<endl;
	}
	return 0;
}


// Q: https://www.codechef.com/problems/PROGLANG
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A,B,A1,B1,A2,B2;
	    cin>>A>>B>>A1>>B1>>A2>>B2;
	    
	    if (((A==A1) || (A==B1)) && ((B==A1) || (B==B1))){
	        cout<<"1"<<endl;
	    }
	    else if (((A==A2) || (A==B2)) && ((B==A2) || (B==B2))){
	        cout<<"2"<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/MISSP
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,temp,count=0;
	    cin>>N;
	    int dolls[N]={};
	    
	    for (int i=0; i<N; i++){
	        int type;
	        cin>>type;
	        dolls[i]=type;
	    }
	    
	    for (int i=0; i<N; i++){
	        for (int j=0; j<N; j++){
	            if (dolls[i]==dolls[j]){
	                count++;
	                continue;
	            }
	            else{
	                continue;
	            }
	        }
    	    if (count%2!=0){
	            temp = dolls[i];
	            cout<<temp<<endl;
	            break;
	        }
	    }
	}
	return 0;
}