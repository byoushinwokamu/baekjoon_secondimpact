// BOJ 1181
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
  vector<string> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  sort(v.begin(), v.end(), [](auto a, auto b)
       {
      if (a.length() == b.length())
      return a < b;
      return a.length() < b.length(); });

  v.erase(unique(v.begin(), v.end()));
  for (auto s : v)
    cout << s << '\n';

  return 0;
}
