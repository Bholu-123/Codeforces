//260-A===Adding Digits
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli a,b,n;
    cin>>a>>b>>n;
    lli x;
    int flag=0;
     for(lli j=0;j<10;j++)
     {
       x=(a*10+j);
       if(x%b==0)
       {
         a=x;
         flag=1;
         cout<<x;
         break;
       }
     }
     if(flag==1)
     {
        for(int i=2;i<=n;i++)
         cout<<0;
     }
    if(flag==0)
    {
        cout<<"-1";
    }
}
