#include <iostream>
#include <iomanip>
#include <ios>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
     cout << "Please enter data (as int): ";
     vector<int> data;
     
     int x;
     while(cin >> x)
          data.push_back(x);
     
     sort(data.begin(), data.end());
     
     typedef vector<int>::size_type vec_sz;
     vec_sz size = data.size();
     vec_sz mid = size / 2;
     vec_sz median = size % 2 == 0 ? (data[mid] + data[mid-1]) / 2 
          : data[mid];
     vec_sz lowerQuartile, upperQuartile;
     
     lowerQuartile = mid % 2 == 0 ? (data[mid / 2] + data[mid / 2 - 1]) / 2 : data[mid / 2];
     upperQuartile = mid % 2 == 0 ? (data[mid / 2 + mid] + data[mid / 2 - 1 + mid]) / 2 : data[mid / 2 + mid];

     streamsize prec = cout.precision();
     cout << "Lower Quartile: " << setprecision(3) << lowerQuartile << endl
          << "Upper Quartile: " << upperQuartile << setprecision(prec) << endl;

     return 0;
}
