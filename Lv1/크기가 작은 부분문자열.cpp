#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    unsigned long long pNum = stoull(p);
    
    for (int i = 0; i <= t.length() - p.length(); ++i)
    {
        string strNum = "";
        
        for (int j = 0; j < p.length(); ++j)
        {
            strNum += t[i + j];
        }
        
        if (stoull(strNum) <= pNum)
        {
            answer++;
        }
    }
    
    return answer;
}
