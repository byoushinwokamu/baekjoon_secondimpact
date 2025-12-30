// BOJ 2178
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
  int n, m;
  cin >> n >> m;
  vector<string> maze(n);
  for (int i = 0; i < n; i++)
    cin >> maze[i];

  queue<ppi> q;
  vector<vector<bool>> vis(n, vector<bool>(m));
  q.push({{0, 0}, 1});
  vis[0][0] = true;
  while (!q.empty())
  {
    pp nowp = q.front().fi;
    int nowt = q.front().se;
    if (nowp.fi == n - 1 && nowp.se == m - 1)
    {
      cout << nowt;
      return 0;
    }
    q.pop();
    const int dx[4] = {1, -1, 0, 0};
    const int dy[4] = {0, 0, 1, -1};
    for (int i = 0; i < 4; i++)
    {
      pp next = {nowp.fi + dx[i], nowp.se + dy[i]};
      if (next.fi >= 0 && next.fi < n && next.se >= 0 && next.se < m)
      {
        if (maze[next.fi][next.se] == '1' && !vis[next.fi][next.se])
        {
          q.push({next, nowt + 1});
          vis[next.fi][next.se] = true;
        }
      }
    }
  }

  return 0;
}
