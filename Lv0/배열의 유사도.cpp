#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    set<string> s;
    
    for (const string& str : s1)
    {
        s.insert(str);
    }
    
    for (const string& str : s2)
    {
        s.insert(str);
    }
    
    return s1.size() + s2.size() - s.size();
}
