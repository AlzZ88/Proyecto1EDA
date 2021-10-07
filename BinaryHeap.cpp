#include "BinaryHeap.h"
BinaryHeap::BinaryHeap(){
    size=0;
    array.push_back(-1);
}
BinaryHeap::~BinaryHeap(){

}
void BinaryHeap::Insert(int a){
    /**
     * declaración de variables
    */
    int aux;
    array.push_back(a);
    /**
    * 
    */
    for (int i=1; i<size+1 ; i++){
        /**
        * 
        */
		if(array.at(i)<array.at(i/2)){
            /**
            * 
            */
            aux=array[i];
            array[i]=array[i/2];
            array[i/2]=array[i];
            i=0;
            /**
            * 
            */ 
		}
        /**
        *    
        */
	}
    /**
    * 
    */
    size++;   
}
int  BinaryHeap::Extract(){
    /**
     * declaración de variables
    */
    int aux=array[1];
    int res=array[1];
    /**
     * mover raiz al final
    */
    for (int i = 1; i < size+1; i++){
        /**
        * 
        */
        aux=array[i];
        array[i]=array[i/2];
        array[i/2]=array[i];
        /**
        * 
        */
    }
    /**
     * borrar la raiz
    */
    array.pop_back();
    size--;
    /**
    * comprobar que es heap
    */
    for (int i=0; i<size +1; i++){
        /**
        * 
        */
		if(array.at(i)<array.at(i/2)){
            /**
            * 
            */
            aux=array[i];
            array[i]=array[i/2];
            array[i/2]=array[i];
            i=0;
            /**
            * 
            */ 
		}
	}
    /**
    * 
    */
    return aux;//devolver heap
}

void BinaryHeap::show(){
    /**
    * 
    */
    for (int i = 0; i < size; i++){
        /**
        * 
        */
        cout<<"i:"<<i<<"array->"<<array.at(i)<<endl;
        /**
        * 
        */
    }
    /**
    * 
    */
}