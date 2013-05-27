#include "Student_info.h"
#include "grade.h"

using namespace std;

bool compare(const Student_info& s1, const Student_info& s2)
{
     return s1.name < s2.name;
}

istream& read(istream& is, Student_info& s)
{
     if (is >> s.name)
     {
          double midterm, final;
          is >> midterm >> final;
          std::vector<double> homework;
          read_hw(is, homework);
          s.grade = grade(midterm, final, homework);
     }
     return is;
}

istream& read_hw(istream& in, vector<double>& hw)
{
     if (in)
     {
          hw.clear();
          
          double x;
          while (in >> x)
               hw.push_back(x);
          
          in.clear();
     }
     return in;
}
