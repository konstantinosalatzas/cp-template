#include <bits/stdc++.h>

using namespace std;

int a, b;

int gcd(int a, int b) {
    if(b==0) {
        return a;
    }
    else {
        return gcd(b,a%b);
    }
}

int lcm(int a, int b) {
    return (a/gcd(a,b))*b;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin>>a>>b;
    cout<<gcd(a,b)<<'\n';
    cout<<lcm(a,b)<<'\n';
    return 0;
}
