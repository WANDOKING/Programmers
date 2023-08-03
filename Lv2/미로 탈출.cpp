#include <string>
#include <vector>

#include <queue>
#include <unordered_set>

#include <cassert>

using namespace std;

int solution(vector<string> maps) {
    
    int startX;
    int startY;
    
    for (int i = 0; i < maps.size(); ++i)
    {
        for (int j = 0; j < maps[i].size(); ++j)
        {
            if (maps[i][j] == 'S')
            {
                startX = j;
                startY = i;
                
                goto END;
            }
        }
    }

END:
    
    queue<long long> bfs;
    unordered_set<long long> visited;
    
    bfs.push(startX * 10'000 + startY * 10);
    
    bool bLeverFound = false;
    
    while (!bfs.empty())
    {
        long long frontValue = bfs.front();
        
        bfs.pop();
        
        long long time = frontValue / 10'000'000;
        long long visitX = frontValue % 10'000'000 / 10'000;
        long long visitY = frontValue % 10'000 / 10;
        long long bExitOpen = frontValue % 10;
        
        if (maps[visitY][visitX] == 'L')
        {
            bExitOpen = 1;
            bLeverFound = true;
        }
        
        if (visited.find(visitX * 10'000 + visitY * 10 + bExitOpen) != visited.end())
        {
            continue;
        }
        
        visited.insert(visitX * 10'000 + visitY * 10 + bExitOpen);
        
        if (bLeverFound && bExitOpen == false)
        {
            continue;
        }
        
        if (maps[visitY][visitX] == 'E' && bExitOpen)
        {
            return time;
        }
        
        time++;
        
        if (visitY > 0 && maps[visitY - 1][visitX] != 'X')
        {
            bfs.push(time * 10'000'000 + (visitX) * 10'000 + (visitY - 1) * 10 + bExitOpen);
        }
        
        if (visitY < maps.size() - 1 && maps[visitY + 1][visitX] != 'X')
        {
            bfs.push(time * 10'000'000 + (visitX) * 10'000 + (visitY + 1) * 10 + bExitOpen);
        }
        
        if (visitX > 0 && maps[visitY][visitX - 1] != 'X')
        {
            bfs.push(time * 10'000'000 + (visitX - 1) * 10'000 + (visitY) * 10 + bExitOpen);
        }
        
        if (visitX < maps[0].size() - 1 && maps[visitY][visitX + 1] != 'X')
        {
            bfs.push(time * 10'000'000 + (visitX + 1) * 10'000 + (visitY) * 10 + bExitOpen);
        }
    }

    return -1;
}
