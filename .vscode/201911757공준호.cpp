#include <iostream>
using namespace std;

int* Resize(int* vec, int& size, int& capacity){
    capacity*=2;

    int* cpy_vec=new int[capacity];

    for(int i{0};i<size-1;i++)
        cpy_vec[i]=vec[i];
    
    delete[] vec;
    return cpy_vec;
}

int* PushBack(int* vec, int& val, int& size, int& capacity){
    size++;

    if(capacity<size)
        vec=Resize(vec, size, capacity);

    vec[size-1]=val;
    return vec;
}

int* Inverse(int* vec, int& size, int& capacity){
    int* inv_vec=new int[size];

    for(int i{0};i<size;i++)
        inv_vec[i]=vec[size-i-1];
    for(int i=0;i<size;i++)
        vec[i]=inv_vec[i];

    delete[] inv_vec;
    return vec;
}

void PrintVectorInfo(int* vec, int& size, int& capacity){
    cout<<"[";
    for(int i{0};i<size;i++)
        cout<<vec[i]<<" ";
    
    cout<<"], ";
    cout<<"Size : "<<size<<", ";
    cout<<"Capacity : "<<capacity<<endl;
}

//main() 함수. 본문 안 코드는 수정 불가!
int main()
{
	int size{}, capacity{};
	std::cin >> size;
	capacity = size;

	int* vec = new int[capacity];

	for (int i{ 0 }; i < size; i++)
	{
		std::cin >> vec[i];
	}
	PrintVectorInfo(vec, size, capacity);

	int addValue{};
	for (int i{ 0 }; i < 5; i++)
	{
		std::cin >> addValue;
		vec = PushBack(vec, addValue, size, capacity);
		PrintVectorInfo(vec, size, capacity);
	}

	vec = Inverse(vec, size, capacity);
	PrintVectorInfo(vec, size, capacity);


	delete[] vec;

	return 0;
}