#include <iostream>
#include <vector>
#include "euler_utils.h"
#include <cmath>
using namespace std; 

class Solution {

public:
long long compute() {
primechecker isprime;
long long total = 0;
long long i =1;
while (total < 10001){
i++;
if (isprime.prime(i)) {total ++;}
}
return i;
}
};


int main() {
    Solution sol;
    long long result;
    TIME_IT(result = sol.compute());
    cout << result << endl;
    return 0;
}