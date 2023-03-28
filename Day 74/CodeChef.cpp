// Q: https://www.codechef.com/problems/COINS
#include <iostream>
using namespace std;

long solve(long n)
 {
    if(n>=12)
    return solve(n/2) + solve(n/3)+ solve( n/4);
    else
    return n;
    
}
int main() {
     long n; 
     while(cin>>n)
     cout<<solve(n)<<endl;
	
	return 0;
}

// Q: https://www.codechef.com/problems/AVDSQUARPLZ
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	while(n>0){
	    cout<<n<<" ";
	    n=n-1;
	}
	cout<<endl;
	}
	return 0;
}

// Q: https://www.codechef.com/problems/CCOOK
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int a[5];
	    int count=0;
	    for(int i=0;i<5;i++)
	    cin >> a[i];
	    for(int i=0 ;i<5;i++)
	    {
	        if(a[i]==1)
	        count++;
	    }
	    if(count == 0)
	    cout << "Beginner" << endl;
	    else if(count ==1)
	    cout <<"Junior Developer" << endl;
	    else if(count == 2)
	    cout << "Middle Developer" << endl;
	    else if(count == 3)
	    cout <<"Senior Developer" << endl;
	    else if(count ==4)
	    cout<<"Hacker"<<endl;
	    else
	    cout<<"Jeff Dean"<<endl;
	}
	return 0;
}

// Q: https://www.codechef.com/problems/JDELAY
#include <iostream>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
       int n,c=0; cin >> n;
       for(int i=0; i<n; i++)
       {
       int s,j;
       cin>>s>>j;
       if(j-s>5) c++;
       }
       cout << c << endl;
       
   }
	return 0;
}