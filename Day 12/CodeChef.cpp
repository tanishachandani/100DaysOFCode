// Q: https://www.codechef.com/problems/SNDMAX
#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin>>N;
	while(N--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int arr[3] = {a,b,c};
	    
	    sort(arr,arr+3);
	    cout<<arr[1]<<endl;
	}
	return 0;
}


// Q: https://www.codechef.com/problems/INVESTMENT
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    if (X>=2*Y){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/SLEEP
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X;
	    cin>>X;
	    if (X<7){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}


//Q: https://www.codechef.com/problems/MANAPTS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    cout<<Y/X<<endl;
	}
	return 0;
}


//Q: https://www.codechef.com/problems/MAXDIFFMIN
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int A,B,C;
	    cin>>A>>B>>C;
	    cout<<C-A<<endl;
	}
	return 0;
}


// Q: https://www.codechef.com/problems/FINE
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X;
	    cin>>X;
	    if (X<=70){
	        cout<<"0"<<endl;
	    }
	    else if (X<=100){
	        cout<<"500"<<endl;
	    }
	    else{
	        cout<<"2000"<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/WATERCONS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X;
	    cin>>X;
	    
	    if (X>=2000){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/TAXES
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X;
	    cin>>X;
	    if(X>100){
	        cout<<X-10<<endl;
	    }
	    else{
	        cout<<X<<endl;
	    }
	}
	return 0;
} 


// Q: https://www.codechef.com/problems/REACHTARGET
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    cout<<(X-Y)<<endl;
	}
	return 0;
}


// Q: https://www.codechef.com/problems/JASSIGNMENTS
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X;
	    cin>>X;
	    if (X<=(10-(1*3))){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}