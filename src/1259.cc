// BOJ 1259
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
  while (s != "0")
  {
    bool pal = true;
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] != s[s.length() - i - 1])
        pal = false;
    }

    cout << (pal ? "yes\n" : "no\n");
    cin >> s;
  }

  return 0;
}
