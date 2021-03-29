#include <string>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> sort_array(vector<int> arr);

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for (int i = 0; i < commands.size(); i++) {
        vector<int> tempArr;
        for (int j = commands[i][0] - 1; j < commands[i][1]; j++) {
            tempArr.push_back(array[j]);
        }
        sort(tempArr.begin(), tempArr.end());
        answer.push_back(tempArr[commands[i][2] - 1]);
    }
    
    return answer;
}