#include <bits/stdc++.h>
using namespace std;

//Check my mid is possible answer or not
//mid is possible ansr when s1+s2=n i,e total number of gift set is eql to mid
bool isMidPossibleAnsr(int x,int y,int a,int b,int n)
{
    int low=0;
    int high=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int s1=mid;
        int s2=mid-n;
        int t1=a*s1+b*s2; //no of red 
        int t2=b*s1+a*s2; //no of blue
        if(t1<=x && t2<=y)
        {
            return true;
        }
        //if t1>x the we have two cases either a>b or b>a becoz s1 and s2 are fix
        else if(t1>x)
        {
          //if a>b we need to decrease the range of s1
          if(a>b)
          {
            high=mid-1;
          }
          else if(b>a)
          {
            low=mid+1;
          }    
        }
        else if(t2>y)
        {
           if(a<b)
           {
             high=mid-1;
           }
           else if(b<a)
           {
             low=mid+1;
           }   
        }
    }
    return false;
    
}
int main() {
    #ifndef ONLINE_JUDGE 
     freopen("input.txt", "r", stdin); 
     freopen("output.txt", "w", stdout); 
    #endif
    int t;
    cin>>t;
    while(t--)
    {
      int x,y,a,b;
      cin>>x>>y>>a>>b;

      //minimum and maximum no of git set possible
      int low=0;
      int high=1000000000;
      int ans=0;
      while(low<=high)
      {
        int mid=(low+high)/2;
        if(isMidPossibleAnsr(x,y,a,b,mid))
        {
            ans=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
      }
      cout<<ans<<endl;
    }
    return 0;
}
