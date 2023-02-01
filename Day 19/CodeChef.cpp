// Q: https://www.codechef.com/problems/MYSERVE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int P,Q;
	    cin>>P>>Q;
	    int score = P+Q;
	    
	    if (score==0){
	        cout<<"Alice"<<endl;
	    }
	    else{
	        if ((score/2)%2 == 0){
	            cout<<"Alice"<<endl;
	        }
	        else{
	            cout<<"Bob"<<endl;
	        }
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/WINNERR
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int PA,PB,QA,QB,penaltyP,penaltyQ;
	    cin>>PA>>PB>>QA>>QB;
	    
	    if (PA>=PB){
	        penaltyP = PA;
	    }
	    else{
	        penaltyP = PB;
	    }
	    if (QA>=QB){
	        penaltyQ = QA;
	    }
	    else{
	        penaltyQ = QB;
	    }
	    
	    if (penaltyP == penaltyQ){
	        cout<<"TIE"<<endl;
	    }
	    else if (penaltyP>penaltyQ){
	         cout<<"Q"<<endl;
	    }
	    else{
	        cout<<"P"<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/MAXTASTE
#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int ing1,ing2;
        
        if (a>=b){
            ing1 = a;
        }
        else{
            ing1 = b;
        }
        if (c>=d){
            ing2 = c;
        }
        else{
            ing2 = d;
        }
        cout<<(ing1 + ing2)<<endl;
    }
	return 0;
}


// Q: https://www.codechef.com/problems/PRIMEDICE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A,B,sum;
	    cin>>A>>B;
	    sum = A+B;
	    int count=0;
	    
	    for (int i=2; i<sum; i++){
	        if (sum%i == 0){
	            count++;
                break;
	        }
	    }
	    if (count == 0){
	        cout<<"Alice"<<endl;
	    }
	    else{
	        cout<<"Bob"<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/C_RATING
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X,Y,diff;
	    cin>>X>>Y;
	    diff = Y-X;
	    
	    if (diff==0){
	        cout<<"0"<<endl;
	    }
	    else if (diff<=8){
	        cout<<"1"<<endl;
	    }
	    else{
	        if (diff%8==0){
	            cout<<(diff/8)<<endl;
	        }
	        else{
	            cout<<((diff/8)+1)<<endl;
	        }
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/DNASTRAND
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    char C;
	    cin>>N;
	    string S = "";
	    for (int i=0; i<N; i++){
	        cin>>C;
	        S+=C;
	    }
	    for (int j=0; j<N; j++){
	        if (S[j] == 'A'){
	            S[j] = 'T';
	        }
	        else if (S[j] == 'T'){
	            S[j] = 'A';
	        }
	        else if (S[j] == 'C'){
	            S[j] = 'G';
	        }
	        else if (S[j] == 'G'){
	            S[j] = 'C';
	        }
	    }
	    cout<<S<<endl;
	}
	return 0;
}


// Q: https://www.codechef.com/problems/CANDYDIST
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,M;
	    cin>>N>>M;
	    
	    if ((N%M==0) && ((N/M)%2==0)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}