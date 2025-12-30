// BOJ 7576
#include <queue>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;
typedef pair<pp, int> ppi;

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int n, m, toripe = 0, riped = 0, lastday = -1;
  cin >> m >> n;
  vector<vector<int>> tomato(n, vector<int>(m));
  queue<ppi> q;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
    {
      cin >> tomato[i][j];
      if (tomato[i][j] == 1)
        q.push({{i, j}, 0});
      else if (tomato[i][j] == 0)
        toripe++;
    }

  while (!q.empty())
  {
    pp nowp = q.front().fi;
    int nowt = q.front().se;
    q.pop();
    const int dx[4] = {1, -1, 0, 0};
    const int dy[4] = {0, 0, -1, 1};
    for (int i = 0; i < 4; i++)
    {
      pp next = {nowp.fi + dx[i], nowp.se + dy[i]};
      if (next.fi >= 0 && next.se >= 0 && next.fi < n && next.se < m)
      {
        if (tomato[next.fi][next.se] == 0)
          riped++, lastday = max(lastday, nowt + 1), tomato[next.fi][next.se] = 1, q.push({next, nowt + 1});
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
