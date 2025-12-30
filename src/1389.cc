// BOJ 1389
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
  int n, m, a, b;
  cin >> n >> m;
  vector<vector<int>> adj(n + 1);
  while (m--)
    cin >> a >> b, adj[a].push_back(b), adj[b].push_back(a);

  int minbac = n * n, ans = 0;
  for (int s = 1; s <= n; s++)
  {
    int bacon = 0;
    vector<int> vis(n + 1, -1);
    queue<pp> q; // fi: user, se: bacon#
    q.push({s, 0});
    while (!q.empty())
    {
      pp now = q.front();
      q.pop();
      bacon += now.se;
      for (auto next : adj[now.fi])
      {
        if (vis[next] == -1)
          vis[next] = now.se + 1, q.push({next, now.se + 1});
      }
    }
    if (minbac > bacon)
      ans = s, minbac = bacon;
  }
  cout << ans;

  return 0;
}
