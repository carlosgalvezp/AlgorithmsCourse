#include <iostream>  // std::cin
#include <cstddef>  // std::size_t

std::size_t gcd(const std::size_t a, const std::size_t b);

int main(int argc, char** argv)
{
    // Get inputs
    std::size_t a, b;
    std::cin >> a;
    std::cin >> b;

    // Compute output
    const std::size_t output = gcd(a, b);

    // Printout
    std::cout << output;
    return 0;
}

std::size_t gcd(const std::size_t a, const std::size_t b)
{
    if (b == 0U)
    {
        return a;
    }
    else
    {
        std::size_t a_prime = a%b;
        return gcd(b, a_prime);
    }
}
