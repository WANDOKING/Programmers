#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int count[1000] = { 0, };
    
    int mode = -1;
    int maxNumCount = 0;
    bool bHasMultipleMode = false;
    for (int num : array)
    {
        count[num]++;
        if (count[num] == maxNumCount)
        {
            bHasMultipleMode = true;
        }
        else if (count[num] > maxNumCount)
        {
            bHasMultipleMode = false;
            maxNumCount = count[num];
            mode = num;
        }
    }
    
    if (bHasMultipleMode == true)
    {
        return -1;
    }
    else
    {
        return mode;
    }
}
