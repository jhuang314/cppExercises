#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct word
{
     string word;
     unsigned int count;
};

bool contains(const vector<word>& data, string w, vector<word>::size_type& index)
{
     for (vector<word>::size_type i = 0; i < data.size(); i++)
     {
          if (data[i].word == w)
          {
               index = i;
               return true;
          }
     }
     return false;
}

istream& read(istream& in, vector<word>& data, string::size_type& maxlen)
{
     if (in)
     {
          data.clear();
          string x;
          word w;
          vector<word>::size_type index;
          
          while (in >> x)
          {
               if (contains(data, x, index))
               {
                    data[index].count++;
               }
               else
               {
                    w.word = x;
                    w.count = 1;
                    data.push_back(w);
                    maxlen = max(maxlen, x.size());
               }
          }
          in.clear();
     }
     return in;
}

int main()
{
     cout << "Enter words: ";
     vector<word> data;
     string::size_type maxlen = 0;
     read(cin, data, maxlen);
     cout << "You entered " << data.size() << " words." << endl;
     for (vector<word>::size_type i = 0; i < data.size(); i++)
     {
          cout << data[i].word << string(maxlen - data[i].word.size() + 1, ' ') << data[i].count << endl;
     }
     return 0;
}
