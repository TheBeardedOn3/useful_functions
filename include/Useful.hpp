/*
   All the useful functions
   Useful.hpp
   Purpose: Assort functions useful to different projects

   @author Jared Beard
   @version 1.0 7/10/21
 */

#ifndef USEFUL_FUNCTIONS_HPP
#define USEFUL_FUNCTIONS_HPP

/*************** MATH *******************/
#include <cmath>
/*************** Vector *******************/
#include <algorithm>
#include <vector>


class Useful
{

public:
    Useful(){};
    /*************** MATH *******************/
    /** Based on Paulo Silva MATHWORKS forum response (12 Jun 2011):
     *  <https://www.mathworks.com/matlabcentral/answers/9330-changing-the-atan-function-so-that-it-ranges-from-0-to-2-pi>
     * SEE ALSO: WIKIPEDIA atan2: <https://en.wikipedia.org/wiki/Atan2> */

    double wrap_atan(double y, double x);
    double wrap_atan2(double y, double x);

    /*************** Vector *******************/
};

#endif