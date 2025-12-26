// BOJ 1874
#include <algorithm>
#include <iostream>
#include <stack>
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
  stack<int> st;
  string res;
  int n, t, i = 1;
  cin >> n;
  for (int pr = 0; pr < n;)
  {
    cin >> t;
    if (st.empty()) // 없으면 푸시
    {
      while (i <= t)
        st.push(i++), res.append("+\n");
      st.pop(), res.append("-\n"), pr++;
    }
    else if (st.top() < t) // 탑이 더 작으면 푸시
    {
      if (i > t) // 앞으로 넣을 숫자가 더 크면 조짐
      {
        cout << st.top() << "NO";
        return 0;
      }

      while (i <= t) // 나올때까지 푸시
        st.push(i++), res.append("+\n");
      st.pop(), res.append("-\n"), pr++;
    }
    else if (st.top() > t) // 탑이 더 크면 조짐
    {
      cout << "NO";
      return 0;
    }
    else // 탑이 원하던 숫자임
      st.pop(), res.append("-\n"), pr++;
  }
  cout << res;

  return 0;
}
