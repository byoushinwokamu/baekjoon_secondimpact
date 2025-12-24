// BOJ 10250
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
  int t;
  cin >> t;
  while (t--)
  {
    int h, w, n, s;
    cin >> h >> w >> n;
    s = h * w;
    int f = n % h;
    int r = (n - 1) / h + 1;
    cout << (f ? f : h);
    if (r < 10)
      cout << '0';
    cout << r << '\n';
  }

  return 0;
}
