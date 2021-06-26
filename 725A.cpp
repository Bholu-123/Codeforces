#include <iostream>
using namespace std;
int main(){
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
	 	for(int i=0;i<n;i++)
	 	{
	 		cin>>a[i];
	 	}
	 	//index of min element from left side
	 	int min_IndLs=0;
	 	int x=a[0];
	 	for(int i=1;i<n;i++)
	 	{
	 		if(a[i]<x)
	 		{
	 			min_IndLs=i;
	 			x=a[i];
	 		}
	 	}
	 	//index of maximum element from left side
	 	int max_IndLs=0;
	 	int y=a[0];
	 	for(int i=1;i<n;i++)
	 	{
	 		if(a[i]>y)
	 		{
	 			max_IndLs=i;
	 			y=a[i];
	 		}
	 	}

	 	//index of minimum element from right side
	 	int min_IndRs=n-min_IndLs-1;

	 	//index of maximum element from right side
	 	int max_IndRs=n-max_IndLs-1;
         
         //remove min from left and max from right
	 	int op1=min_IndLs+1+max_IndRs+1;//5

	 	//remove min from right and max from left
	 	int op2=min_IndRs+1+max_IndLs+1;//7

	 	//both from left
	 	int op3=max(min_IndLs,max_IndLs)+1;//2

	 	//both from right
	 	int op4=max(min_IndRs,max_IndRs)+1;//5

	    int ans=min(op1,min(op2,min(op3,op4)));
	    cout<<ans<<endl;
	 }
}