#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int arraySign(vector<int> &nums) {
    // FIXME
    return 0;
  }
};

void TestArraySign() {
  Solution s;
  {
    vector<int> nums{-1,-2,-3,-4,3,2,1};
    assert(1 == s.arraySign(nums));
  }
  {
    vector<int> nums{1,5,0,2,-3};
    assert(0 == s.arraySign(nums));
  }
  {
    vector<int> nums{-1,1,-1,1,-1};
    assert(-1 == s.arraySign(nums));
  }
}

int main() {
  TestArraySign();
  std::cout << "Ok!" << std::endl;
  return 0;
}
