// #include <iostream>
// using namespace std;
// int main()         num 2 code on note
// {
//     int a=3;
//     int& ref=a;
//     int b=4;
//     int& refer=b;
//     ref=refer;
//     cout << ref << refer << a << b << endl;
//     return 0;
// }


// int main()           code num 3
// {
//     int number=10;
//     int& ref=number;
//     int*p = &number;
    
//     ref++;
//     p++;
//     cout << ref <<" "<< p << endl;
//     return 0;
// }



// int main()    code num 4
// {
//     int x=4;
//     int& y=x;
//     int& z=y;
//     cout << x  << y << z << endl;
//     return 0;
// }


/* int main()    code num 4
{
    int x=4;
    int& y=x;
    int z=5;
    y=z;
    cout << x << y << z << endl;
    return 0;
} */


// int main()   code num 5
// {
//     int arr[3]={1, 2, 3};
//     int(&ref)[3]=arr;
//     ref[0]=2;
//     ref[1]=3;
//     ref[2]=1;
//     cout << arr[0] << arr[1] << arr[2] << endl;
//     return 0;
// }



// #include <iostream>
// #include <string>
// using namespace std;

// class KingInfo
// {
// public:
//     KingInfo()
//     {
//         value_ = "조선 성종 이혈";
//     };

//     KingInfo(const string value)
//     {
//         value_ =value;
//     };
//     KingInfo(const int value)
//     {
//         value_ = "연산군 즉위연도: ";
//         value_ += to_string(value);

//     };
// public:
//     string GetValue() const{
//         return value_;
//     }

// private:
//     string value_;
// };
// int main()
// {
//     KingInfo king_info1;
//     KingInfo king_info2("조선 연산군 이융");
//     KingInfo king_info3(1494);

//     cout << king_info1.GetValue() << endl;
//     cout << king_info2.GetValue() << endl;
//     cout << king_info3.GetValue() << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;
// class Number1{
// private:
//     int Num;
//     double Primo;

// public:
//     Number1() = default;
// };
// class Number2{
// private:
//     int Num;
//     double Primo;

// public:
//     Number2() = default;
// };
// int main()
// {
//     Number1 *number1 = new Number1();
//     cout << class1->Num << ", " << class1->prime >> endl;
//     Number2 *number2 = new Number2();
//     cout << class2->

// }


// exit()
// printf("hi")




