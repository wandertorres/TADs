/* 
 * File:   QueueGe.h
 * Author: wander
 *
 * Created on 4 de Fevereiro de 2014, 20:24
*/

#ifndef QUEUEGE_H
#define	QUEUEGE_H
using namespace std;

template <class T>
class QueueGe {
public:
    QueueGe();
    QueueGe(int max);
    bool isEmpty();
    bool isFull();
    int size();
    int front();
    int back();
    void push(T value);
    T pop();
    void clear();
    T print();
    virtual ~QueueGe();
private:
    void doubleArray();
    int f, b, max, s;
    T *queue;
};

#endif	/* QUEUEGE_H */