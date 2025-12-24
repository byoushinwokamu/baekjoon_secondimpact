// BOJ 2562
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
  int n, m = 0;
  int a;
  for (int i = 0; i < 9; i++)
  {
    cin >> a;
    if (a > m)
      m = a, n = i + 1;
  }
  cout << m << '\n';
  cout << n;

  return 0;
}
