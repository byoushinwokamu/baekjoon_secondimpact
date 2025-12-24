// BOJ 18110
#include <algorithm>
#include <iostream>
#include <cmath>
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
  if (!n)
  {
    cout << 0;
    return 0;
  }
  int cut = round(n * 0.15);
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  sort(v.begin(), v.end());
  int avg = 0;
  for (int i = cut; i < n - cut; i++)
    avg += v[i];
  cout << round((double)avg / (n - cut * 2));

  return 0;
}
