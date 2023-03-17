// Q: https://www.codechef.com/problems/CANDY123
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int Limak,Bob;
	    cin>>Limak>>Bob;
	    for(int i = 1; i < 1000; i++)
	    {
	        if(i%2 != 0)
	        {
	            Limak-=i;
	            if(Limak<0){
	                cout<<"Bob"<<endl;
	                break;
	            }
	        }
	        else
	        {
	            Bob-=i;
	            if(Bob<0){
	                cout<<"Limak"<<endl;
	                break;
	            }
	        }
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/REMOVECARDS
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
	    map<int,int>mp;
	    int n;
	    cin>>n;
	    for (int i=0;i<n;i++)
	    {   
	        int x;
	        cin>>x;
	        mp[x]++;
	        
	    }
	    int m=0;
	    for(auto &i:mp)
	    {
	        m=max(i.second,m);
	    }

	    cout<<n-m<<endl;
	    
    }
	return 0;
}


// Q: https://www.codechef.com/problems/AIRLINE
#include <iostream>
using namespace std;

int main() {
	
	int t;cin>>t;
	while(t--){
	    int a,b,c,d,e;cin>>a>>b>>c>>d>>e;
	    
	    if ((a+b <=d &&c<= e) ||( b+c <=d &&a<= e)  || (a+c <=d && b<=e ))
	    {
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}