#include <iostream>
#include <vector>
#include "euler_utils.h"
#include <cmath>
using namespace std; 
#include <gmpxx.h>


class Solution {

public:
mpz_class compute() {
while (1) {
for (float m = 3; m < 100 ; m++){
for (float n = 4 ; n < 100 ; n++){
float a = pow(m, 2) + pow (n,2);
float b = 2*m*n;
float c = pow(m, 2) - pow (n,2);
if ((c + b + a) == 1000){
return c + b + a;
}

}
}
}
}
};


int main() {
    Solution sol;
    mpz_class result;
    TIME_IT(result = sol.compute());
    cout << result << endl;
    return 0;
} 