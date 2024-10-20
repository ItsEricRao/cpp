#include <iostream>
#include <cmath>
int main(){
    double a, b, c, p, result;
    std::cin >> a >> b >> c;
    p = (a + b + c) / 2.0;
    result = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.1f", result);
}