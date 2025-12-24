// BOJ 2231
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;

vector<int> maker(1000001);

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  for (int i = 1; i <= 1000000; i++)
  {
    int sum = i;
    string s = to_string(i);
    for (auto c : s)
      sum += c - '0';
    if (!maker[sum])
      maker[sum] = i;
  }
  int n;
  cin >> n;
  cout << maker[n];

  return 0;
}
