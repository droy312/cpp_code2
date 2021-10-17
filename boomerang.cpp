#include <bits/stdc++.h>

using namespace std;

bool isBoomerang(vector<vector<int>>& points) {
    int dx1 = (points[1][0] - points[0][0]);
    int dy1 = (points[1][1] - points[0][1]);
    int dx2 = (points[2][0] - points[1][0]);
    int dy2 = (points[2][1] - points[1][1]);
    return (dx1 * dy2) != (dy1 * dx2);
}

int main() {
    vector<vector<int>> points;
    vector<int> p1, p2, p3;
    p1.push_back(1);
    p1.push_back(1);
    p2.push_back(2);
    p2.push_back(3);
    p3.push_back(3);
    p3.push_back(2);
    points.push_back(p1);
    points.push_back(p2);
    points.push_back(p3);
    
    cout << isBoomerang(points);

    return 0;
}
