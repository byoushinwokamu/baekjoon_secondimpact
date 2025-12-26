// BOJ 1260
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

vector<bool> visd;
vector<bool> visb;
vector<vector<int>> adj;
int n, m, v;
int a, b;

void dfs(int now)
{
  cout << now << ' ';
  visd[now] = true;
  for (auto next : adj[now])
    if (!visd[next])
      dfs(next);
}

void bfs(int start)
{
  visb[start] = true;
  queue<int> q;
  q.push(start);
  while (!q.empty())
  {
    int now = q.front();
    q.pop();
    cout << now << ' ';
    for (auto next : adj[now])
      if (!visb[next])
        visb[next] = true, q.push(next);
  }
}

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  cin >> n >> m >> v;
  visd.resize(n + 1);
  visb.resize(n + 1);
  adj.resize(n + 1);
  while (m--)
  {
    cin >> a >> b;
    adj[a].push_back(b), adj[b].push_back(a);
  }
  for (auto &vec : adj)
    sort(vec.begin(), vec.end());

  dfs(v);
  cout << '\n';
  bfs(v);

  return 0;
}
