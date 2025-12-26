// BOJ 1003
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;

vector<pp> calls(41);

pp operator+(auto a, auto b) { return {a.fi + b.fi, a.se + b.se}; }

pp fibo(int n)
{
  if (n > 1 && !calls[n].fi)
    calls[n] = fibo(n - 1) + fibo(n - 2);
  return calls[n];
}

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int t, n;
  cin >> t;
  calls[0] = {1, 0};
  calls[1] = {0, 1};
  while (t--)
  {
    cin >> n;
    pp p = fibo(n);
    cout << p.fi << ' ' << p.se << '\n';
  }

  return 0;
}
