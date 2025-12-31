// BOJ 15652
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;

int n, m;
vector<int> v;

void dfs(int depth)
{
  if (depth == m)
  {
    for (auto i : v)
      cout << i << ' ';
    cout << '\n';
    return;
  }
  int i = depth ? (v[depth - 1]) : 1;
  for (i; i <= n; i++)
  {
    v[depth] = i;
    dfs(depth + 1);
  }
}

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  cin >> n >> m;
  v.resize(m);
  dfs(0);

  return 0;
}
