// BOJ 4949
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <stack>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  string s;
  getline(cin, s);
  while (s != ".")
  {
    stack<char> st;
    bool cor = true;
    for (auto c : s)
    {
      switch (c)
      {
      case '(':
        st.push('(');
        break;
      case '[':
        st.push('[');
        break;
      case ')':
        if (st.empty() || st.top() != '(')
          cor = false;
        st.pop();
        break;
      case ']':
        if (st.empty() || st.top() != '[')
          cor = false;
        st.pop();
        break;
      }
      if (!cor)
        break;
    }
    if (!st.empty())
      cor = false;
    cout << (cor ? "yes\n" : "no\n");
    getline(cin, s);
  }

  return 0;
}
