#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> sorted(emergency);
    sort(sorted.rbegin(), sorted.rend());
    
    vector<int> answer;
    
    unordered_map<int, int> order;
    
    for (int i = 0; i < sorted.size(); ++i)
    {
        order.insert(make_pair(sorted[i], i + 1));
    }
    
    for (int num : emergency)
    {
        answer.push_back(order.find(num)->second);
    }
    
    return answer;
}
