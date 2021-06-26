#include <iostream>
using namespace std;
#define lli long long int
int main(){
	#ifndef ONLINE_JUDGE 
	 freopen("input.txt", "r", stdin); 
	 freopen("output.txt", "w", stdout); 
	#endif
	 int t;
	 cin>>t;
	 while(t--)
	 {
	 	lli n,l,r;
	 	cin>>n>>l>>r;
	 	lli a[n+1];
	 	for(int i=1;i<=n;i++)
	 	{
	 		cin>>a[i];
	 	}
	 	lli cnt=0;
	 	if(n==1)
	 	{
	 		cout<<"0"<<endl;
	 	}
	 	for(int i=0;i<n-1;i++)
	 	{
	 		for(int j=i+1;j<n;j++)
	 		{
	 			if(a[i]+a[j]>=l && a[i]+a[j]<=r)
	 			{
	 				cnt++;
	 			}
	 		}
	 	}
	 	cout<<cnt<<endl;

	 }


}