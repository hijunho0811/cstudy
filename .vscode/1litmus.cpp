// #include <iostream>
// using namespace std;
 
// class Rectangle {
// protected:
//     int width, height;
// public:
//     Rectangle()
//     {
//         width=0;
//         height=0;
//     }
//     Rectangle (int w, int h) {
//         width = w;
//         height = h;
//     }
//     void ShowCircumference() {
//         cout << width*2+height*2 << " ";
//     }
//     void ShowArea(){
//         cout << width*height << endl;
//     }
// };
 
// class Hexahedron : public Rectangle {
// private:
//     int depth;
// public:
//     Hexahedron()
//     {
//         width=0;
//         height=0;
//         depth=0;
//     }
//     Hexahedron(int w, int h, int l) {
//         width = w;
//         height = h;
//         depth = l;
//     }
//     void ShowCircumference(){
//         std::cout << width*4+height*4+depth*4 << " ";
//     }
//     void ShowArea(){
//         cout << width*height*depth << endl;
//     }
// };
 

// int main()

// {

//     int width, height, depth;

//     cin>> width >> height >> depth;

//     Rectangle rec(width,height);

//     rec.ShowCircumference();                       // 직사각형의 둘레 출력

//     rec.ShowArea();                                       // 직사각형의 넓이 출력

//     Hexahedron hex(width, height, depth);

//     hex.ShowCircumference();                      // 육면체의 둘레 출력

//     hex.ShowArea();                                      // 육면체의 넓이 출력

//     return 0;

// }





// #include <iostream>
// using namespace std;
// class Book{
    
// }
// int main()

// {

//     string name, isbn, key;

//     int price;

//     cin >> name >> isbn >> price;

//     Book book(name, isbn, price);

//     book.ShowBookInfo();

//     cin >> name >> isbn >> price >> key;

//     Ebook ebook(name, isbn, price, key);

//     ebook.ShowBookInfo();

//     return 0;

// }





// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// class Account {
// private:
//    static int count;
//    static int total_balance;
//    std::string name;
//    int balance;
// public:
//    Account(std::string name_v, int balance_v) {
//       name = name_v;
//       balance = balance_v; 
//       total_balance = balance_v;
//       count++;
//    }
//    void deposit(int amount); //입금 함수
//    void print_info(); //현재 계좌의 정보를 출력하는 함수
//    std::string get_name(); //현재 계좌의 이름을 반환하는 함수
//    static void print_total(); //총 계좌수와 잔액을 출력하는 함수
// };

// int Account::count = 0;

// void Account::deposit(int amount) {
//    Account::balance += amount;
//    Account::total_balance += amount;
// }

// void Account::print_info() {
//    std::cout << name << ' ' << balance << std::endl;
// }

// std::string Account::get_name() {
//    return name;
// }

// void Account::print_total() {
//    std::cout << "total client: " << count << std::endl;
//    std::cout << "total balance: " << total_balance << std::endl;
// }

// int main() {

//    int menu, balance, amount, count = 0;
//    std::string account_num;
//    std::vector<Account> account[100];

//    do {
//       int i = 0;
//       std::cin >> menu;
//       if (menu == 1) {
//          std::cin >> account_num >> balance;
//          Account ac(account_num, balance);
//          account->push_back(ac);
//          count++;
//       }
//       else if (menu == 2) {
//          bool flag = false;
//          std::cin >> account_num;
//          for (int i{ 0 }; i < count; i++) {
//             if (account->at(i).get_name == account_num) {
//                std::cin >> amount;
//                account->at(i).deposit(amount);
//                flag = true;
//             }
//             if (flag == false) std::cout << "ERROR" << std::endl;
//          }
//       }
//       else {
//          for (int i{ 0 }; i < count; i++) {
//             account->at(i).print_info();
//          }
//          account->back().print_total();
//          }
//       } while (menu);

//    return 0;
// }
// -미완성



// #include <iostream>
// using namespace std;
// class Point{
// private:
//    int x;
//    int y;

// public:
//    Point(int x_ , int y_ ){
//       x=x_;
//       y=y_;
//    }
//    Point operator-() const
//    {
//       return Point(-x, -y);

//    }
//    void ShowPosition(){
//       cout << "[" << x<< ", "<<y<<"]"<<endl;
//    }
// };
// int main()

// {

