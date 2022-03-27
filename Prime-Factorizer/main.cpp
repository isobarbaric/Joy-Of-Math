
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    int num = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) num++;
    }
    if (num > 2) return false;
    else return true;
}

int main() {

    int n; cin >> n;
    if (isPrime(n)) cout << n;
    else {
      vector<int> dist_div;
      for (int i = 2; i*i <= n; i++) {
          if (n % i == 0 && isPrime(i)) {
            dist_div.push_back(i);
            if (isPrime(n/i)) {
              dist_div.push_back(n/i);
            }
          }
      }
      const int size = dist_div.size();
      vector<int> count(size);
      // for each prime factor, going to keep dividing
      int ptr = 0;
      while (ptr != size) {
          int c = 0;
          while (n % dist_div[ptr] == 0) {
              c++;
              n /= dist_div[ptr];   
          }
          count[ptr] = c;
          ptr++;
      }
      string t; // has to be introduced to cut off the extra * sign at the end 
      for (int i = 0; i < size; i++) {
          int num_t = count[i];
          for (int j = 0; j < num_t; j++) {
              t += (to_string(dist_div[i]) + "*");
          }
      }
      const int len = t.length();
      for (int i = 0; i < len-1; i++) cout << t[i];
    }
           
    return 0;
}