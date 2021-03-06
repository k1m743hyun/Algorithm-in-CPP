#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    int dom[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string dow[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
        
    int sum = 0;
    for (int i = 0; i < a - 1; i++) {
        sum += dom[i];
    }
    sum += b;

    return dow[(sum + 4) % 7];
}