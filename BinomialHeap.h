#include <bits/stdc++.h>
using namespace std;
class BinomialHeap{
private:
    vector<int> array;
    int size;
public:
    BinomialHeap();
    ~BinomialHeap();
    void Insert(int a);
    int Extract();
    void show();
};