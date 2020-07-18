#include <iostream>
using namespace std;

class MyVector
{
    int* vec;
    int size;
    int capacity;
public:
    MyVector()
    {
        size = 0;
        capacity = 1;
        vec= new int[capacity];
        cout << "Enter elements of vector(Ctrl + Z for exit) : ";
     }
    MyVector(const Myvector& v)
    {
        size = v.size;
        capacity = v.capacity;
        vec = new int[capacity];
        for( int i{0}; i=v.size; i++)
        {
            vec[i]=v.vec[i];
        }
    }
    ~MyVector()
    {
        delete[] vec;
    }
    void PushBack(int val)
    {
        size++;

        if(capacity<size)
            vec=Resize();

        vec[size-1]=val;
        
        
    }
    int* Resize()
    {
        int temp{0};

        int* cpy_vec=new int[capacity];

        for(int i{0};i<size-1;i++)
        {
            if ( size > i)
            {
                temp = vec[i];
                cpy_vec[i]= temp;
            }
            else
            {
                cpy_vec[i]=0;
            }
            
            delete[] vec;
        }
        return cpy_vec;
    }
    friend istream& operator>>(istream& is, Myvector& v)
    {
        int val;
        while(cin >> val)
            v.PushBack(val);

        return is;
    }
    friend ostream& operator<<(ostream& os, Myvector& v)
    {
        os << "[";
        for(int i{0}; i<v.size; i++)
        {
            os << v.vec[i] << ",";
        }
        os << "]," << "size : " << v.size << ", capacity : " << v.capacity;
        
        return os;
    }
    MyVector operator=(const MyVector& v)
    {
        delete[] vec;
        vec= new int[v.capacity];
        capacity=v.capacity;
        size=v.size;
        for(int i{0}; i<size; i++)
            vec[i] = a.vec[i];
        return *this;
    }
    MyVector operator+(const Myvector& v1, const Myvector& v2)
    {
        MyVector v = v1;
        for(int i{0}; i< v1.size; i++)
        {
            v.PushBack(v2.vec[i]);
        }
        return v;
    }

    int& operator[](int idx) const 
    {
        if (idx < 0 || idx >= size) {
            cout << "Array out of bound!" << endl;
            return vec[0];
        }
        return vec[idx];
    }

};
 
int main()
{
   MyVector v1{};
   std::cin >> v1;

   MyVector v2{ v1 };
   const MyVector v3{ v1 + v2 };

   MyVector v4{};
   v4 = v3;
   v4[0] = 10;
   
   std::cout << "v1 : " << v1 << std::endl << " v2 : " << v2 << std::endl;
   std::cout << "v3 : " << v3 << std::endl << " v4 : " << v4 << std::endl;
   
   std::cout << v4[15] << std::endl;
   
   return 0;
}