#include <iostream>
#include <vector>
#include "euler_utils.h"
using namespace std; 



class Solution {

public:
long long compute() {
    long long  out = 0;
    for (long long i = 0; i <= 606000; i++) {
    if ((i % 2) == 1) {
    out += i * i;
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