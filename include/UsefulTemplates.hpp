/*
   All the useful functions
   Useful.hpp
   Purpose: Assort functions useful to different projects

   @author Jared Beard
   @version 1.0 7/10/21
 */

#ifndef USEFUL_TEMPLATE_FUNCTIONS_HPP
#define USEFUL_TEMPLATE_FUNCTIONS_HPP

#include <algorithm>
#include <vector>

class UsefulTemplates
{

public:
  UsefulTemplates(){};
  /*************** MATH *******************/

  /*************** Vector *******************/

  /** brief */
  template <typename T>
  static bool contains_element(const std::vector<T> &_vec, T _element)
  {
    return std::find(_vec.begin(), _vec.end(), _element) != _vec.end();
  }

  /** brief */
  template <typename T, typename U>
  static std::vector<U> recast_vector(const std::vector<T> &_vec)
  {
    return std::vector<U>(_vec.begin(), _vec.end());
  }
};

#endif