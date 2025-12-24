// BOJ 11050
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
  ll n, k;
  cin >> n >> k;
  k = max(k, n - k);
  ll c = 1;
  for (int i = n; i > n - k; i--)
    c *= i;
  for (int i = k; i > 1; i--)
    c /= i;
  cout << c;

  return 0;
}
