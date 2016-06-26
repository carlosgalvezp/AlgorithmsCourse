#include <iostream>  // std::cin
#include <cstddef>  // std::size_t

std::size_t fibonacciLastDigit(const std::size_t n);

int main(int argc, char** argv)
{
    // Get input
    std::size_t n;
    std::cin >> n;

    // Compute output
    const std::size_t output = fibonacciLastDigit(n);

    // Printout
    std::cout << output;
    return 0;
}

std::size_t fibonacciLastDigit(const std::size_t n)
{
    const std::size_t array_size = n + 1U;
    std::size_t tmp[array_size];

    tmp[0U] = 0U;
    tmp[1U] = 1U;

    for (std::size_t i = 2U; i < array_size; ++i)
    {
        tmp[i] = (tmp[i-1U] + tmp[i-2U]) % 10U;
    }

    return tmp[n];
}
