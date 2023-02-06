// Q: https://www.codechef.com/problems/DIGARR
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int D;
	    cin>>D;
        string N;
        cin>>N;
        
        int count=0;
        
        for (int i=0; i<D; i++){
            if ((N[i]=='0') || (N[i]=='5')){
                count++;
                break;
            }
            else{
                continue;
            }
        }
        
        if (count==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/CHFINTRO
#include <iostream>
using namespace std;

int main() {
	int N,r;
	cin>>N>>r;
	while(N--){
	    int R;
	    cin>>R;
	    
	    if (R>=r){
	        cout<<"Good boi"<<endl;
	    }
	    else{
	        cout<<"Bad boi"<<endl;
	    }
	}
	return 0;
}


// Q: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/submissions/892816389/
class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        while(num!=0){
            if (num%2==0){
                num/=2;
            }
            else{
                num-=1;
            }
            count++;
        }
        return count;
    }
};