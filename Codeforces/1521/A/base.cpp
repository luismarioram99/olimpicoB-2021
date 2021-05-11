#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef pair<ll, ll> pl;
typedef vector<pl> vll;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

#define F first
#define S second

void solve() {
  ll A, B;
  cin >> A >> B;

  if (B == 1) {
    cout << "NO" << endl;
    return;
  }
  cout << "YES" << endl;
  cout << (B - 1) * A << " " << (B + 1) * A << " " << 2 * A * B << endl;
}

int main() {

  int t = 1;
  cin >> t;
  while (t--)
    solve();
}