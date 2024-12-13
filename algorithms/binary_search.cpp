#include <bits/stdc++.h>

using namespace std;

int n, k, l, r, m;

bool f(int i) {
    return (i>=k);
}

void binary_search() {
    l=-1, r=n;
    while(r-l>1) {
        m=l+(r-l)/2;
        if(f(m)) {
            r=m;
        }
        else {
            l=m;
        }
    }
}

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0);
    cin>>n;
    srand(time(NULL));
    k=rand()%n;
    cout<<k<<'\n';
    binary_search();
    cout<<l<<' '<<r<<'\n';
	return 0;
}
