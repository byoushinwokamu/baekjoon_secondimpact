// BOJ 17219
#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  string site, passwd;
  unordered_map<string, string> um;
  while (n--)
    cin >> site >> passwd, um[site] = passwd;
  while (m--)
    cin >> site, cout << um[site] << '\n';

  return 0;
}
