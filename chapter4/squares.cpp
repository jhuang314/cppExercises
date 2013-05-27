#include <iostream>
#include <ios>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
     cout << "Enter some integers up to 100: ";
     vector<int> input;
     int x;
     while (cin >> x)
          input.push_back(x);


     for (vector<int>::size_type i = 0; i < input.size(); i++)
     {
          cout << input[i] << setw(6);
          cout << input[i] * input[i] << setw(0) << endl;
     }

     
     return 0;
}
