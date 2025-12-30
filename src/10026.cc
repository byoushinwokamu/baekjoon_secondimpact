// BOJ 10026
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

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int n;
  cin >> n;
  vector<string> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  vector<vector<bool>> vis1(n, vector<bool>(n));
  vector<vector<bool>> vis2(n, vector<bool>(n));

  int region1 = 0, region2 = 0;
  const int dx[] = {1, -1, 0, 0};
  const int dy[] = {0, 0, 1, -1};

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
    {
      if (vis1[i][j])
        continue;
      region1++;
      queue<pp> q;
      q.push({i, j});
      vis1[i][j] = true;
      while (!q.empty())
      {
        pp now = q.front();
        q.pop();
        for (int d = 0; d < 4; d++)
        {
          pp next = {now.fi + dx[d], now.se + dy[d]};
          if (next.fi >= 0 && next.se >= 0 && next.fi < n && next.se < n)
            if (!vis1[next.fi][next.se])
              if (v[now.fi][now.se] == v[next.fi][next.se])
                vis1[next.fi][next.se] = true, q.push(next);
        }
      }
    }

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      if (v[i][j] == 'G')
        v[i][j] = 'R';

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
    {
      if (vis2[i][j])
        continue;
      region2++;
      queue<pp> q;
      q.push({i, j});
      vis2[i][j] = true;
      while (!q.empty())
      {
        pp now = q.front();
        q.pop();
        for (int d = 0; d < 4; d++)
        {
          pp next = {now.fi + dx[d], now.se + dy[d]};
          if (next.fi >= 0 && next.se >= 0 && next.fi < n && next.se < n)
            if (!vis2[next.fi][next.se])
              if (v[now.fi][now.se] == v[next.fi][next.se])
                vis2[next.fi][next.se] = true, q.push(next);
        }
      }
    }

  cout << region1 << ' ' << region2;

  return 0;
}
