#include <iostream>
#include <vector>

#include "include/UsefulTemplates.hpp"

// template <typename T>
// bool Useful::contains_element(const std::vector<T>& _vec, T _element)
// {
//     return std::find(_vec.begin(), _vec.end(), _element) != _vec.end();
// }

int main(int argc, char** argv)
{
    // Wrap ATAN -----------------------------------------
    {
    std::cout << "Contains Element" << std::endl;
    std::vector<int> nums{1,2,3};
    std::cout << UsefulTemplates::contains_element<int>(nums, 1) << std::endl;
    std::cout << UsefulTemplates::contains_element<int>(nums, 4) << std::endl;
    std::cout << std::endl;
    }
    // Recast Vector -----------------------------------------


}