// BOJ 10818
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
  int mi = 1000001, ma = -1000001;
  int n, a;
  cin >> n;
  while (n--)
    cin >> a, mi = min(a, mi), ma = max(a, ma);
  cout << mi << ' ' << ma;

  return 0;
}
