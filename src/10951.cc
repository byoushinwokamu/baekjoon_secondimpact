// BOJ 10951
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
  int a, b;
  cin >> a >> b;
  while (a + b)
  {
    cout << a + b << '\n';
    cin >> a >> b;
  }

  return 0;
}
