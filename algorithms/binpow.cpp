#include <bits/stdc++.h>

using namespace std;

long long a, n, m;

long long binpow(long long a, long long n, long long m) {
    long long p;
    a%=m;
    p=1;
    while(n>0) {
        if(n&1) {
            p=(p*a)%m;
        }
        a=(a*a)%m;
        n>>=1;
    }
    return p;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin>>a>>n>>m;
    cout<<binpow(a,n,m)<<'\n';
    return 0;
}
