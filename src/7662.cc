// BOJ 7662
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <set>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--)
  {
    int k, n;
    char c;
    cin >> k;
    multiset<int> ms;
    while (k--)
    {
      cin >> c >> n;
      if (c == 'I')
        ms.insert(n);
      else if (!ms.empty())
        (n == -1) ? ms.erase(ms.begin()) : ms.erase(--ms.end());
    }
    if (!ms.empty())
      cout << (*(--ms.end())) << ' ' << (*ms.begin()) << '\n';
    else
      cout << "EMPTY\n";
  }

  return 0;
}
