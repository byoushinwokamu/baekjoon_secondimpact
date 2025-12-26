// BOJ 9375
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

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
    int n;
    cin >> n;
    vector<string> v;
    unordered_map<string, int> um;
    string s;
    while (n--)
    {
      cin >> s;
      cin >> s;
      if (um[s]++ == 0)
        v.push_back(s);
    }
    int ootd = 1;
    for (auto vs : v)
      ootd *= um[vs] + 1;
    cout << ootd - 1 << '\n';
  }

  return 0;
}
