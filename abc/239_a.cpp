#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  ll H;
  cin >> H;
  cout << fixed << setprecision(7) << (double)sqrt(H*(12800000+H)) <<'\n';
  return 0;
}
