#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main() {
    #ifndef ONLINE_JUDGE 
     freopen("input.txt", "r", stdin); 
     freopen("output.txt", "w", stdout); 
    #endif
    int t;
    cin >> t;
    while (t--) 
    {
      int n; 
      cin >> n;
      int x = 1e9 + 7, pos = -1;
      for (int i = 0; i < n; ++i) 
      {
        int a; 
        cin >> a;
        if (a < x) 
        {
          x = a;
          pos = i;
        } 
      }
      cout << n - 1 << endl;
      for (int i = 0; i < n; ++i) 
      {
        if (i == pos) continue;
        cout << pos + 1 <<" "<< i + 1 <<" "<< x <<" "<< x + abs(i - pos) <<endl;
      }
    }
}