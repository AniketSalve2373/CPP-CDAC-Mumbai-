#ifndef CONTAINER_H
#define CONTAINER_H

#include <iostream>

namespace LibrarySystem {

template<class T>
class Container {

private:

    T *arr;
    int size;
    int capacity;

public:

    Container(){

        capacity=10;
        size=0;
        arr=new T[capacity];
    }

    void add(T obj){

        arr[size++]=obj;
    }

    T& operator[](int index){

        return arr[index];
    }

    int getSize(){

        return size;
    }

    ~Container(){

        delete[] arr;
    }

};

}

#endif