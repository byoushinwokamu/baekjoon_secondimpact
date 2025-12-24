// BOJ 8958
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
  int t;
  cin >> t;
  string s;
  while (t--)
  {
    cin >> s;
    int score = 0;
    int combo = 1;
    for (auto c : s)
    {
      if (c == 'O')
        score += combo++;
      else
        combo = 1;
    }
    cout << score << '\n';
  }

  return 0;
}
