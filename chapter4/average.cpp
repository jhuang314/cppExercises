#include <iostream>
#include <vector>

using namespace std;

double average(const vector<double>& data)
{
     vector<double>::size_type size = data.size();
     double sum = 0;
     for (vector<double>::size_type i = 0; i < size; i++)
     {
          sum += data[i];
     }
     return sum / size;
}

int main()
{
     cout << "Enter some doubles: ";
     double x;
     vector<double> input;

     while (cin >> x)
          input.push_back(x);

     cout << "The average is: " << average(input) << endl;
     return 0;
}
