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
	 	lli n;
	 	cin>>n;
	 	lli a[n+1];
	 	for(int i=1;i<=n;i++)
	 	{
	 		cin>>a[i];
	 	}
	 	 lli sum=0;
	 	for(int i=1;i<=n;i++)
	 	{
	 		sum=sum+a[i];
	 	}
	 	if(sum%n!=0)
	 		cout<<"-1"<<endl;
	 	if(n==1)
	 		cout<<"0"<<endl;
	 	lli x=sum/n;
	 	lli cnt=0;
	 	for(int i=1;i<=n;i++)
	 	{
	 		if(a[i]>x)
	 		{
	 			cnt++;
	 		}
	 	}
	 	cout<<cnt<<endl;
	 }
}
