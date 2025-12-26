// BOJ 17626
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
  vector<ll> sq(50001);
  for (int i = 1; i <= 50000; i++)
    sq[i] = (ll)i * i;

  int n, ans = 4, acc = 0;
  cin >> n;
  for (int i = n; i > 0; i--)
  {
    if (sq[i] > n)
      continue;
    else if (sq[i] == n)
      ans = 1;

    acc += sq[i];
    for (int j = i; j > 0; j--)
    {
      if (sq[j] + acc > n)
        continue;
      else if (sq[j] + acc == n)
        ans = min(ans, 2);

      acc += sq[j];
      for (int k = j; k > 0; k--)
      {
        if (sq[k] + acc > n)
          continue;
        else if (sq[k] + acc == n)
          ans = min(ans, 3);
      }
      acc -= sq[j];
    }
    acc -= sq[i];
  }
  cout << ans;

  return 0;
}
