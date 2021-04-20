#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int idx = 0;
    for (int i = 0; seoul.size(); i++) {
        if (seoul[i] == "Kim") {
            break;
        }
        idx++;
    }
    
    return "김서방은 "+ to_string(idx) +"에 있다";
}