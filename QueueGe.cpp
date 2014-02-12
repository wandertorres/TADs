/* 
 * File:   QueueGe.cpp
 * Author: wander
 * 
 * Created on 4 de Fevereiro de 2014, 20:24
*/ 

#include "QueueGe.h"
#include <iostream>
using namespace std;

template <class T>
QueueGe<T>::QueueGe() {
        max = 10;
        f = 0;
        b = 0;
        queue = new T[max];
        s = 0;
}

template <class T>
QueueGe<T>::QueueGe(int max) {
        this->max = max;
        f = 0;
        b = 0;
        queue = new T[max];
        s = 0;
}

template <class T>
QueueGe<T>::~QueueGe() {
    delete[] queue;
}

template <class T>
bool QueueGe<T>::isEmpty() {
    return s==0;
}

template <class T>
bool QueueGe<T>::isFull() {
    return s == max;
}

template <class T>
int QueueGe<T>::size() {
    return s;
}

template <class T>
void QueueGe<T>::push(T value) {
    if(f == 0)
        f++;
    if(s == max)
        doubleArray();
    queue[++back] = value;
    s++;
}

template <class T>
T QueueGe<T>::pop() {
    try{
        if(isEmpty() == true){
            string Underflow = "Pilha vazia...";
        throw (string(Underflow));
        }
        s--;
        return queue[front++];
    }
    catch (string under){
        cout << under << endl;
    }
}

template <class T>
void QueueGe<T>::clear() {
    back = 0;
    front = 0;
    s = 0;
}

template <class T>
T QueueGe<T>::print() {
    T aux[s];
    int i = 0;
    while (isEmpty() == false) {
        aux[++i] = pop();
        cout << aux[i] << endl;
    }
    while(i > 0){
        push(aux[i--]);
    }
}

template <class T>
void QueueGe<T>::doubleArray() {
     this->max += this->max;
}