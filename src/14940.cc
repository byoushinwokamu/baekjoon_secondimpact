// BOJ 14940
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

pp operator+(const pp &a, const pp &b) { return {a.fi + b.fi, a.se + b.se}; }

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  vector<vector<int>> land(n, vector<int>(m));
  vector<vector<int>> dist(n, vector<int>(m));
  pp dest;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
    {
      cin >> land[i][j];
      if (land[i][j] == 2)
        dest = {i, j};
      dist[i][j] = (land[i][j] == 1 ? -1 : 0);
    }

  queue<pair<pp, int>> q;
  q.push({dest, 0});
  dist[dest.fi][dest.se] = 0;
  auto valid = [=](const pp &p)
  {
    return p.fi >= 0 && p.se >= 0 && p.fi < n && p.se < m;
  };

  const pp dp[] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
  while (!q.empty())
  {
    pp nowp = q.front().fi;
    int nowd = q.front().se;
    q.pop();
    for (auto d : dp)
    {
      pp nextp = d + nowp;
      if (valid(nextp) && land[nextp.fi][nextp.se] != 0 && dist[nextp.fi][nextp.se] == -1)
      {
        dist[nextp.fi][nextp.se] = nowd + 1;
        q.push({nextp, nowd + 1});
      }
    }
  };

  for (auto row : dist)
  {
    for (auto col : row)
      cout << col << ' ';
    cout << '\n';
  }

  return 0;
}
