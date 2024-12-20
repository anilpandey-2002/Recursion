// Print all possible paths from top left to bottom right in matrix
#include <iostream>
#include <vector>
using namespace std;

void printPath(const vector<int> &path)
{
    for (int i : path)
        cout << i << ", ";
    cout << endl;
}

void findPaths(vector<vector<int>> &arr, vector<int> &path, int i, int j, int M, int N)
{
    if (i == M - 1 && j == N - 1)
    {
        path.push_back(arr[i][j]);
        printPath(path);
        path.pop_back();
        return;
    }
    if (i < 0 || i >= M || j < 0 || j >= N)
        return;

    path.push_back(arr[i][j]);
    if (j + 1 < N)
        findPaths(arr, path, i, j + 1, M, N);
    if (i + 1 < M)
        findPaths(arr, path, i + 1, j, M, N);
    path.pop_back();
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> path;
    int M = arr.size(), N = arr[0].size();
    findPaths(arr, path, 0, 0, M, N);
    return 0;
}
