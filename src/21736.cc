// BOJ 21736
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <queue>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  vector<string> campus(n);
  queue<pp> q;
  vector<vector<bool>> vis(n, vector<bool>(m));
  for (int i = 0; i < n; i++)
  {
    cin >> campus[i];
    for (int j = 0; j < m; j++)
      if (campus[i][j] == 'I')
        q.push({i, j}), vis[i][j] = true;
  }
  int people = 0;
  while (!q.empty())
  {
    pp now = q.front();
    q.pop();
    if (campus[now.fi][now.se] == 'P')
      people++;

    for (int i = 0; i < 4; i++)
    {
      const int dx[] = {1, -1, 0, 0};
      const int dy[] = {0, 0, 1, -1};
      pp next = {now.fi + dx[i], now.se + dy[i]};
      if (next.fi >= 0 && next.se >= 0 && next.fi < n && next.se < m)
      {
        if (vis[next.fi][next.se] || campus[next.fi][next.se] == 'X')
          continue;
        q.push(next);
        vis[next.fi][next.se] = true;
      }
    }
  }
  if (people)
    cout << people;
  else
    cout << "TT";
  return 0;
}
