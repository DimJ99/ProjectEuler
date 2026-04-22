#include <iostream>
#include <vector>
#include "euler_utils.h"
#include <cmath>
using namespace std; 

class Solution {

public:
long long compute() {
    int q_o_s = 0;
    int s_o_q = 0;
    int out;
    for (int i = 1; i <= 100 ; i++ ){
    q_o_s += i;
    s_o_q += pow(i,2);
    }
    q_o_s = pow (q_o_s, 2);
    return out = q_o_s - s_o_q;
}
};


int main() {
    Solution sol;
    long long result;
    TIME_IT(result = sol.compute());
    cout << result << endl;
    return 0;
}