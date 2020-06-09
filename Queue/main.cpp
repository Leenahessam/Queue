#include<iostream>
#include<bits/stdc++.h>
#include"Queue.h"
using namespace std;

int main()
{
    Queue<int>X;
    X.push(1);
    X.push(2);
    X.push(3);
    X.push(4);
    X.push(5);
    X.push(6);
    X.pop();
    cout << X.front() << endl;
    X.pop();
    cout << X.front() << endl;
    X.pop();
    cout << X.front() << endl;

    return 0;
}
