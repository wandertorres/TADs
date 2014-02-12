/* 
 * File:   QueueGe.cpp
 * Author: wander
 * 
 * Created on 4 de Fevereiro de 2014, 20:24


#include "QueueGe.h"
#include <iostream>

using namespace std;

template <class T>
QueueGe<T>::QueueGe() {
        max = 10;
        front = 0;
        back = -1
        queue = new T[max];
}

template <class T>
QueueGe<T>::QueueGe(int max) {
        this->max = max;
        front = 0;
        back = -1;
        queue = new T[max];
}

template <class T>
QueueGe<T>::~QueueGe() {
    delete[] queue;
}

template <class T>
bool QueueGe<T>::isEmpty() {
    return (front == 0 && back == -1);
}

template <class T>
bool QueueGe<T>::isFull() {
    return back == max;
}

template <class T>
int QueueGe<T>::size() {
    return back;
}

template <class T>
void QueueGe<T>::push(T value) {
    try{
        if(isFull() == true){
            string Overflow = "Pilha cheia...";
        throw (string(Overflow));
        }
        queue[++back] = value;
    }
    catch (string over){
        cout << over << endl;
    }
}

template <class T>
T QueueGe<T>::pop() {
    try{
        if(isEmpty() == true){
            string Underflow = "Pilha vazia...";
        throw (string(Underflow));
        }
        return queue[front++];
    }
    catch (string under){
        cout << under << endl;
    }
}

template <class T>
void QueueGe<T>::clear() {
    back = -1;
    front = -1;
}

template <class T>
void QueueGe<T>::print() {
    T aux[max];
    int i = -1;
    while (isEmpty() == false) {
        aux[++i] = pop();
        cout << aux[i] << endl;
    }
    while(i > -1){
        push(aux[i--]);
    }
}*/