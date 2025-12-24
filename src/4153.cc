// BOJ 4153
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
  int a, b, c;
  cin >> a >> b >> c;
  while (a + b + c)
  {
    a *= a, b *= b, c *= c;
    if (a + b == c || b + c == a || c + a == b)
      cout << "right\n";
    else
      cout << "wrong\n";
    cin >> a >> b >> c;
  }
  return 0;
}
