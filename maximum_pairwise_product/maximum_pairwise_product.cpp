#include <iostream>
#include <vector>

std::size_t solution_naive(const std::vector<std::size_t>& numbers);
std::size_t solution_fast(const std::vector<std::size_t>& numbers);

int main(int argc, char** argv)
{
    // Read n
    std::size_t n;
    std::cin >> n;

    // Allocate memory for it
    std::vector<std::size_t> numbers(n);

    // Read numbers
    for (std::size_t i = 0U; i < n; ++i)
    {
        std::cin >> numbers[i];
    }

    // Compute output
    std::size_t output = solution_fast(numbers);

    // Display output
    std::cout << output;

    return 0;
}

std::size_t solution_naive(const std::vector<std::size_t> &numbers)
{
    const std::size_t n = numbers.size();
    std::size_t max_product = 0U;

    for (std::size_t i = 0U; i < n - 1U; ++i)
    {
        for (std::size_t j = i + 1; j < n; ++j)
        {
            max_product = std::max(max_product, numbers[i] * numbers[j]);
        }
    }
    return max_product;
}

std::size_t solution_fast(const std::vector<std::size_t> &numbers)
{
    // Get two largest integers
    std::size_t largest [] = {0U, 0U};

    for(std::size_t i = 0U; i < numbers.size(); ++i)
    {
        if (numbers[i] > largest[0])
        {
            largest[1] = largest[0];
            largest[0] = numbers[i];
        }
        else if (numbers[i] > largest[1])
        {
            largest[1] = numbers[i];
        }
    }

    return largest[0] * largest[1];
}
