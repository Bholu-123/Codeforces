#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        unordered_map<float,float>umap;
        umap[a[1]]=1;
        int cnt=0;
        for(int i=2;i<=n;i++)
        {
          for(int j=i+1;j<=i+i-1;j++)
          {
             float x=float(j)/float(a[i]);
             if(umap.find(x)!=umap.end())
             {
                 cnt++;
             }
          }
          umap[a[i]]=i;
        }
        cout<<cnt<<endl;
    }
}
