// BOJ 2753
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
  int y;
  cin >> y;
  if (y % 4 == 0)
  {
    if (y % 100 == 0)
    {
      if (y % 400 == 0)
        cout << 1;
      else
        cout << 0;
    }
    else
      cout << 1;
  }
  else
    cout << 0;

  return 0;
}
