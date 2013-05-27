#include "Student_info.h"

using namespace std;

bool compare(const Student_info& s1, const Student_info& s2)
{
     return s1.name < s2.name;
}

istream& read(istream& is, Student_info& s)
{
     is >> s.name >> s.midterm >> s.final;

     read_hw(is, s.homework);
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
