/* 
 * File:   StackGe.h
 * Author: wander
 *
 * Created on 4 de Fevereiro de 2014, 19:43
 */

#ifndef STACKGE_H
#define	STACKGE_H
using namespace std;

template <class T>
class StackGe {
public:
    StackGe();
    StackGe(int max);
    bool isEmpty();
    bool isFull();
    int size();
    T top();
    void push(T value);
    T pop();
    void clear();
    void print();
    virtual ~StackGe();
private:
    int head, max;
    T *stack;
};

#endif	/* STACKGE_H */

