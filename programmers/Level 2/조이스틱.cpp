#include <string>
#include <vector>

using namespace std;

int solution(string name) {
    int len = name.length();
    int min_dist = len - 1;
    int answer = 0;
    
    for (int i = 0; i < len; i++) {
        answer += min(name[i] - 'A', 'Z' - name[i] + 1);
        int next = i + 1;
        while (next < len && name[next] == 'A') {
            next++;
        }
        
        min_dist = min(min_dist, (2 * i) + (len - next));
    }
    
    answer += min_dist;

    return answer;
}