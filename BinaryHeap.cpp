#include "BinaryHeap.h"
BinaryHeap::BinaryHeap(){
    size=0;
    array.push_back(-1);
}
BinaryHeap::~BinaryHeap(){}
int BinaryHeap::getSize(){return size;}
void BinaryHeap::Insert(int a){
    int aux;
    array.push_back(a);
    for (int i=0; i<size ; i++){
		if(array.at(i)<array.at(i/2)){
            aux=array[i];
            array[i]=array[i/2];
            array[i/2]=array[i];
            i=0; 
		}
	}
    size++;   
}
bool BinaryHeap::Search(int a){
    for(int i=0; i<size; ++i)
        if(array[i]==a)return true;
    return false;
}
void BinaryHeap::Union(BinaryHeap b){
    int bsize = b.getSize();
    for(int i=0; i<bsize; ++i)
        this->Insert(b.array[i]);
}
void BinaryHeap::show(){
    for (int i = 0; i < size; i++){
        cout<<"i:"<<i<<"array->"<<array.at(i)<<endl;
    }
    
}
