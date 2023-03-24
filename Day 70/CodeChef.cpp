// Q: https://www.codechef.com/problems/VDATES
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   int D,L,R;
	   cin>>D>>L>>R;
	   if(L <= D && D <= R)
	   cout<<"Take second dose now"<<endl;
	   else if(D>R)
	   cout<<"Too Late"<<endl;
	   else if(L>D)
	   cout<<"Too Early"<<endl;
	}
	return 0;
}

// Q: https://www.codechef.com/problems/FIRSTANDLAST
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
        
        int sum=a[0]+a[n-1];
        
	     for(int i=0;i<n-1;i++)
	    {
	        int temp=a[i]+a[i+1];
	        
	        sum=max(sum,temp);
	    }
	    
	    std::cout << sum << std::endl;
	}
	return 0;
}

// Q: https://www.codechef.com/problems/NOTIME
#include <iostream>
using namespace std;

int main() {
	int n,h,x;
	cin>>n>>h>>x;
	int time[n],i;
	for(i=0;i<n;i++){
	    cin>>time[i];
	}
	for(i=0;i<n;i++){
	    if(h==time[i]+x){
	        cout<<"YES"<<endl;
	        break;
	    }
	}
	if(i==n){
	    cout<<"NO"<<endl;
	}
	return 0;
}

// Q: https://www.codechef.com/problems/SHOEFIT
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a!=b || a!=c || b!=c){
	        cout<<1<<endl;
	    }
	    else{cout<<0<<endl;}
	}
	return 0;
}