#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

struct point
{
    int x, y;
    int step;
};
// 骑士按照日字形走
int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {1, -1, 2, -2, 2, -2, 1, -1};
// 访问地图
bool map[10][10];

int sx, sy, ex, ey, tx, ty, L;

int bfs()
{
    if (sx == ex && sy == ey)
        return 0;
    memset(map, false, sizeof(map)); // include in string.h
    queue<point> Q;
    point start, node;
    start.x = sx;
    start.y = sy;
    start.step = 0;
    Q.push(start); // 初始状态入队
    int step, x, y;
    while (!Q.empty())
    {
        start = Q.front(), Q.pop();
        x = start.x;
        y = start.y;
        step = start.step;
        for (int i = 0; i < 8; i++)
        {
            tx = x + dx[i];
            ty = y + dy[i];
            if (tx == ex && ty == ey)
                return step + 1;
            if (tx >= 0 && tx < L && ty >= 0 && ty < L && !map[tx][ty])
            { // 判断所访问的节点是否合法、越界等
                node.x = tx;
                node.y = ty;
                node.step = step + 1; // 此处的step是本点的step 所以临界点的step需要+1
                Q.push(node);         // 八个方向所有的合法点都应该入队
                map[tx][ty] = true;   // 讲访问过的节点设置为已访问
            }
        }
    }
}