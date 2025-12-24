// BOJ 28702
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
  string s[3];
  int n[3] = {
      0,
  };
  bool go = false;
  for (int i = 0; i < 3; i++)
  {
    cin >> s[i];
    if (isdigit(s[i][0]))
      n[i] = stoi(s[i]);
  }

  int next;
  if (n[0])
    next = n[0] + 3;
  else if (n[1])
    next = n[1] + 2;
  else if (n[2])
    next = n[2] + 1;

  if (next % 3)
    if (next % 5)
      cout << next;
    else
      cout << "Buzz";
  else if (next % 5)
    cout << "Fizz";
  else
    cout << "FizzBuzz";

  return 0;
}
