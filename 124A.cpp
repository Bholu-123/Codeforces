//124A===>The number of positions
#include <iostream>
using namespace std;
int main() {
    int n,a,b;
    cin>>n>>a>>b;
    if(a+b==n)
    cout<<b;
    else if(n==1 || n==0)
    cout<<n;
    else
    {
         int i=a+1;
         int cnt=0;
         while(i<=n)
         {
             if(n-i<=b)
             {
                 cnt++;
                 i++;
             }
             else
             {
                 i++;
             }
         }
         cout<<cnt;
    }
}
