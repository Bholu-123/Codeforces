#include <iostream>
using namespace std;
#define lli long long int
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        lli l,r;
        cin>>l>>r;
        int fd=1;
        int ans=0;
        while(fd<=r)
        {
            int cnt1=r/fd;
            int cnt2=l/fd;
            ans=ans+(cnt1-cnt2);
            fd=fd*10;
        }
        cout<<ans<<endl;
    }
}
