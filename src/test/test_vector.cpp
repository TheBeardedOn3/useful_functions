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
    // Contains Element -----------------------------------------
    {
    std::cout << "Contains Element" << std::endl;
    std::vector<int> nums{1,2,3};
    std::cout << UsefulTemplates::contains_element<int>(nums, 1) << std::endl;
    std::cout << UsefulTemplates::contains_element<int>(nums, 4) << std::endl;
    std::cout << std::endl;
    }
    // Recast Vector -----------------------------------------
    {
    std::cout << "Recast Vector" << std::endl;
    std::vector<double> nums{1.5,2.3,3};
    std::vector<int> nums_int(UsefulTemplates::recast_vector<double,int>(nums));
    std::cout << "{   ";
    for (auto & i:nums_int) std::cout << i << "  ";
    std::cout << "}" << std::endl;
    }


}