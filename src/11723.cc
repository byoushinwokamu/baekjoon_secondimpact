// BOJ 11723
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
  int m, a;
  string s;
  vector<int> set(21);
  cin >> m;
  while (m--)
  {
    cin >> s;
    if (s == "add")
      cin >> a, set[a] = 1;
    else if (s == "remove")
      cin >> a, set[a] = 0;
    else if (s == "check")
      cin >> a, cout << ((set[a]) ? 1 : 0) << '\n';
    else if (s == "toggle")
      cin >> a, set[a] = !set[a];
    else if (s == "all")
      fill(set.begin(), set.end(), 1);
    else if (s == "empty")
      fill(set.begin(), set.end(), 0);
  }

  return 0;
}
