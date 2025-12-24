// BOJ 1676
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
  int n2 = 0, n5 = 0;
  for (n; n > 0; n--)
  {
    int m = n;
    while (!(m % 2))
      m /= 2, n2++;
    while (!(m % 5))
      m /= 5, n5++;
  }
  cout << min(n2, n5);

  return 0;
}
