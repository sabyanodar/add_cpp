/**
 * @file add.hpp
 * @brief A simple function to add two numbers.
 * @details This function takes two numbers of the same type and returns their sum.
 * @param a The first number.
 * @param b The second number.
 * @return The sum of a and b.
 * @note This function is a template, so it can work with any numeric type (int, float, double, etc.).
 */
template <typename T>
T add(T a, T b) {
    return a + b;
}