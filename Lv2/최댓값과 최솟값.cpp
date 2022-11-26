#include <string>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>

using namespace std;

string solution(string s)
{
    char* str = (char*)s.c_str();
    
    int max = INT_MIN;
    int min = INT_MAX;
    
    int num;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            ++i;
            continue;
        }
        
        sscanf(str, "%d", &num);
        max = std::max(max, num);
        min = std::min(min, num);
                
        str += i + 1;
        i = 0;
    }
    
    sscanf(str, "%d", &num);
    max = std::max(max, num);
    min = std::min(min, num);

    string answer = to_string(min) + ' ' + to_string(max);
    return answer;
}
