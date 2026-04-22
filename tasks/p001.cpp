#include <iostream>
#include <vector>
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
    auto result = sol.compute(); 
    cout << result << endl;
    return 0;
}