// BOJ 7569
#include <queue>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <tuple>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef tuple<int, int, int> pp;
typedef pair<pp, int> ppi;

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int n, m, h, toripe = 0, riped = 0, lastday = -1;
  cin >> m >> n >> h;
  vector<vector<vector<int>>> tomato(n, vector<vector<int>>(m, vector<int>(h)));
  queue<ppi> q;
  for (int k = 0; k < h; k++)
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
      {
        cin >> tomato[i][j][k];
        if (tomato[i][j][k] == 1)
          q.push({{i, j, k}, 0});
        else if (tomato[i][j][k] == 0)
          toripe++;
      }

  while (!q.empty())
  {
    pp nowp = q.front().fi;
    int nowt = q.front().se;
    q.pop();
    const int dx[6] = {1, -1, 0, 0, 0, 0};
    const int dy[6] = {0, 0, 1, -1, 0, 0};
    const int dz[6] = {0, 0, 0, 0, 1, -1};
    for (int i = 0; i < 6; i++)
    {
      pp next = {get<0>(nowp) + dx[i], get<1>(nowp) + dy[i], get<2>(nowp) + dz[i]};
      if (get<0>(next) >= 0 && get<1>(next) >= 0 && get<2>(next) >= 0 && get<0>(next) < n && get<1>(next) < m && get<2>(next) < h)
      {
        if (tomato[get<0>(next)][get<1>(next)][get<2>(next)] == 0)
          riped++, lastday = max(lastday, nowt + 1), tomato[get<0>(next)][get<1>(next)][get<2>(next)] = 1, q.push({next, nowt + 1});
      }
    }
  }
  if (toripe == 0)
    cout << 0;
  else if (toripe != riped)
    cout << -1;
  else
    cout << lastday;

  return 0;
}