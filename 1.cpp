// Flood Fill Algorithm
#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &img, int x, int y, int prevClr, int newClr)
{
    if (x < 0 || y < 0 || x >= img.size() || y >= img[0].size() || img[x][y] != prevClr)
        return;
    img[x][y] = newClr;
    for (auto [dx, dy] : vector<pair<int, int>>{{-1, 0}, {1, 0}, {0, -1}, {0, 1}})
        dfs(img, x + dx, y + dy, prevClr, newClr);
}

void floodFill(vector<vector<int>> &img, int x, int y, int newClr)
{
    if (img[x][y] != newClr)
        dfs(img, x, y, img[x][y], newClr);
}

int main()
{
    vector<vector<int>> img = {{1, 1, 1}, {1, 1, 0}, {1, 0, 1}};
    floodFill(img, 1, 1, 3);
    for (auto &row : img)
    {
        for (int pixel : row)
            cout << pixel << " ";
        cout << "\n";
    }
    return 0;
}
