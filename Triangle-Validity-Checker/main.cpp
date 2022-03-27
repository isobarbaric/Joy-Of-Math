
#include <bits/stdc++.h>
using namespace std;

int main() {
    
  int nums[3];
  for (int i = 0; i < 3; i++) cin >> nums[i];
  int val[3];
  int sum = 0;
  for (int i = 0; i < 3; i++) sum += nums[i];
  for (int i = 0; i < 3; i++) {
    val[i] = sum - nums[i];
  }
  bool isValid = true;
  for (int i = 0; i < 3; i++) {
    if (val[i] <= nums[i]) isValid = false;
  }
  if (isValid) cout << "is a valid triangle";
  else cout << "is a degenerate triangle";
  
  return 0;
}