#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int N;
  cin >> N;
  vector<ll> L(N);
  rep(i,N) cin >> L.at(i);
  if(L.size() < 3) { cout << 0 <<'\n'; return 0; }
  
  sort(L.begin(), L.end());
  int ans = 0;
  for(int i=0; i<N-2; i++){
    for(int j=i+1; j<N-1; j++){
      for(int k=j+1; k<N; k++){
        if(L.at(i) == L.at(j) || L.at(i) == L.at(k) || L.at(j) == L.at(k)) continue;
        if(L.at(i)+L.at(j) > L.at(k)) ans++;
      }
    }
  } 
  
  cout << ans <<'\n';
  return 0;
}
