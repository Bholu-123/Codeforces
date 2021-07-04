#include <bits/stdc++.h>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE 
     freopen("input.txt", "r", stdin); 
     freopen("output.txt", "w", stdout); 
    #endif
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL); 
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        int a[n+1];
        //map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            //mp[a[i]]=i;
        }
        //1st method
        // vector<pair<int,int>>v(n);
        // for(int i=1; i<=n; i++)
        // {
        //     v[i-1].first=a[i];
        //     v[i-1].second=i;
        // }
        // sort(v.begin(),v.end());
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(v[i].first*v[j].first >= 2*n) break;
        //         if(v[i].first * v[j].first == v[i].second+v[j].second)
        //         cnt++;
        //     }
        // }
        //2nd method
        // map<int,int>mp;
        // for(int i=1; i<=n; i++)
        // {
        //     mp[a[i]]=i;
        // }
        // for(auto i=mp.begin();i!=mp.end();i++)
        // {
        //     for(auto j=i;j!=mp.end();j++)
        //     {
        //         if(i==j)
        //         {
        //             continue;
        //         }
        //         if(i->first*j->first >= 2*n) break;
        //         if(i->first * j->first == i->second+j->second)
        //         {
        //             cnt++;
        //         }
        //     }
        // }
         //third method
         for(int i=1;i<=n;i++)
         {
           for(int j=a[i]-(i%a[i]);j<=n;j=j+a[i])
           {
              if(i>j&&a[i]*a[j]==i+j)
              {
                cnt++;
              }
           }
         }
        cout<<cnt<<endl;
    }
}
