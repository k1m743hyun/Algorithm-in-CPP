#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    for (int i = 0; i < s.length() - 1; i++){
        for (int j = 0; j < s.length(); j++){
            if (s[j] < s[j + 1]){
                char tmp;
                tmp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = tmp;
            }
        }
    }
    
    return s;
}