// BOJ 11659
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
  int n, m;
  cin >> n >> m;
  vector<int> v(n);
  vector<ll> vs(n);
  cin >> v[0];
  for (int i = 1; i < n; i++)
    cin >> v[i], vs[i] = vs[i - 1] + v[i];

  while (m--)
  {
    int i, j;
    cin >> i >> j;
    cout << vs[j - 1] - vs[i - 1] + v[i - 1] << '\n';
  }

  return 0;
}
