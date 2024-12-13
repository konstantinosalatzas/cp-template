#include <bits/stdc++.h>

using namespace std;

bool f(int i) {
    return true;
}

void binary_search(int n) {
    int l, r;
    l=-1, r=n;
    while (r-l>1) {
        int m;
        m=l+(r-l)/2;
        if (f(m)) {
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
	return 0;
}