//     int x,y;

//     cin>>x>>y;

//     Point pos1(x,y);

//     pos1.ShowPosition();

//     Point pos2 = -pos1;

//     pos2.ShowPosition();

//     return 0;

// }




// #include <iostream>
// using namespace std;
// class Point{
// private:
//    int x;
//    int y;

// public:
//    Point(int x_ , int y_){
//       x=x_;
//       y=y_;
//    }
//    friend bool operator ==(const Point &p1, const Point &p2);
//    friend bool operator !=(const Point &p1, const Point &p2);
   
//    friend bool operator==(const Point &p1,   const Point &p2)
//    {
//       if(p1.x==p2.x)
//       {
//          if(p1.y==p2.y)
//             return true;
//       }
//       return false;
//    }
//   friend bool operator!=(const Point &p1, const Point &p2)
//    {
//       return (!(p1==p2));
//    }
//    void ShowPosition(){
//       cout << "[" << x<< ", "<<y<<"]"<<endl;
//    }

// };
// int main()

// {
//     int x1, x2, y1, y2;

//     cin >> x1 >> y1;

//     cin >> x2 >> y2;

//     Point p1(x1, y1);

//     Point p2(x2, y2);

//     p1.ShowPosition();

//      p2.ShowPosition();

//     if(p1==p2){

//         cout<<"yes"<<endl;

//     }

//     else{

//         cout<<"no"<<endl;

//    }

//    if(p1!=p2){

//         cout<<"yes"<<endl;

//     }

//     else{

//         cout<<"no"<<endl;

//    }

//      return 0;
// }


// #include <iostream>
// using namespace std;
  
// class Point {
// private:
//     int x;
//     int y;
 
// public:
//     Point(int x_, int y_){
//         x = x_;
//         y = y_;
//     }
 
//     friend Point operator-(const Point &lhs, const Point &rhs);
//     friend Point operator+(const Point &lhs, const Point &rhs);
//     Point& operator+=(const Point &rhs) {
//         *this = *this + rhs;
//         return *this;
//     }
//     Point& operator-=(const Point &rhs) {
//         *this = *this - rhs;
//         return *this;
//     }
//     Point& operator=(const Point &rhs) {
//         if (this == &rhs) {
//             return *this;
//         }
//         x = rhs.x;
//         y = rhs.y;
 
//         return *this;
//     }
 
//     Point operator*(int num) {
//         return Point{ Point::x * num, Point::y * num };
//     }
//     friend Point operator*(int num, const Point &rhs);
 
//     void ShowPosition(){
//         cout << "[" << x << ", " << y << "]" << endl;
//     }
// };
 
// Point operator*(int num, const Point &rhs) {
//     return Point{ rhs.x * num, rhs.y * num };
// }
 
// Point operator+(const Point &lhs, const Point &rhs) {
//     return Point{ lhs.x + rhs.x, lhs.y + rhs.y };
// }
 
// Point operator-(const Point &lhs, const Point &rhs) {
//     return Point{ lhs.x - rhs.x, lhs.y - rhs.y };
// }
 
// int main()
 
// {
//     int x1, x2, y1, y2;
 
//     int a, b;
 
//     cin >> x1 >> y1;
 
//     cin >> x2 >> y2;
 
//     cin >> a >> b;
 
//     Point p1(x1, y1);
//     Point p2(x2, y2);
 
//     p1.ShowPosition();
 
//     p2.ShowPosition();
 
//     p1 += p2;
 
//     p1.ShowPosition();
 
//     p1 -= p2;
 
//     p1 -= p2;
 
//     p1.ShowPosition();
//     Point p3 = p2 * a;
 
//     Point p4 = a * p2*b;
 
//     p3.ShowPosition();
 
//     p4.ShowPosition();
 
//     return 0;
// }
// //하쿠나 마타타
// //알 이즈 웰


// #include <iostream>
// using namespace std;
 
// class Time {
// private:
//     int second;
//     int minute;
//     int hour;
 
// public:
//     Time(int h, int min, int sec) : second(sec), minute(min), hour(h){}
 
//     void Show() {
//         cout << hour << "H " << minute << "M " << second << "S" << endl;
//     }
 
//     Time& operator++() {
//         Time::second++;
//         if (second >= 60) {
//             second -= 60;
//             minute++;
//             if (minute >= 60) {
//                 minute -= 60;
//                 hour++;
//             }
//         }
//         return *this;
//     }
// };
 
