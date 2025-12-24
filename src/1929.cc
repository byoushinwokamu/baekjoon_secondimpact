// BOJ 1929
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;

vector<bool> isnp(1000001);

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  isnp[1] = true;
  for (int i = 2; i <= 1000000; i++)
    for (int j = 2; j * i <= 1000000; j++)
      isnp[i * j] = true;
  int m, n;
  cin >> m >> n;
  for (m; m <= n; m++)
    if (!isnp[m])
      cout << m << '\n';

  return 0;
}
