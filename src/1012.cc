// BOJ 1012
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

bool valid(pp p, int m, int n)
{
  return p.fi >= 0 && p.se >= 0 && p.fi < m && p.se < n;
}

pp operator+(auto a, auto b)
{
  return {a.fi + b.fi, a.se + b.se};
}

const pp dp[4] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--)
  {
    int m, n, k;
    cin >> m >> n >> k;
    vector<pp> bc(k);
    vector<vector<bool>> v(m, vector<bool>(n));
    vector<vector<bool>> visit(m, vector<bool>(n));
    for (int i = 0; i < k; i++)
    {
      cin >> bc[i].fi >> bc[i].se;
      v[bc[i].fi][bc[i].se] = true;
    }

    // bfs
    int jri = 0;
    for (auto p : bc)
    {
      if (visit[p.fi][p.se])
        continue;
      jri++;
      queue<pp> q;
      q.push(p);
      visit[p.fi][p.se] = true;
      while (!q.empty())
      {
        pp now = q.front();
        q.pop();
        for (auto d : dp)
        {
          if (valid(d + now, m, n))
          {
            if (!v[d.fi + now.fi][d.se + now.se])
              continue;
            if (visit[d.fi + now.fi][d.se + now.se])
              continue;
            q.push(d + now);
            visit[d.fi + now.fi][d.se + now.se] = true;
          }
        }
      }
    }
    cout << jri << '\n';
  }

  return 0;
}
