/* 
 * File:   MinMaxHeap.cpp
 * Author: wander
 * 
 * Created on 8 de Fevereiro de 2014, 02:07
 */
#include <math.h>
#include <iostream>
#include "MinMaxHeap.h"
using namespace std;

template <class T>
MinMaxHeap<T>::MinMaxHeap() {
    max = 15;
    queue = new T[max];
    n = 0;
}

template <class T>
MinMaxHeap<T>::MinMaxHeap(int max) {
    this->max = max;
    queue = new T[max];
    n = 0;
}

template <class T>
void MinMaxHeap<T>::swap(T elementA, T elementB) {
    T aux = elementA;
    elementA = elementB;
    elementB = aux;
}

template <class T>
int MinMaxHeap<T>::level(T element) {
    if(((log(element)+1)%2) != 0)
        return 1;
    return 0;
}

template <class T>
void MinMaxHeap<T>::up_Max(int key) {
    if(key/4 >= 1){
        if(queue[key] > queue[key/4]){
            swap(queue[key], queue[key/4]);
            up_Min(key);
        }
    }
}

template <class T>
void MinMaxHeap<T>::up_Min(int key) {
    if(key/4 >= 1){
        if(queue[key] < queue[key/4]){
            swap(queue[key], queue[key/4]);
            up_Min(key);
        }
    }
}

template <class T>
void MinMaxHeap<T>::down_Max(int key) {
    
}

template <class T>
void MinMaxHeap<T>::down_Min(int key) {
    
}

template <class T>
void MinMaxHeap<T>::percolateUp(int key) {
    int dad = (key/2);
    if(level(queue[key]) == 1){
        if(dad >= 1 && queue[key] > queue[dad]){
            swap(queue[key], queue[dad]);
            up_Max(dad);
        }else{
            up_Min(key);
        }
    }else{
        if(dad >= 1 && queue[key] < queue[dad]){
            swap(queue[key], queue[dad]);
            up_Min(dad);
        }else{
            up_Max(key);
        }
    }
}

template <class T>
void MinMaxHeap<T>::percolateDown(int key) {
    if(level(queue[key]) == 1)
        down_Min(key);
    down_Max(key);
}

template <class T>
bool MinMaxHeap<T>::isEmpty() {
    return (n == 0);
}

template <class T>
int MinMaxHeap<T>::size() {
    return n;
}

template <class T>
void MinMaxHeap<T>::insert(T element) {
    //adicionar excessão
    queue[++n] = element;
    percolateUp(n);
}

template <class T>
void MinMaxHeap<T>::deleteMin() {
    
}

template <class T>
void MinMaxHeap<T>::deleteMax() {
    
}

template <class T>
MinMaxHeap<T>::~MinMaxHeap() {
}

