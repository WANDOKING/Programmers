#include <string>
#include <vector>
#include <unordered_set>
#include <stack>

using namespace std;

int solution(int n, vector<vector<int>> computers) {
    unordered_set<int> visited;
    int answer = 0;
    
    for (int i = 0; i < n; ++i)
    {
        if (visited.find(i) != visited.end())
        {
            continue;
        }
        
        answer++;
        
        stack<int> s;
        s.push(i);
        
        while (s.empty() == false)
        {
            int visit = s.top();
            s.pop();
            
            if (visited.find(visit) != visited.end())
            {
                continue;
            }
            
            visited.insert(visit);
            
            for (int j = 0; j < n; ++j)
            {
                if (visit == j)
                {
                    continue;
                }
                
                if (computers[visit][j] == 1)
                {
                    s.push(j);
                }
            }
        }
    }
    
    return answer;
}
