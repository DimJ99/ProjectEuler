#include <iostream>
#include <vector>
#include "euler_utils.h"
#include <cmath>
using namespace std; 

class Solution {

public:
long long compute() {
    int check = 0;
    long long num = 1000;
    while (check != 20) {
    check = 0;
    num++;
    for (int i = 20; i >= 1 ; i-- ){
    if (num % i == 0){
    check ++;
    } else {
    break;
    }
    }
    }
    return num;
}
};


int main() {
    Solution sol;
    long long result;
    TIME_IT(result = sol.compute());
    cout << result << endl;
    return 0;
}