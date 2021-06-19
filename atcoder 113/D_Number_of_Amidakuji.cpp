#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cstring>
#include <cassert>
#include <utility>
#include <iomanip>

using namespace std;

#define sz(x) (int) x.size()
#define unique(x) x.erase(unique(x.begin(), x.end()), x.end())
#define all(a) a.begin(), a.end()
#define sqr(x) ((x) * (x)) 
#define y1 aksjdaskdjksjfksdjf
#define left kdnvldvoiwejifejg
#define right lkdsjflksdjfdjfk
#define prev asdasfsadjkjsdfjs
#define tm aklsjdasjdasjdkdjjf

const int mod = (int) 1e9 + 7;

int n, m, need;
int dp[105][105][305];

int getBit(int x, int pos) {
  return (x & (1 << pos)) > 0 ? 1 : 0;
}

bool checkMask(int mask) {
  for (int i = 0; i + 1 < (m - 1); i++) {
    if (getBit(mask, i) == 1 && getBit(mask, i + 1) == 1) {
      return false;
    }
  }
  return true;
}

int getNextPos(int mask, int pos) {
  if (pos < m - 1 && getBit(mask, pos) == 1) {
    return pos + 1;
  }
  if (pos - 1 >= 0 && getBit(mask, pos - 1) == 1) {
    return pos - 1;
  }
  return pos;
}

int main() { 

  scanf("%d %d %d", &n, &m, &need);
  need--;

  dp[0][0][0] = 1;
  int ans = 0;

  for (int i = 0; i < n; i++) {
    for (int pos = 0; pos < m; pos++) {
      for (int curMask = 0; curMask < (1 << (m - 1)); curMask++) {
        if (checkMask(curMask) == false) {
          continue;
        }
        // cerr << i << " " << pos << " " << curMask << " " << dp[i][pos][curMask] << endl;
        for (int mask = 0; mask < (1 << (m - 1)); mask++) {
          if (checkMask(mask) == false) {
            continue;
          }
          int nextPos = getNextPos(mask, pos);
          dp[i + 1][nextPos][mask] = (dp[i + 1][nextPos][mask] + dp[i][pos][curMask]) % mod;
          if (i + 1 == n && nextPos == need) {
            ans = (ans + dp[i][pos][curMask]) % mod;
          }
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}
