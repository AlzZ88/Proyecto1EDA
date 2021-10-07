#include <bits/stdc++.h>
using namespace std;
class BinaryHeap{
private:
    vector<int> array;
    int size;
public:
    BinaryHeap();
    ~BinaryHeap();
    void Insert(int a);
    bool Search(int a);
    int Extract();
    void Join(BinaryHeap b);
    int getSize();
    void show();
};
