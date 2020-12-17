#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN=1e4;
int n, a[mxN], b[mxN];

void solve() {
	cin >> n;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	for(int i=0; i<n; ++i)
		cin >> b[i];
	sort(a, a+n);
	sort(b, b+n);
	ll ans=0;
	for(int i=0; i<n; ++i)
		ans+=min(a[i], b[i]);
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
