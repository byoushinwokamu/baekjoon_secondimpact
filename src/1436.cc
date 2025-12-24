// BOJ 1436
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
  int n, cnt = 0;
  cin >> n;

  for (int j = 666;; j++)
  {
    int i = j;
    bool doom = false;
    while (i > 100)
    {
      if (i % 1000 == 666)
      {
        doom = true;
        break;
      }
      i /= 10;
    }
    if (doom)
      cnt++;
    if (cnt == n)
    {
      cout << j;
      return 0;
    }
  }

  return 0;
}
