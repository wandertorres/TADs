/* 
 * File:   MinMaxHeap.h
 * Author: wander
 *
 * Created on 8 de Fevereiro de 2014, 02:07
 */

#ifndef MINMAXHEAP_H
#define	MINMAXHEAP_H
using namespace std;

template <class T>
class MinMaxHeap {
public:
    MinMaxHeap();
    MinMaxHeap(int max);
    bool isEmpty();
    int size();
    void insert(T element);
    void deleteMin();
    void deleteMax();
    virtual ~MinMaxHeap();
private:
    void swap(T elementA, T elementB);
    int level(T element);
    void up_Max(int key);
    void up_Min(int key);
    void down_Max(int key);
    void down_Min(int key);
    void percolateUp(int key);
    void percolateDown(int key);
    T *queue;
    int n, i, max;
};

#endif	/* MINMAXHEAP_H */

