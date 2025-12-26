// BOJ 9095
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
  int t, n;
  cin >> t;
  vector<int> v(11);
  v[1] = 1;
  v[2] = 2;
  v[3] = 4;
  for (int i = 4; i <= 10; i++)
    v[i] = v[i - 1] + v[i - 2] + v[i - 3];

  while (t--)
    cin >> n, cout << v[n] << '\n';

  return 0;
}
