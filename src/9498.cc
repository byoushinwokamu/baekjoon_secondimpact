// BOJ 9498
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
  int s;
  cin >> s;
  switch (s / 10)
  {
  case 10:
  case 9:
    cout << 'A';
    break;
  case 8:
    cout << 'B';
    break;
  case 7:
    cout << 'C';
    break;
  case 6:
    cout << 'D';
    break;
  default:
    cout << 'F';
  }

  return 0;
}
