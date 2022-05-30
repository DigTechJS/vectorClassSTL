// methods to be made
// 1.front()
// 2.back()
// 3.size()
// 4.capacity()

// Usage of templates

template<typename T>
class Vector{
T * arr;
int cs;//current size
int ms;//maximum element that it can store
public:
Vector(int max_size=1){
    cs=0;
    ms=max_size;
    arr= new T[ms];
}
void push_back(const T d){
    // two cases
    if (cs==ms)
    {
        // create a new array and delete the old one, double the capacity
        T *oldArr=arr;
        ms=2*ms;
        arr=new T[ms];
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
T front(){
    return arr[0];
}

T back(){
    return arr[cs-1];
}

T at(int i){
    return arr[i];
}

int size(){
    return cs;
}
int capacity(){
    return ms;
}

// operator overloading
T operator[](const int i){
    return arr[i];
}


~Vector(){

delete[]arr;
}


};
