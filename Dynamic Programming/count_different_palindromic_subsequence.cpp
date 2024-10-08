/*

day39


static const auto io_sync_off = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  return nullptr;
}();

class Solution {
 private:
  static const constexpr int64_t kMod = 1e9 + 7;

  inline int64_t module(int x) {
    return x > kMod ? x - kMod : (x < 0 ? x + kMod : x);
  }

 public:
  int countPalindromicSubsequences(const std::string& s) {
    const size_t sz = s.size();
    int64_t dp[sz][2];                       
    std::for_each(dp, dp + sz, [](auto& v) { std::fill(v, v + 2, 0); });
    int64_t res = 0;
    for (int i = 0; i < sz; ++i) {
      int64_t pre = 1;                        
      for (int j = i - 1; j >= 0; --j) {
        if (s[j] == s[i]) {
          int64_t x = dp[j][0] + 1;           
          dp[j][0] = module(dp[j][0] + pre);  
          pre = module(x - dp[j][1]);         
          dp[j][1] = x;                      
        } else {
          dp[j][0] = module(dp[j][0] + pre);  
        }
      }
      res = module(res + pre);                
    }
    return res;
  }
};



*/