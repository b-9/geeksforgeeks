#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int ts=0,mp;
	    for(int i=0;i<n-1;i++)
	    {
	        cin>>mp;
	        ts+=mp;
	    }
	    cout<<((n+1)*(n))/2-ts<<endl;
	}
	return 0;
}
