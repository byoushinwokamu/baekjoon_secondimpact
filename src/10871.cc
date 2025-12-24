// BOJ 10871
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
  int n, x;
  cin >> n >> x;
  int a;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    if (a < x)
      cout << a << ' ';
  }

  return 0;
}
