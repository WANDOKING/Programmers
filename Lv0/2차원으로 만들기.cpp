#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    
    vector<int> row;
    for (int num : num_list)
    {
        row.push_back(num);
        if (row.size() == n)
        {
            answer.push_back(row);
            row.clear();
        }
    }
    
    return answer;
}
