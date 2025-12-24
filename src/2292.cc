// BOJ 2292
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
  int six = 6, summ = 1;
  int n;
  cin >> n;
  if (n == 1)
    cout << 1;
  else
  {
    while (summ < n)
      summ += six, six += 6;
    cout << six / 6;
  }

  return 0;
}
