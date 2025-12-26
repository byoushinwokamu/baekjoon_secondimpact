// BOJ 11399
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
  int n;
  cin >> n;
  vector<int> p(n);
  for (int i = 0; i < n; i++)
    cin >> p[i];

  sort(p.begin(), p.end());
  int t = 0, ts = 0;
  for (auto i : p)
    t += i, ts += t;

  cout << ts;

  return 0;
}
