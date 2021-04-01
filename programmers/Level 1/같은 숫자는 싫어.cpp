#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            answer.push_back(arr[i]);
        }
    }
    
    if (answer.size() > 1 && answer[answer.size() - 1] != arr[arr.size() - 1]) {
        answer.push_back(arr[arr.size() - 1]);
    }
    else {
        answer.push_back(arr[arr.size() - 1]);
    }

    return answer;
}