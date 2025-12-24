// BOJ 2475
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
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  cout << (a * a + b * b + c * c + d * d + e * e) % 10;

  return 0;
}
