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

void solve()
{

  int n, m;
  cin >> n >> m;

  vector<vii> jornadas(m, vii(n));

  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j < m; j++)
    {

      cin >> jornadas[j][i].F;
      jornadas[j][i].S = i;
    }
  }

  for (auto &jornada : jornadas)
  {

    sort(jornada.begin(), jornada.end(), greater<ii>());
  }

  // for (int i = 0; i < n; i++)
  // {

  //   for (int j = 0; j < m; j++)
  //   {

  //     cout << jornadas[j][i].F << "," << jornadas[j][i].S << " ";
  //   }
  //   cout << endl;
  // }
  // cout << endl;

  set<int> players;

  int points = 0;

  for (int i = 0; i < 5; i++){
    players.insert(jornadas[0][i].S);
    points += jornadas[0][i].F;
  }

  bool change;
  int loss;

  for (int j = 1; j < m; j++){

    change = false;
    loss = 0;
    for (int i = 0; i < 5 + loss; i++){

      if(!players.count(jornadas[j][i].S)){
        
        if(!change){
          players.insert(jornadas[j][i].S);
          points += jornadas[j][i].F;
          change = true;
        }
        else
        {
          loss++;
        }
      }else{
        points += jornadas[j][i].F;
      }
    }

    for (int i = 5 + loss; i < n; i++){
      players.erase(jornadas[j][i].S);
    }

    //   cout << points << endl;
    // for (auto member : players)
    //   cout << member << " ";
    // cout << endl;

  }

  cout << points << endl;
}

int main()
{

  int t = 1;
  // cin >> t;
  while (t--)
    solve();
}