
#include <bits/stdc++.h>
using namespace std;

bool isIntegral(string a) {
  for (int i = 0; i < a.length(); i++)
    if (a[i] == '.') return false;
  return true;
}

int main() {

  string a; cin >> a;
  int ans = -1;
  if (!isIntegral(a)) {
    bool decimalPlace = false;
    int dBeg = -1;
    for (int i = 0; i < a.length(); i++) {
      if (a[i] == '.') {
        decimalPlace = true;
        continue;
      }
      if (a[i] - '0' > 0) {
        dBeg = i;
        break;
      }
    }
    ans = a.length() - dBeg;
    if (!decimalPlace) ans--; 
  }
  if (ans == -1) cout << "infinite";
  else cout << ans;

  return 0;
}