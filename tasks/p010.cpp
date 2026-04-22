#include <iostream>
#include <vector>
#include "euler_utils.h"
#include <cmath>
using namespace std; 

class Solution {
public:
    long long compute() {
        const int LIMIT = 2000000;
        std::vector<bool> sieve(LIMIT, true);
        sieve[0] = sieve[1] = false;
        for (int i = 2; i <= sqrt(LIMIT); ++i) {
            if (sieve[i]) {
                for (int j = i * i; j < LIMIT; j += i)
                    sieve[j] = false;
            }
        }
        long long total = 0;
        for (int i = 2; i < LIMIT; ++i)
            if (sieve[i]) total += i;
        return total;
    }
};


int main() {
    Solution sol;
    long long result;
    TIME_IT(result = sol.compute());
    cout << result << endl;
    return 0;
}