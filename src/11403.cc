// BOJ 11403
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
  int n;
  cin >> n;
  vector<vector<int>> adj(n, vector<int>(n));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> adj[i][j];

  for (int st = 0; st < n; st++)
  {
    queue<int> q;
    vector<bool> vis(n);
    q.push(st);
    while (!q.empty())
    {
      int now = q.front();
      q.pop();
      for (int i = 0; i < n; i++)
        if (adj[now][i] && !vis[i])
          vis[i] = true, q.push(i);
    }
    for (auto v : vis)
      cout << (v ? 1 : 0) << ' ';
    cout << '\n';
  }

  return 0;
}
