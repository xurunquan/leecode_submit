#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

struct point
{
    int x, y;
    int step;
};
// ��ʿ������������
int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {1, -1, 2, -2, 2, -2, 1, -1};
// ���ʵ�ͼ
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
    Q.push(start); // ��ʼ״̬���
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
            { // �ж������ʵĽڵ��Ƿ�Ϸ���Խ���
                node.x = tx;
                node.y = ty;
                node.step = step + 1; // �˴���step�Ǳ����step �����ٽ���step��Ҫ+1
                Q.push(node);         // �˸��������еĺϷ��㶼Ӧ�����
                map[tx][ty] = true;   // �����ʹ��Ľڵ�����Ϊ�ѷ���
            }
        }
    }
}