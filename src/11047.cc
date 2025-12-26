// BOJ 11047
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
  int n, k;
  cin >> n >> k;
  vector<int> coin(n);
  for (int i = 0; i < n; i++)
    cin >> coin[i];

  int s = 0, c = 0;
  for (auto rit = coin.rbegin(); rit != coin.rend(); rit++)
    while (*rit + s <= k)
      s += *rit, c++;
  cout << c;

  return 0;
}
