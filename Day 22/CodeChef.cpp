// Q: https://www.codechef.com/problems/UTKPLC
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    char first,second,third,x,y;
	    cin>>first>>second>>third;
	    cin>>x>>y;
	    
	    char priority[3]={first,second,third};
	    
	    for (int i=0;i<3;i++){
	        if (priority[i] == x){
	            cout<<x<<endl;
	            break;
	        }
	        else if (priority[i] == y){
	            cout<<y<<endl;
	            break;
	        }
	        else{
	            continue;
	        }
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/CHEFRUN
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    float X1,X2,X3,V1,V2;
	    cin>>X1>>X2>>X3>>V1>>V2;
	    
    	    float timeC = ((X3-X1)/V1);
	        float timeK = ((X2-X3)/V2);
	        
            if (timeC<timeK){
                cout<<"Chef"<<endl;
            }
            else if (timeC>timeK){
                cout<<"Kefa"<<endl;
            }
            else if (timeK==timeC){
                cout<<"Draw"<<endl;
            }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/FACEDIR
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X;
	    cin>>X;
	    if (X==1){
	        cout<<"East"<<endl;
	    }
	    else if (X==2){
	        cout<<"South"<<endl;
	    }
	    else if (X==3){
	        cout<<"West"<<endl;
	    }
	    else{
	        if (X%4==0){
	            cout<<"North"<<endl;
	        }
	        else if (X%4==1){
	            cout<<"East"<<endl;
	        }
	        else if (X%4==2){
	            cout<<"South"<<endl;
	        }
	        else{
	            cout<<"West"<<endl;
	        }
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/HOWMANY
#include <iostream>
#include <string>
using namespace std;

int main() {
	int N,len;
	cin>>N;
	len = 0;
	
	while(N>0){
	    N/=10;
	    len++;
	}
	
	if (len==1){
	    cout<<"1"<<endl;
	}
	else if (len==2){
	    cout<<"2"<<endl;
	}
	else if (len==3){
	    cout<<"3"<<endl;
	}
	else{
	    cout<<"More than 3 digits"<<endl;
	}
	return 0;
}


// Q: https://www.codechef.com/problems/AVOIDCONTACT
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    
	    if (X==Y){
	        cout<<(Y*2)-1<<endl;
	    }
	    else{
	        cout<<((Y*2)+(X-Y))<<endl;
	    }
	}
	return 0;
}
