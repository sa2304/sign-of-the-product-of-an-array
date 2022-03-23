#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int arraySign(vector<int> &nums) {
    int result = 1;
    for (int n: nums) {
      if (n == 0) { return 0; }
      else if (n < 0) { result ^= n; }
    }

    return (0 < result) ? 1 : -1;
  }
};

void TestArraySign() {
  Solution s;
  {
    vector<int> nums{-1, -2, -3, -4, 3, 2, 1};
    assert(1 == s.arraySign(nums));
  }
  {
    vector<int> nums{1, 5, 0, 2, -3};
    assert(0 == s.arraySign(nums));
  }
  {
    vector<int> nums{-1, 1, -1, 1, -1};
    assert(-1 == s.arraySign(nums));
  }
  {
    vector<int> nums
        {-52, -9, -4, -29, -92, -35, -82, -37, -85, -46, -47, -12, -53, -34, -81, -27, -65, -92, -95, -14, -82, -62, -1,
         -84, -96, -98, -68, -39, -19, -85, -42, -28, -42, -92, -54, -86, -54, -28, -48, -71, -90, -68, -10, -39, -82,
         -98, -15, -43, -52, -95, -56, -47, -60, -9, -8, -90, -72, -42, -40, -77, -83, -86, -44, -51, -80, -19, -47,
         -84, -86, -53, -2, -91, -57, -53, -14, -64, -58, -27, -85, -47, -1, -7, -86, -59, -77, -79, -35, -2, -65, -87,
         -71, -68, -37, -41, -46, -74, -84, -4, -58, -14, -89, -11, -27, -69, -58, -67, -91, -94, -9, -61, -71, -47,
         -72, -42, -33, -92, -26, -16, -49, -74, -28, -2, -48, -82, -6, -69, -45, -18, -37, -77, -20, -58, -59, -52,
         -37, -76, -70, -38, -32, -41, -53, -32, -88, -15, -85, -95, -5, -94, -48, -87, -92, -13, -91, -24, -22, -26,
         -75, -26, -18, -4, -28, -23, -88, -29, -4, -62, -86, -39, -96, -10, -34, -30, -96, -87, -64, -50, -4, -53, -95,
         -67, -89, -1, -60, -2, -96, -84, -22, -77, -26, -80, -18, -13, -39, -34, -70, -54, -40, -67, -22, -58, -30,
         -57, -82, -72, -80, -50, -29, -94, -2, -12, -90, -78, -49, -91, -59, -12, -67, -97, -76, -13, -75, -5, -65,
         -26, -100, -82, -93, -93, -74, -90, -15, -94, -43, -25, -70, -29, -10, -19, -32, -99, -38, -1, -23, -30, -41,
         -14, -31, -67, -49, -18, -59, -15, -82, -72, -74, -54, -91, -49, -100, -11, -93, -7, -1, -49, -23, -6, -67,
         -72, -9, -45, -78, -77, -56, -19, -41, -29, -77, -50, -80, -45, -29, -98, -53, -2, -52, -29, -77, -61, -3, -64,
         -71, -94, -79, -64, -39, -58, -42, -40, -22, -79, -21, -38, -31, -96, -1, -30, -84, -14, -53, -68, -15, -50,
         -3, -46, -92, -47, -42, -34, -81, -54, -7, -25, -68, -69, -1, -54, -64, -90, -5, -82, -46, -97, -67, -99, -17,
         -81, -7, -92, -61, -91, -57, -85, -84, -8, -84, -67, -11, -54, -79, -64, -88, -16, -84, -30, -42, -51, -65,
         -81, -72, -85, -34, -78, -68, -7, -72, -54, -49, -90, -33, -79, -44, -33, -59, -5, -27, -72, -70, -35, -21,
         -23, -55, -73, -40, -60, -24, -53, -98, -59, -40, -5, -63, -78, -65, -38, -94, -78, -6, -81, -92, -15, -56,
         -41, -80, -64, -67, -10, -70, -17, -41, -92, -1, -53, -31, -52, -67, -45, -64, -82, -22, -92, -93, -76, -80,
         -81, -51, -77, -76, -53, -61, -34, -82, -67, -48, -80, -74, -63, -89, -52, -34, -77, -73, -100, -75, -85, -49,
         -44, -92, -95, -33, -82, -61, -12, -26, -3, -14, -42, -76, -49, -91, -15, -86, -13, -24, -98, -39, -47, -55,
         -99, -34, -41, -35, -9, -15, -90, -3, -66, -1, -11, -73, -97, -87, -13, -77, -87, -70, -1, -58, -59, -47, -73,
         -68, -50, -56, -3, -31, -85, -92, -6, -7, -36, 73, 49, 65, 55, 57, 69, 30, 73, 46, 7, 1, 65, 54, 37, 93, 83,
         24, 65, 57, 20, 71, 50, 24, 17, 58, 84, 53, 27, 21, 90, 60, 50, 31, 6, 94, 38, 89, 88, 7, 90, 75, 8, 91, 85,
         41, 63, 20, 60, 47, 14, 71, 35, 74, 99, 37, 40, 48, 89, 16, 44, 89, 44, 41, 19, 66, 31, 23, 61, 62, 15, 1, 18,
         20, 87, 12, 53, 27, 27, 28, 56, 16, 55, 70, 84, 35, 47, 5, 69, 72, 80, 74, 32, 91, 46, 49, 52, 49, 95, 39, 44,
         76, 71, 7, 45, 64, 44, 42, 75, 87, 46, 51, 40, 95, 45, 55, 88, 55, 7, 93, 71, 55, 74, 38, 31, 50, 35, 86, 45,
         42, 9, 46, 52, 26, 10, 54, 52, 8, 96, 89, 59, 99, 30, 30, 25, 89, 92, 27, 56, 12, 48, 21, 72, 59, 90, 80, 92,
         91, 96, 49, 4, 47, 98, 1, 75, 69, 76, 13, 2, 64, 19, 16, 37, 76, 48, 93, 6, 69, 67, 71, 69, 28, 71, 6, 26, 41,
         8, 29, 54, 28, 68, 72, 67, 25, 1, 96, 2, 5, 100, 97, 40, 21, 56, 2, 63, 80, 33, 67, 90, 32, 84, 32, 17, 10, 91,
         85, 83, 94, 11, 86, 68, 60, 9, 13, 22, 13, 31, 96, 91, 87, 90, 11, 92, 46, 50, 33, 93, 74, 53, 22, 9, 90, 83,
         57, 16, 40, 48, 89, 49, 55, 59, 15, 69, 45, 95, 76, 10, 56, 85, 63, 90, 78, 64, 95, 53, 88, 14, 16, 98, 80, 42,
         52, 55, 93, 76, 72, 43, 85, 87, 47, 26, 81, 96, 73, 21, 97, 35, 85, 19, 8, 97, 66, 97, 18, 35, 55, 27, 51, 17,
         52, 27, 100, 17, 78, 71, 92, 74, 10, 74, 40, 5, 88, 58, 79, 2, 28, 74, 62, 1, 24, 77, 28, 6, 10, 79, 81, 55,
         10, 55, 64, 92, 8, 86, 10, 79, 92, 53, 57, 63, 87, 30, 55, 92, 17, 89, 86, 69, 39, 76, 31, 40, 73, 50, 15, 57,
         85, 28, 97, 41, 45, 34, 76, 24, 49, 26, 34, 15, 7, 5, 38, 46, 43, 64, 92, 9, 23, 92, 89, 85, 14, 49, 97, 93,
         80, 29, 65, 88, 52, 80, 24, 62, 99, 98, 21, 60, 75, 5, 24, 4, 2, 25, 99, 47, 6, 69, 63, 2, 39, 51, 15, 39, 69,
         75, 35, 77, 50, 86, 69, 81, 51, 61, 37, 2, 97, 46, 18, 13, 7, 80, 56, 62, 60, 48, 41, 98, 10, 19, 35, 6, 29,
         26, 43, 37, 48, 10, 15, 23, 74, 90, 88, 37, 19, 94, 54, 35, 75, 52, 21, 17, 54, 22, 74, 63, 45, 60, 74, 44, 8,
         65, 2, 97, 44, 13, 18, 74, 50, 62, 76, 55, 94, 85, 85, 29, 98, 16, 30, 73, 94, 88, 81, 38, 39, 84, 52, 56, 72,
         2, 86, 95, 37, 9};
    assert(1 == s.arraySign(nums));
  }
}

int main() {
  TestArraySign();
  std::cout << "Ok!" << std::endl;
  return 0;
}
