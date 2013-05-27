#include <iostream>
#include <ios>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

void squares1()
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
     
     
}

vector<int>::size_type len(int x)
{
     vector<int>::size_type l = 0;
     while (x / 10 > 0)
     {
          l++;
          x /= 10;
     }
     return l;
}

void squares2()
{
     cout << "Enter some integers: ";
     
     int x;
     vector<int> input;
     vector<int>::size_type maxlen = 0, l;
     while (cin >> x)
     {
          l = len(x);
          if (l > maxlen)
               maxlen = l;
          input.push_back(x);
     }

     for (vector<int>::size_type i = 0; i < input.size(); i++)
     {
          cout << input[i] << string(maxlen + 1 - len(input[i]), ' ')
               << input[i] * input[i] << endl;
     }
     

}

void squares3()
{
     cout << "Enter some doubles: ";
     
     double x;
     vector<double> input;
     vector<double>::size_type maxlen = 0, l;
     while (cin >> x)
     {
//          l = len(x);
          // if (l > maxlen)
          //      maxlen = l;
          input.push_back(x);
     }
     streamsize prec = cout.precision();
     for (vector<double>::size_type i = 0; i < input.size(); i++)
     {
          cout << setprecision(3) << setw(7) << input[i] << " "
               << input[i] * input[i] << setw(0) << setprecision(prec) << endl;
     }
     

}

int main()
{
     squares3();
     return 0;
}
