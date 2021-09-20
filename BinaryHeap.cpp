#include "BinaryHeap.h"
BinaryHeap::BinaryHeap(){
    size=0;
    array.push_back(-1);
}
BinaryHeap::~BinaryHeap(){

}
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
int  BinaryHeap::Extract(){

    return 0;
}

void BinaryHeap::show(){
    for (int i = 0; i < size; i++){
        cout<<"i:"<<i<<"array->"<<array.at(i)<<endl;
    }
    
}