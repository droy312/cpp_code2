#include <bits/stdc++.h>

using namespace std;

bool isBoomerang(vector<vector<int>>& points) {
    int x1 = points[0][0];
    int y1 = points[0][1];
    int x2 = points[1][0];
    int y2 = points[1][1];
    int x3 = points[2][0];
    int y3 = points[2][1];
    
    float area = 0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
        
    return area != 0;
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
