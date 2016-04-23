#include "foverload.hpp"
#include <iostream>


int main(){
    
    int a = 10, b = 20, c = 30;
    
    float f = 15.25;
    
    int r1, r2, r3, r4, r5, r6;
    
    r1 = max(a, b);
    std::cout << r1 << "\n";
    
    r2 = max(&a, b);
    std::cout << r2 << "\n";
    
    r3 = max(a, f);
    std::cout << r3 << "\n";
    
    r4 = max(f, a);
    std::cout << r4 << "\n";
    
    r5 = max(a, b, c);
    std::cout << r5 << "\n";
    
    r6 = max(a, b, f);  // forced type conversion
    std::cout << r6 << "\n";
    
    return 0;
}
