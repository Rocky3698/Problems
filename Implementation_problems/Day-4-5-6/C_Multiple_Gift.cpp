#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i,s,n)for(int i=s;i<n;i++)
typedef pair<int,int>pii;
const int INF=1e9+7;
const int N=1e5+5;
const int M=1e3+5;
int i,j;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n,m;
    cin>>n>>m;
    long long x=n;
    long long c=1;
    while(n*2<=m){
        n*=2;
        c++;
    }
    cout<<c<<endl;
    return 0;
}