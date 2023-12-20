#include <iostream>
#include <cmath>


double F(double x)
{
    return x*(0.1*x-log(x));
}

int main()
{
    int amount_of_iterations = 0;
    double A = 1, B = 2, c, epsilon = pow(10, -6);
    while (B - A > epsilon){
        amount_of_iterations++;
        c = (A + B) / 2;
        if (F(B) * F(c) < 0)
            A = c;
        else
            B = c;
    }
    std::cout << "Root: " << (A + B) / 2 << "\n" << "Amount of iterations: " << amount_of_iterations;
    return 0;
}

