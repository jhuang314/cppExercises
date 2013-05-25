#include <iostream>
#include <string>

using namespace std;

int main()
{
     cout << "Enter strings: ";
     string input, shortest, longest;
     if(!(cin >> shortest))
     {
          cout << endl << "You did not enter any string!" << endl;
          return 1;
     }
     longest = shortest;
     while (cin >> input)
     {
          if (input.size() > longest.size())
               longest = input;
          if (input.size() < shortest.size())
               shortest = input;
     }

     cout << "Longest string is: " << longest << endl
          << "Shortest string is: " << shortest << endl;

     return 0;
}
