#include <iostream>
#include <vector>
using namespace std; 

class Solution {

public:
long long compute() {
    long long  out = 0;
    long long tog = 0;
    long long one = 1;
    long long two = 0;
    long long tracker =0;
    while ((one < 4000000) && (two < 4000000)){    
    tracker = one + two;
        cout << tracker << " " ;
        cout << one << " " ;
            cout << two << " " << tog <<"\n";
    if (tog % 2) {
    one = tracker;
    } else {
    two = tracker;
    }
    tog ++;
    out = tracker % 2 ? out : out + tracker ;

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