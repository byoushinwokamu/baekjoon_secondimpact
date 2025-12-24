// BOJ 2675
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
  string s;
  int r;
  cin >> t;
  while (t--)
  {
    cin >> r >> s;
    for (auto c : s)
      for (int i = 0; i < r; i++)
        cout << c;
    cout << '\n';
  }
  return 0;
}
