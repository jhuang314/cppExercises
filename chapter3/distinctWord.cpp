#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
     cout << "Enter words: ";
     string input;
     vector<string> data;
     while (cin >> input)
          if (!(find(data.begin(), data.end(), input) != data.end()))
               data.push_back(input);

     cout << "Number of distinct words: " << data.size() << endl;
     
     return 0;
}
