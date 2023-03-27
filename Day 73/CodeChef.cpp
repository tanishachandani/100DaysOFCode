// Q: https://www.codechef.com/problems/HAPPYSTR
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        int ct = 0;
        for (int i = 0; i < s.size(); ++i)
        {

            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                ct++;
                if (ct == 3)
                {
                    cout << "Happy" << endl;
                    break;
                }
            }
            else
            {
                ct = 0;
            }
        }
        if (ct ==0)
        {
            cout << "Sad" << endl;
        }
    }
    return 0;
}


// Q: https://www.codechef.com/problems/REMISS
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    int a,b;cin>>a>>b;
	    if(a==b){
	        cout<<a<<" "<<b<<endl;
	    }
	    else{
	    int m=max(a,b);
	    int n=a+b;
	    cout<<m<<" "<<n<<endl;
	    }
	}
	return 0;
}


// Q: https://www.codechef.com/problems/PRICECON
#include <iostream>
using namespace std;

int main() {
	
	int t,i;
	cin>>t;
	while(t--){
	    int n,k,sum=0;
	    cin>>n>>k;
	    int price[n];
	    for(i=0;i<n;i++){
	        cin>>price[i];
	    }
	  
	    for(i=0;i<n;i++){
	        if(price[i]>k){
	            sum+=price[i]-k;
	        }
	    }
	    
	    cout << sum <<endl;
	    
	    
	}
	return 0;
}