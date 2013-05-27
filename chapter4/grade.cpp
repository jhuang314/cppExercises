#include "grade.h"
#include "median.h"
#include "Student_info.h"
#include <vector>


// Standard grading policy
double grade(double midterm, double final, double hw)
{
     return 0.2 * midterm + 0.4 * final + 0.4 * hw;
}

double grade(double midterm, double final, const std::vector<double>& hw)
{
     return grade(midterm, final, median(hw));
}

