// BOJ 11727
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
  vector<int> v(n);
  v[0] = 1, v[1] = 3;
  for (int i = 2; i < n; i++)
    v[i] = (v[i - 1] + 2 * v[i - 2]) % 10007;
  cout << v[n - 1];

  return 0;
}
