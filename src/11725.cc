// BOJ 11725
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
  vector<vector<int>> adj(n + 1);
  vector<bool> vis(n + 1);
  vector<int> parent(n + 1);
  for (int i = 1; i < n; i++)
  {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  queue<int> q;
  vis[1] = true;
  q.push(1);
  while (!q.empty())
  {
    int now = q.front();
    q.pop();

    for (auto next : adj[now])
    {
      if (vis[next])
        continue;
      vis[next] = true;
      q.push(next);
      parent[next] = now;
    }
  }

  for (int i = 2; i <= n; i++)
    cout << parent[i] << '\n';

  return 0;
}
