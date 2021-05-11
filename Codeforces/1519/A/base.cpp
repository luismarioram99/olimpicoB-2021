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
  ll r, b, d;
  if (1){
  }

  cin >> r >> b >> d;

  ll max_b = max(r, b);
  ll min_b = min(r, b);

  ll div = (max_b / min_b);
  div += (max_b % min_b) ? 1 : 0;
  div -= 1;

  if (div > d)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
}

int main() {

  int t = 1;
  cin >> t;
  while (t--)
    solve();
}