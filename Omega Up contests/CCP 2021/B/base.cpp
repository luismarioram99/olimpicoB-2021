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

char hash_string(string k){

  char x = (char)0;

  for (auto c: k){

    x = x ^ c;

  }

  return x;
}

    
void solve(int n){
  vector<string> data(n);

  for(auto &x: data){
   getline(cin, x);
  }

  vector<pair<char, string> > hashs(n);

  for (int i = 0; i < n; i++){

    hashs[i].F = hash_string(data[i]);
    hashs[i].S = data[i];

  }


  sort(hashs.begin(), hashs.end());
  // for(auto x: hashs){
  //   cout << (int) x.F << " " << x.S << endl;
  // }

  int count = 1;
  int current_hash = 1;
  ll colitions = 0;
  int toad = 0;

  pair<char, string> current = hashs[0];

  for (int i = 1; i < n; i++){
    // cout << colitions << " " << toad << " " << current_hash << endl;
    
    if (current.F != hashs[i].F)
    {
      count++;
      toad = 0;
      current_hash = 1;
      current = hashs[i];
    }
    else
    {
      if (current.S != hashs[i].S){
        count++;
        toad = current_hash;
        current = hashs[i];
      }
      colitions += toad;
      current_hash++;
    }
  }
  cout << count << " " << colitions << endl;
  
}

int main(){

  int n;
  cin >> n;
  cin >> ws;
  while (n){

    solve(n);
    
    cin >> n;
    cin >> ws;
  }
}

