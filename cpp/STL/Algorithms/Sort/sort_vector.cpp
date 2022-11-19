#include<iostream>
#include<vector>

using namespace std;

class Coord {
public:
    int x;
    int y;

    Coord(int x, int y) {
        this->x = x;
        this->y = y;
    }
};

void show(vector<Coord> v) {
    for(auto ele : v) {
        cout << "(" << ele.x << ", " << ele.y << ") ";
    }
    cout << endl;
}

bool compareCoord(Coord c1, Coord c2) {
    if(c1.x < c1.y)
        return true;
    else if(c1.x > c2.x || c1.y > c2.y)
        return false;
    return true;
}

int main() {
    vector<Coord> v;
    v.push_back(Coord(3, 5));
    v.push_back(Coord(13, 6));
    v.push_back(Coord(2, 15));
    v.push_back(Coord(2, 5));
    v.push_back(Coord(1, 15));
    show(v);
    sort(v.begin(), v.end(), compareCoord);
    show(v);
}
