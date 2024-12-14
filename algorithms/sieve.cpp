#include <bits/stdc++.h>

using namespace std;

int n;
vector<bool> is_prime;

void sieve() {
    for(int i=0; i<=n; i++) {
        is_prime[i]=true;
    }
    is_prime[0]=is_prime[1]=false;
    for(int i=2; (long long)i*i<=n; i++) {
        if(is_prime[i]) {
            for(int j=i*i; j<=n; j+=i) {
                is_prime[j]=false;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin>>n;
    is_prime.resize(n+1);
    sieve();
    for(int i=0; i<=n; i++) {
        if(is_prime[i]) {
            cout<<i<<' ';
        }
    }
    cout<<'\n';
    return 0;
}
