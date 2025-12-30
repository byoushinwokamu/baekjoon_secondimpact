// BOJ 18870
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
  vector<int> v(n);
  vector<int> vp(n);

  for (int i = 0; i < n; i++)
    cin >> v[i];
  sort(v.begin(), v.end());

  return 0;
}
