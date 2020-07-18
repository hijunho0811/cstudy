#include <iostream>

using namespace std;

class MyVector
{
private:
   int* vec;
   int size;
   int capacity;
public:
   MyVector();
   MyVector(const MyVector& a);
   ~MyVector();
   void PushBack(int val);
   int* Resize();
   friend MyVector operator+(const MyVector& a, const MyVector& b);
   int& operator[](int a);
   friend ostream& operator<<(ostream& a, const MyVector& b);
   friend istream& operator>>(istream& a, MyVector& b);
   MyVector operator=(const MyVector& a);
   //문서를 참고하여 MyVector 내부 멤버들을 구현하세요.
};
MyVector::MyVector()
{
   size = 0;
   capacity = 1;
   vec = new int[capacity];
}
MyVector::MyVector(const MyVector& a)
{
   size = a.size;
   capacity = a.capacity;
   vec = new int[capacity];
   for (int i{ 0 }; i < a.size; i++)
      vec[i] = a.vec[i];
}
void MyVector::PushBack(int val)
{

   if (size >= capacity)
   {
      capacity = 2 * capacity;
      vec = Resize();
   }
   vec[size] = val;
   size = size + 1;
}
int* MyVector::Resize()
{
   int temp{ 0 };
   int* new_vec = new int[capacity];
   for (int i{ 0 }; i < capacity; i++)
   {
      if (i < size)
      {
         temp = vec[i];
         new_vec[i] = temp;
      }
      else
         new_vec[i] = 0;
      delete[] vec;
   }
   return new_vec;
}
istream& operator>>(istream& a, MyVector& b)
{
   int val;
   cout << "Enter elements of vector(Ctrl + Z for exit) : ";
   while (cin >> val)
   {
      b.PushBack(val);
   }
   return a;
}
ostream& operator<<(ostream& os, const MyVector& b)
{
   os << "[";
   for (int i{ 0 }; i < b.size; i++)
   {
      os << b.vec[i] << ",";
   }
   os << "]," << "size : " << b.size << ", capacity : " << b.capacity;

   return os;
}
MyVector operator+(const MyVector& a, const MyVector& b)
{
   MyVector z = a;
   for (int i{ 0 }; i < a.size; i++)
   {
      z.PushBack(b.vec[i]);
   }
   return z;
}
int& MyVector::operator[](int a)
{
   if (a >= size) {
      cout << "Array out of bound!" << endl;
      return vec[0];
   }
   else
      return vec[a];
}
MyVector MyVector::operator=(const MyVector& a)
{
   delete[] vec;
   vec = new int[a.capacity];
   capacity = a.capacity;
   size = a.size;
   for (int i{ 0 }; i < size; i++)
      vec[i] = a.vec[i];
   return *this;
}
MyVector::~MyVector()
{
   delete[] vec;
}

int main()
{
   MyVector v1{};
   std::cin >> v1;

   MyVector v2{ v1 };
   const MyVector v3{ v1 + v2 };

   MyVector v4{};
   v4 = v3;
   v4[0] = 10;

   std::cout << "v1 : " << v1 << std::endl << "v2 : " << v2 << std::endl;
   std::cout << "v3 : " << v3 << std::endl << "v4 : " << v4 << std::endl;

   std::cout << v4[15] << std::endl;

   return 0;
}