
#include <iostream>
#include <iterator>
#include <map>
#include <cstdlib>

using namespace std;
int main()
{
    int n;
    string line;
    getline(cin, line);
    n = atoi(line.c_str());

    map<string, long long> queries;

    int i = 0;
    string input;
    int posSpace;
    while (i < n)
    {
        getline(cin, input);
        posSpace = input.find(' ', 0);
        queries[input.substr(0, posSpace)] = atoll((input.substr(posSpace, input.length() + 1)).c_str());
        i++;
    }
    i = 0;
    auto it = queries.find("a");
    while (i < n)
    {
        getline(cin, input);
        it = queries.find(input);
        if (it == queries.end())
        {
            cout << "Not found" << endl;
        }
        else
        {
            cout << it->first << "=" << it->second << endl;
        }
        i++;
    }

    return 0;
}