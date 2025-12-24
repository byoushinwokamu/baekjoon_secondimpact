// BOJ 2839
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
  for (int n5 = n / 5; n5 >= 0; n5--)
    for (int n3 = n / 3; n3 >= 0; n3--)
      if (n5 * 5 + n3 * 3 == n)
      {
        cout << n5 + n3;
        return 0;
      }
  cout << -1;

  return 0;
}
