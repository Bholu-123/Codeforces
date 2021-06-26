#include <bits/stdc++.h>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE 
     freopen("input.txt", "r", stdin); 
     freopen("output.txt", "w", stdout); 
    #endif
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++)
        {
            a[i]=i;
        }
        if(n%2==0)
        {
           for(int i=1;i<=n-1;i=i+2)
           {
             swap(a[i],a[i+1]);
           } 
        }
        else
        {
            for(int i=1;i<=n-2;i=i+2)
            {
             swap(a[i],a[i+1]);
            }
            swap(a[n],a[n-1]);
        }
        for(int i=1;i<=n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
