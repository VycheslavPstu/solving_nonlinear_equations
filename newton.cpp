#include <iostream>
#include <cmath>

double F(double x) {
    return x*(0.1*x-log(x));
}

double dF (double x) {
    return 0.2*x-log(x)-1;
}

int main() {
    int amount_of_iterations;
    double A = 1, B = 2, epsilon = pow(10, -6);
    while (fabs(B-A)>epsilon) {
        amount_of_iterations++;
        B = A;
        A = B - F(A) / dF(A);
    }
    std::cout <<"Root: "<< A << "\n" << "Amount of iterations: " << amount_of_iterations;
    return 0;
}


