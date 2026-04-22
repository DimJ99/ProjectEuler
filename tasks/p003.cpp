#include <iostream>
#include <vector>
#include "euler_utils.h"
#include <cmath>
using namespace std; 

class Solution {

public:
long long compute(long long num) {
    primechecker primer;
    long long  out = 0;
    long long sqrt = std::sqrt(num);
    for (long long i = 2;  i<= (sqrt); i++ ) {
    if (num % i == 0 && primer.prime(i)){
    out = i;
    }
    }
    return out;
}
};
int main() {
    Solution sol;
    long long result;
    TIME_IT(result = sol.compute(600851475143));
    cout << result << endl;
   
    return 0;
}