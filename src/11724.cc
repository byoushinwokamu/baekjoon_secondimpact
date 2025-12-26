// BOJ 11724
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
  vector<vector<int>> adj(n + 1);
  while (m--)
  {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v), adj[v].push_back(u);
  }

  vector<bool> vis(n + 1);
  int con = 0;

  for (int i = 1; i <= n; i++)
  {
    if (vis[i])
      continue;
    queue<int> q;
    vis[i] = true;
    q.push(i);
    con++;

    while (!q.empty())
    {
      int now = q.front();
      q.pop();
      for (auto next : adj[now])
        if (!vis[next])
          vis[next] = true, q.push(next);
    }
  }
  cout << con;

  return 0;
}
