#include <iostream>
#include <string>

using std::cin;
using std::endl;
using std::cout;
using std::string;

int main()
{
     cout << "Please ener your first name: ";

     string name;
     cin >> name;

     const string greeting = "Hello, " + name + "!";
     const int padR = 1;
     const int padC = 1;
     const int rows = padR * 2 + 3;

     const string::size_type cols = greeting.size() + padC * 2 + 2;

     cout << endl;

     for (int r = 0; r != rows; ++r)
     {
          string::size_type c = 0;

          while (c != cols) {
               if (r == padR + 1 && c == padC + 1) {
                    cout << greeting;
                    c += greeting.size();
               } else {
                    if (r == 0 || r == rows - 1 ||
                        c == 0 || c == cols - 1)
                         cout << "*";
                    else
                         cout << " ";
                    ++c;
               }
          }

          cout << endl;
     }
     return 0;
}
