#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    vector<int> student(n, 0);
    
    for (int i = 0; i < lost.size(); i++) {
        student[lost[i] - 1]--;
    }
    
    for (int i = 0; i < reserve.size(); i++) {
        student[reserve[i] - 1]++;
    }
    
    for (int i = 0; i < student.size(); i++) {
        if (student[i] < 0) {
            if (i != 0 && student[i - 1] > 0) {
                    student[i - 1]--;
                    student[i]++;
                }
                
                else if (i != student.size() - 1 && student[i + 1] > 0) {
                    student[i]++;
                    student[i + 1]--;
                }
        }
    }
    
    int answer = 0;
    for (int s : student) {
        if (s >= 0) {
            answer++;
        }
    }
        
    return answer;
}