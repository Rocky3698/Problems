#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


// problem 1


    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin>>n;
        if((n&(n-1))==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}