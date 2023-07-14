#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct MineralInfo
{
    int StoneFatigue;
    int IronFatigue;
    int DiamondFatigue;
};

MineralInfo g_needFatigue[10];

int solution(vector<int> picks, vector<string> minerals) {
    int answer = 0;
    
    int diaPickCount = picks[0];
    int ironPickCount = picks[1];
    int stonePickCount = picks[2];
    
    int totalPickCount = diaPickCount + stonePickCount + ironPickCount;
    
    int needPickCount = minerals.size() / 5;
    
    if (minerals.size() % 5 != 0)
    {
        needPickCount++;
    }
    
    int usePickCount = totalPickCount > needPickCount ? needPickCount : totalPickCount;
    
    for (int i = 0; i < usePickCount; ++i)
    {        
        for (int j = 0; j < 5; ++j)
        {
            if (minerals.size() <= i * 5 + j)
            {
                goto END;
            }
            
            if (minerals[i * 5 + j] == "stone")
            {
                g_needFatigue[i].StoneFatigue += 1;
                g_needFatigue[i].IronFatigue += 1;
                g_needFatigue[i].DiamondFatigue += 1;
            }
            else if(minerals[i * 5 + j] == "iron")
            {
                g_needFatigue[i].StoneFatigue += 5;
                g_needFatigue[i].IronFatigue += 1;
                g_needFatigue[i].DiamondFatigue += 1;
            }
            else
            {
                g_needFatigue[i].StoneFatigue += 25;
                g_needFatigue[i].IronFatigue += 5;
                g_needFatigue[i].DiamondFatigue += 1;
            }
        }
    }
    
    END:
    
    std::sort(g_needFatigue, g_needFatigue + usePickCount, [](const MineralInfo& a, const MineralInfo& b) { return a.StoneFatigue > b.StoneFatigue; });
    
    for (int i = 0; i < usePickCount; ++i)
    {
        if (diaPickCount > 0)
        {
            answer += g_needFatigue[i].DiamondFatigue;
            diaPickCount--;
        }
        else if (ironPickCount > 0)
        {
            answer += g_needFatigue[i].IronFatigue;
            ironPickCount--;
        }
        else
        {
            answer += g_needFatigue[i].StoneFatigue;
            stonePickCount--;
        }
    }
    
    return answer;
}
