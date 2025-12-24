// BOJ 1546
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
  int n, s, ms = 0, summ = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> s, summ += s, ms = max(ms, s);
  cout << (double)summ / n / ms * 100;

  return 0;
}
