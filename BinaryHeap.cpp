#include "BinaryHeap.h"
BinaryHeap::BinaryHeap(){
    size=0;
    array.push_back(-1);
}
BinaryHeap::~BinaryHeap(){

}
void BinaryHeap::Insert(int a){
    /*
    size++;
    int i=size-1;
    array[i]=a;
    while(i!=0 && array[(i-1)/2] > array[i] ){
        int temp=array[i];
        array[i]=array[(i-1)/2];
        array[(i-1)/2]=temp;
        i=(i-1)/2;
    }
    */
}
int  BinaryHeap::Extract(){
    return 0;
}
void BinaryHeap::show(){
    for (int i = 0; i < size; i++){
        cout<<"i:"<<i<<"array->"<<array.at(i)<<endl;
    }
    
}