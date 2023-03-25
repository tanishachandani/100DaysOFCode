// Q: https://www.codechef.com/problems/TWORANGES
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a,b,c,d;
    while(t--){
        cin>>a>>b>>c>>d;
        int count=0;
        int x=b-a+1;
        for(int i=c;i<=d;i++){
            if(i<a||i>b){
                count++;
            }
        }
        cout<<x+count<<endl;
    }
}

// Q: https://www.codechef.com/problems/MARBLES
#include <iostream>
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long int n, k;
	    cin>>n>>k;long int product=1;
	   
	   for(int i=1; i<k; i++)
	   {
	       product=product*(n-k+i)/i;
	   }
	    cout<<product<<endl;
	    
	}
	return 0;
}

// Q: https://www.codechef.com/problems/PAIREQ
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
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
		
		sort(a,a+n);
		int max=0;
		for(int i=0;i<n;i++)
		{
		    int count=0;
		    for(int j=0;j<n;j++)
		    {
		        if(a[i]==a[j])
		        {
		            count++;
		        }
		    }
		    if(count>max)
		    max=count;
		}
		cout<<n-max<<endl;
	}
}