// BOJ 3052
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
  vector<bool> v(42);
  int a;
  for (int i = 0; i < 10; i++)
    cin >> a, v[a % 42] = true;
  int c = 0;
  for (auto b : v)
    b ? c++ : c;
  cout << c;

  return 0;
}
