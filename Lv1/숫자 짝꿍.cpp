#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
    int xCount[10] = { 0, };
    int yCount[10] = { 0, };
    int commonCount[10] = { 0, };
    
    for (char ch : X)
    {
        xCount[ch - '0']++;
    }
    
    for (char ch : Y)
    {
        yCount[ch - '0']++;
    }
    
    for (int i = 0; i < 10; ++i)
    {
        commonCount[i] = std::min(xCount[i], yCount[i]);
    }
    
    string result = "";
    for (int i = 9; i >= 1; --i)
    {   
        for (int j = 0; j < commonCount[i]; ++j)
        {
            result += ('0' + i);
        }
    }
    
    if (result == "")
    {
        if (commonCount[0] == 0)
        {
            result = "-1";
        }
        else
        {
            result = "0";
        }
    }
    else
    {
        for (int i = 0; i < commonCount[0]; ++i)
        {
            result += '0';
        }
    }
    
    return result;
}
