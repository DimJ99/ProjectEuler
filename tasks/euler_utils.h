#pragma once
#include <chrono>
#include <iostream>
#include <cmath>
#define TIME_IT(code) { \
    auto _s = std::chrono::high_resolution_clock::now(); \
    code; \
    auto _e = std::chrono::high_resolution_clock::now(); \
    std::cout << "Runtime: " << std::chrono::duration<double, std::milli>(_e - _s).count() << " ms\n"; \
}
 
class primechecker {
    public:
    bool prime (long long check) {
    long long sqrt = std::sqrt(check);
    for (int i = 2; i <= sqrt; i++){
    if (check % i == 0) {return false;}
    }
        return true;
    }
};