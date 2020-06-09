#include "Queue.h"
/**********************************************************************/
template<class T>
Queue<T>::Queue()
{
    this->buffer = new T [this->initial_Size];
}
/**********************************************************************/
template <class T>
Queue<T>::Queue(T Value , int size)
{
    this->Value = Value;
    this->initial_Size = size;
    this->buffer = new T [this->initial_Size];
}
/************************************************************************************/
template<class T>
T& Queue<T>::front()
{
    if(isEmpty())
    {
        cout << " Can't Find Value " << endl;
        exit(EXIT_FAILURE);
    }
    else{
        return ((buffer[frontElement]));
    }
}
/*************************************************************************************/
template<class T>
bool Queue<T>::isEmpty()
{
    return(size() == 0);
}
/********************************************************************************/
template <class T>
int Queue<T>::size()
{
    return counter;
}
/*********************************************************************************/
template<class T>
bool Queue<T>::isFull()
{
	return (size() == initial_Size);
}
/************************************************************************************/
template<class T>
void Queue<T>::push(T Value)
{
    if (isFull())
	{
		cout << "Full Queue" << endl;
		exit(EXIT_FAILURE);
	}
	buffer[counter] = Value;
	counter++;
}
/*******************************************************************************/
template<class T>
void Queue<T>::pop()
{
    if (isEmpty())
	{
		cout << "UnderFlow";
		return;
	}
	frontElement = (frontElement + 1) % initial_Size;
	counter--;
}
/******************************************************************************/
template<class T>
Queue<T>::~Queue()
{
    delete buffer;
}
/*----------------------------------------------------------------------------------------*/
