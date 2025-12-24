// BOJ 10809
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
  vector<int> v(26);
  string s;
  cin >> s;

  for (int i = 0; i < s.length(); i++)
    if (!v[s[i] - 'a'])
      v[s[i] - 'a'] = i + 1;
  for (int i = 0; i < 26; i++)
    cout << v[i] - 1 << ' ';

  return 0;
}
