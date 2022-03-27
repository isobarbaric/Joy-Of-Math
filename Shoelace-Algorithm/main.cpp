
#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<pair<int, int>> points = 
  { {-1, 0}, {2, 0}, {2, 3}, {3, 4}, {5, 6}, {6, 8} };
  float total = 0;
  const int size = points.size();
  for (int i = 0; i < size-1; i++) {
    int a = points[i].first * points[i+1].second;
    int b = points[i].second * points[i+1].first;
    total += (a - b);
  }
  const int last = size - 1;
  total += (points[last].first*points[0].second - points[last].second*points[0].first);
  total /= 2;
  cout << abs(total);

  return 0;
}