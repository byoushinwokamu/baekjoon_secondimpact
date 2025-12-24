// BOJ 14626
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
  string s;
  cin >> s;
  bool odd = false;
  int sigma = 0;
  for (int i = 0; i < 12; i++)
  {
    if (s[i] != '*')
      sigma += (s[i] - '0') * (i % 2 ? 3 : 1);
    else
      odd = i % 2;
  }
  for (int i = 0; i < 10; i++)
  {
    if ((sigma + (odd ? 3 : 1) * i) % 10 == (10 - (s[12] - '0')) % 10)
    {
      cout << i;
      return 0;
    }
  }

  return 0;
}
