#include <iostream>  // std::cin
#include <cstddef>  // std::size_t

std::size_t fibonacci(const std::size_t n);

int main(int argc, char** argv)
{
    // Get input
    std::size_t n;
    std::cin >> n;

    // Compute output
    const std::size_t output = fibonacci(n);

    // Printout
    std::cout << output;
    return 0;
}

std::size_t fibonacci(const std::size_t n)
{
    const std::size_t array_size = n + 1U;
    std::size_t partial_results[array_size];

    partial_results[0U] = 0U;
    partial_results[1U] = 1U;

    for (std::size_t i = 2; i < array_size; ++i)
    {
        partial_results[i] = partial_results[i-1U] + partial_results[i-2U];
    }

    return partial_results[n];
}
