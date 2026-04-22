#include <iostream>
#include <vector>
#include "euler_utils.h"
#include <cmath>
using namespace std; 

class Solution {

public:
long long compute() {
    long long org = 0; 
    long long rev = 0; 
    long long out = 0;
    long long i = 0;
    for (long long one = 100; one <= 999 ; one++){
    for (long long two = 100; two <= 999 ; two++ ){
    org = one * two;
    rev = 0;
    i = 0;
    for (long long pro = org; pro > 0; pro/=10){
    rev = (rev * 10) + pro % 10;
        i ++;
    }
    if (org == rev && org > out) {
        out = org;
    }
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