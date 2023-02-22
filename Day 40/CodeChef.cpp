// Q: https://www.codechef.com/problems/CHN09
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    string s;
	    cin>>s;
	    
    	int a = 0;
	    int b = 0;
	    int n = s.length();
	    
	    for (int i=0; i<n; i++){
	        
	        if (s[i] == 'a'){
	            a++;
	        }
	        else {
	            b++;
	        }
	    }
	    
	    cout<<min(a,b)<<endl;
	}
	return 0;
}


// Q: https://www.codechef.com/problems/UWCOI21A
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while (T--){
	    int N;
	    cin>>N;
	    cout<<"1"<<" "<<N<<endl;
	}
	return 0;
}