// int main()
 
// {
//     int x, y, z;
 
//     cin >> x >> y >> z;
 
//     Time time1(x, y, z);
 
//     time1.Show();
 
//     ++time1;
 
//     time1.Show();
 
//     return 0;
// }









// //1
// #include<iostream>
 
// using namespace std;
 
// class Point {
//     int x;
//     int y;
 
// public:
//     Point(int x_ = 0, int y_ = 0) : x{ x_ }, y{ y_ } {}
 
//     void ShowPosition() {
//         cout << "[" << x << ", " << y << "]" << endl;
//     }
 
//     Point operator+(Point &rhs) const {
//         return Point(x + rhs.x, y + rhs.y);
//     }
 
//     Point operator-(Point &rhs) const {
//         return Point(x - rhs.x, y - rhs.y);
//     }
// };
 
// int main()
 
// {
//     int x1, x2, y1, y2;
 
//     cin >> x1 >> y1;
 
//     cin >> x2 >> y2;
 
//     Point p1(x1, y1);
 
//     Point p2(x2, y2);
 
//     Point p3 = p1 + p2;
 
//     Point p4 = p1 - p2;
 
//     p1.ShowPosition();
 
//     p2.ShowPosition();
 
//     p3.ShowPosition();
 
//     p4.ShowPosition();
 
//     return 0;
// }




// //2
// #include<iostream>
 
// using namespace std;
 
// class Point {
//     int x;
//     int y;
 
// public:
//     Point(int x_ = 0, int y_ = 0) : x{ x_ }, y{ y_ } {}
 
//     void ShowPosition() {
//         cout << "[" << x << ", " << y << "]" << endl;
//     }
 
//     friend ostream& operator<<(ostream& os, const Point& p) {
//         os << "[" << p.x << ", " << p.y << "]" << endl;
//         return os;
//     }
 
//     friend istream& operator>>(istream& is, Point& p) {
//         int x_, y_;
//         is >> x_ >> y_;
//         p = Point(x_, y_);
 
//         return is;
//     }
 
//     Point operator+(Point &rhs) const {
//         return Point(x + rhs.x, y + rhs.y);
//     }
 
//     Point operator-(Point &rhs) const {
//         return Point(x - rhs.x, y - rhs.y);
//     }
// };
 
// int main()
 
// {
 
//     Point pos1;
 
//     Point pos2;
 
 
 
//     cin >> pos1;
 
//     cin >> pos2;
 
 
//     cout << pos1;
 
//     cout << pos2;
 
//     return 0;
 
// }










// //3
// #include<iostream>
 
// using namespace std;
 
// class Fib {
//     int n;
//     int *arr;
 
// public:
//     Fib(int N) {
//         n = N;
//         arr = new int[n];
//     }
 
//     int &operator[](int idx) {
//         if (idx < 0 || idx >= n) {
//             exit(1);
//         }
 
//         return arr[idx];
//     }
 
//     ~Fib() { delete[] arr; }
     
// };
 
// int main()
// {
//     int n;
//     cin >> n;
 
//     Fib f{ n };
 
//     f[0] = 1;
 
//     f[1] = 1;
 
//     for (int i = 2; i < n; i++)
//         f[i] = f[i - 1] + f[i - 2];
 
//     for (int i = 0; i < n; i++)
//         cout << f[i] << ' ';
 
 
//     cout << endl;
 
//     return 0;
 
// }








// //4
// #include<iostream>
 
// using namespace std;
 
// class Square {
//     int n;
//     int *arr;
 
// public:
//     Square(int N) {
//         n = N;
//         arr = new int[n];
//     }
 
//     int &operator[](int idx) {
//         if (idx < 0 || idx >= n) {
//             exit(1);
//         }
 
//         return arr[idx];
//     }
 
//     ~Square() { delete[] arr; }
     
// };
 
// int main()
 
// {
 
//     int n;
 
//     cin >> n;
 
//     Square s{ n };
 
//     for (int i = 0; i < n; i++)
 
//         s[i] = (i + 1) * (i + 1);
 
//     for (int i = 0; i < n; i++)
 
//         cout << s[i] << ' ';
 
//     cout << endl;
 
//     return 0;
 
// }





