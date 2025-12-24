// BOJ 2609
#include <algorithm>
#include <iostream>
#include <string>
#include <numeric>
#include <vector>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int a, b;
  cin >> a >> b;
  cout << gcd(a, b) << '\n'
       << lcm(a, b);

  return 0;
}
