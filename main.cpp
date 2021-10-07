#include <bits/stdc++.h>
#include "BinaryHeap.cpp"
using namespace std;
int main(){
    /**
    * statements
    */
    BinaryHeap *bh=new BinaryHeap();
    int rep=100;
    /**
     * 
    */
    for (int i = 0; i < 10; i++){
        bh->Insert(i);
        cout<<"i:"<<i<<endl;
        /**
        * 
        */
    }
    /**
     * 
    */
    //bh->show();
    /**
     * 
    */
    clock_t start = clock();
    for (int i = 0; i < rep; i++){
        //bh->Insert(i);
        /**
        * 
        */
    }
    /**
     * 
    */
    double duracion= (double)((double) (clock()-start)/CLOCKS_PER_SEC/rep);
    /**
     * 
    */
    cout<<"Insert;"<<duracion<<endl;
    /**
     * 
    */
    return 0;
}