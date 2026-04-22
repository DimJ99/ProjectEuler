#pragma once
#include <chrono>
#include <iostream>
 
#define TIME_IT(code) { \
    auto _s = std::chrono::high_resolution_clock::now(); \
    code; \
    auto _e = std::chrono::high_resolution_clock::now(); \
    std::cout << "Runtime: " << std::chrono::duration<double, std::milli>(_e - _s).count() << " ms\n"; \
}
 