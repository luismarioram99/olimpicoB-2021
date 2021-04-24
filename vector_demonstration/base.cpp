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


int main(){

  int count  = 10000000;

  vi data;
  data.reserve(count);
  for (int i = 0; i < count; i++){
    data.push_back(rand());
  }

  return 0;

}