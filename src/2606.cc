// BOJ 2606
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <vector>

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
  int a, b;
  while (m--)
    cin >> a >> b, adj[a].push_back(b), adj[b].push_back(a);

  queue<int> q;
  vector<bool> vis(n + 1);
  vis[1] = true;
  int c = 0;
  q.push(1);
  while (!q.empty())
  {
    int now = q.front();
    q.pop();
    for (auto i : adj[now])
    {
      if (vis[i])
        continue;
      vis[i] = true;
      c++;
      q.push(i);
    }
  }
  cout << c;

  return 0;
}
