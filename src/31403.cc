// BOJ 31403
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
  cout << a + b - c << '\n';
  string s = to_string(a);
  s.append(to_string(b));
  cout << stoi(s) - c;

  return 0;
}
