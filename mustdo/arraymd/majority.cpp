#include <iostream>
using namespace std;
int majority(int *a,int n)
{
    int res=0,count=1;
	    for(int i=1;i<n;i++)
	    {
	        if(a[res]==a[i])
	            count++;
	        else 
	            count--;
	        if(count==0)
	        {
	            res=i;
	            count=1;
	        }
	    }
	    count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==a[res])
	            count++;
	        
	    }
	    if(count>n/2)
	    return(a[res]);
	    else 
	    return(-1);
	}
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
	        cout<<majority(a,n)<<endl;
	    }
	return(0);
}
