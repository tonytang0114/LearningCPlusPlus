#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include <functional>

//hash symbol preprocessor (run before compiling code)
#include <iterator>

// #include "Animal.h"

// Definition
// #define PI 3.14159
// #define AREA_CIRCLE(radius) (PI * (std::pow(radius,2)))

// Template Functions
template<typename T>
void Times2(T val){
    std::cout << val << " * 2 = " << val * 2 << "\n";
}
template<typename T>
T Add(T val, T val2){
    return val + val2;
}

template<typename T>
T Max(T val, T Val2){
    return (val < val2) ? val2 : val;
}
int main(){
    // Animal spot = Animal();
    // spot.name = "Spot";
    // std::cout << "The Animal is named " 
    //     << spot.name <<"\n";

    // std::cout << "Circle Area : " << AREA_CIRCLE(5) << "\n";

    // Template
    Times2(5);
    Times2(5.3);

    return 0;
}