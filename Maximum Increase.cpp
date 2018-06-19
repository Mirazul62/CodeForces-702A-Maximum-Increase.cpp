#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[100000],i,count=1,max=1;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n-1; i++)
    {
        if(count>=max)
            max=count;
        if(a[i]<a[i+1])
        {
            count++;

        }
        else
            count=1;
              if(count>=max)
            max=count;

       /// cout<<count<<endl;
    }


    cout<<max;

}
