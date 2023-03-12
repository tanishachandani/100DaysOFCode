// Q: https://www.codechef.com/problems/EVENTUAL
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(s[i]==s[j])
	            {
	                count++;
	            }
	           
	        }
	        if(count%2!=0)
	        {
	            cout<<"NO"<<endl;
	            break;
	        }
	    }
	    if(count%2==0) cout<<"YES"<<endl;
	   
	}
	return 0;
}