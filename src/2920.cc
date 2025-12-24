// BOJ 2920
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
  string s;
  getline(cin, s);
  if (s == "1 2 3 4 5 6 7 8")
    cout << "ascending";
  else if (s == "8 7 6 5 4 3 2 1")
    cout << "descending";
  else
    cout << "mixed";

  return 0;
}
