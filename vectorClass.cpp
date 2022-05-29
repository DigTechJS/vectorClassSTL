#include <iostream>
using namespace std;
// methods to be made
// 1.front()
// 2.back()
// 3.size()
// 4.capacity()
class Vector{
int * arr;
int cs;//current size
int ms;//maximum element that it can store
public:
Vector(int max_size=1){
    cs=0;
    ms=max_size;
    arr= new int[ms];
}
void push_back(int d){
    // two cases
    if (cs==ms)
    {
        // create a new array and delete the old one, double the capacity
        int *oldArr=arr;
        ms=2*ms;
        arr=new int[ms];
        // copy the elements
        for (int i = 0; i < cs; i++)
        {
            arr[i]=oldArr[i];
        }
        delete[] oldArr;
        
        
    }
    arr[cs]=d;
    cs++;
}

void pop_back(){
    if (cs>=0)
    {
        cs--;
    }
}

bool isEmpty(){
    return cs==0;
}
    

    // front,back,At(i)
int front(){
    return arr[0];
}

int back(){
    return arr[cs-1];
}

int at(int i){
    return arr[i];
}

int size(){
    return cs;
}
int capacity(){
    return ms;
}

// operator overloading
int operator[](int i){
    return arr[i];
}


~Vector(){

delete[]arr;
}


};

int main()
{
    Vector v(5);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.pop_back();


    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    cout<<v.at(2)<<endl;

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<",";
    }
    cout<<"\n";
    
    return 0;
}