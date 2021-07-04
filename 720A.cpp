#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main() {
    #ifndef ONLINE_JUDGE 
     freopen("input.txt", "r", stdin); 
     freopen("output.txt", "w", stdout); 
    #endif
    lli t;
    cin>>t;
    while(t--)
    {
      lli a,b;
      cin>>a>>b;
      if(b==1)
      {
        cout<<"NO"<<endl;
        continue;
      }
      cout<<"YES"<<endl;
      lli x=a;
      lli y=a*b;
      lli z=x+y;
      cout<<x<<" "<<y<<" "<<z<<endl;
    }
    return 0;
}