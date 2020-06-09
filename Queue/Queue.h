#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include<bits/stdc++.h>
////////////////////////////////////////
using namespace std;
////////////////////////////////////////
template<class T>
class Queue
{
private:
     int initial_Size = 1000;
protected:
    T Value;
    int frontElement = 0;
    int counter = 0;
    T * buffer;
public:
    Queue();
    Queue(T, int);
    T& front();
    int size();
    bool isEmpty();
    bool isFull();
    void pop();
    void push(T);
    void Display();
    virtual ~Queue();
};
#endif // QUEUE_H
template class Queue<int>;
template class Queue<float>;
template class Queue<long>;
template class Queue<long long>;
template class Queue<short>;
template class Queue<string>;
template class Queue<char>;
