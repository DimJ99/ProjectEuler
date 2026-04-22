#include <iostream>
#include <vector>
#include "euler_utils.h"
using namespace std; 

class Solution {

public:
long long compute() {
    long long  out = 0;
    for (int i = 0; i < 1000; i++) {
    if ((i % 3 == 0) || (i % 5 == 0)) {
    out += i;
    }
}
    return out;
}
};
int main() {
    Solution sol;
    long long result;
    TIME_IT(result = sol.compute());
    cout << result << endl;
    return 0;
}