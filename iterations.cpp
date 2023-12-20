#include <iostream>
#include <cmath>

double F(double x) {
    return x*(0.1*x-log(x));
}

int main() {
    int amount_of_iterations = 0;
    double x = 1, x0=0, epsilon = pow(10, -6);
    while (fabs(x0-x)>epsilon) {
        amount_of_iterations++;
        x0 = x;
        x = x + F(x);
    }
    std::cout <<"Root: "<< x << "\n" << "Amount of iterations: " << amount_of_iterations;
    return 0;
}

