#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    int pc = 0;
    int yc = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'p' || s[i] == 'P') {
            pc++;
        }
        else if (s[i] == 'y' || s[i] == 'Y') {
            yc++;
        }
    }

    return pc == yc ? true : false;
}