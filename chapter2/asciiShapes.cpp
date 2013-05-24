#include <iostream>
#include <string>

using namespace std;

int main()
{
     int size;
     cout << "enter square size: ";
     cin >> size;

     // create square
     string row(size, '*');
     for (int i = 0; i < size; i++)
     {
          cout << row << endl;
     }

     int w,h;
     cout << "Enter rectangle height: ";
     cin >> h;
     cout << "Enter rectangle width: ";
     cin >> w;
     string rowRect(w, '*');
     for (int i = 0; i < h; i++)
     {
          cout << rowRect << endl;
     }

     cout << "Enter triangle size: ";
     cin >> size;

     for (int i = 1; i <= size; i++)
     {
          for (int j = 0; j < i; j++)
          {
               cout << "*";
          }
          cout << endl;
     }
     
     
     return 0;
}
