// BOJ 1463
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
  vector<int> v(n + 1);
  v[1] = 0;
  v[2] = 1;
  v[3] = 1;
  for (int i = 4; i <= n; i++)
  {
    v[i] = v[i - 1] + 1;
    if (i % 2 == 0)
      v[i] = min(v[i], v[i / 2] + 1);
    if (i % 3 == 0)
      v[i] = min(v[i], v[i / 3] + 1);
  }
  cout << v[n];

  return 0;
}
