// BOJ 15654
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
vector<int> num;

void dfs(int depth)
{
  if (depth == m)
  {
    for (auto i : v)
      cout << i << ' ';
    cout << '\n';
    return;
  }
  for (int i = 0; i < n; i++)
  {
    if (!num[i])
      continue;
    v[depth] = num[i];
    num[i] = 0;
    dfs(depth + 1);
    num[i] = v[depth];
  }
}

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  cin >> n >> m;
  v.resize(m);
  num.resize(n);
  for (int i = 0; i < n; i++)
    cin >> num[i];
  sort(num.begin(), num.end());
  dfs(0);

  return 0;
}
