// BOJ 10989
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
  vector<int> v(10001);
  int input;
  while (n--)
    cin >> input, v[input]++;

  for (int i = 1; i <= 10000; i++)
    for (int j = 1; j <= v[i]; j++)
      cout << i << '\n';

  return 0;
}
