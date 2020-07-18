/* #include <iostream>
using namespace std;
int time(int h)
{
    return 3600*h;
}
int time(int h, int m)
{
    return 3600*h+m*60;
}
int time(int h, int m, int s)
{
    return 3600*h+60*m+s;
}
int main()
{
    int h, m, s, menu;
    cin >> menu;
    while(1)
    {
        if(menu==1)
        {
            cin >> h;
            if(h<0)
            {
                cout << "incorrect number" << endl;
                break;
            }
            cout << h << endl;
            cout << time(h) << endl;
            break;
        }
        if(menu==2)
        {
            cin >> h;
            cin >> m;
            if(h<0 || m<0)
            {
                cout << "incorrect number" << endl;
                break;
            }
            cout << h << " "<< m << endl;
            cout << time(h, m) << endl;
            break;
        }
        if(menu==3)
        {
            cin >>h;
            cin >>m;
            cin >>s;
            if(h<0 || m<0 || s<0)
            {
                cout << "incorrect number" << endl;
                break;
            }
            cout << h << " "<< m << " "<< s << endl;
            cout << time(h, m, s) <<endl;
            break;
        }
        else
        {
            cout << "wrong menu" <<endl;
            break;
        }
    }
    return 0;
} */


/* #include <iostream>
using namespace std;
int area(int x)
{
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << 3.14*x*x <<" ";
}
int area(int x, int y)
{
    cout << x*y << " ";
}
int area(int x, int y, int z)
{
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << 2*x*y+2*x*z+2*y*z << " ";
}
int per(int x)
{
    cout << 3.14*2*x <<endl;
}
int per(int x, int y)
{
    cout << 2*x+2*y << endl;
}
int per(int x, int y, int z)
{
    cout << 4*x+4*y+4*z <<endl;
}
int main()
{
    int menu, x, y, z;
    while(1)
    {
        cin >> menu;
        if(menu==0)
            break;
        if(menu==1)
        {
            cin >> x;
            cin >> y;
            if(x<0 || y<0)
                cout << "incorrect number" << endl;
            else
            {
                area(x, y);
                per(x, y);
            }

        }
        if(menu==2)
        {
            cin >> x;
            if(x<0)
                cout << "incorrect number" <<endl;
            else
            {
                area(x);
                per(x);
            }
            
        }
        if(menu==3)
        {
            cin >>x;
            cin >>y;
            cin >>z;
            if(x<0 || y<0 || z<0)
                cout << "incorrect number" <<endl;
            else
            {
                area(x, y, z);
                per(x, y, z);
            }
        }
        if(menu>3 || menu <1)
        {
            cout << "wrong menu" <<endl;
        }
        
    }
    return 0;
} */


/* #include <iostream>
using namespace std;
int max(int arr[], int n, int& max_num)
{
    max_num=arr[0];
    for(int a=0; a<n; a++)
    {
        if(arr[a]>max_num)
        {
            max_num=arr[a];
        }
    }
    return 0;
}
int main()
{
    int n, i, max_num;
    int arr[100];
    cin >> n;
    for(i = 0; i< n; i++) cin >> arr[i];
    max(arr, n, max_num);
    cout << max_num;
    return 0;
} */

/* #include <iostream>
using namespace std;
int swap(char a, char b, char c)
{
    cout << c <<" "<< a <<" "<< b<<endl;
    cout << b <<" "<< c <<" "<< a<<endl;
    cout << a <<" "<< b <<" "<< c<<endl;
}
int main()
{
    char a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    swap(a, b, c);
    return 0;
} */



/* #include <iostream>
using namespace std;

class Rectangle{
    private:
        int rec_size;
        int rec_len;
    public:
        int change_value(int wid, int height)
        {   
            rec_size=wid*height;
            rec_len=2*wid + 2*height;
            cout<<rec_size<<endl;
            cout<<rec_len<<endl;
            return 0;
        }

};

class Circle{
    private:
        float cir_size;
        float cir_len;
    public:
    int change_val(int len)
    {
        cir_size=len*len*3.14;
        cir_len=len*2*3.14;
        cout.setf(ios::fixed, ios::floatfield);
        cout.precision(2);
        cout<<cir_size<<endl;
        cout<<cir_len<<endl;
        return 0;
    }
};
int main()
{
    int a, b, c;
    cin>>a;
    cin>>b;
    cin>>c;
    Rectangle r;
    r.change_value(a, b);
    Circle ci;
    ci.change_val(c);
    return 0;
}


 */



/* #include <iostream>
using namespace std;

class Calculator{
    private:
        int value;
        int add1=0;
        int minus1=0;
        int mul1=0;
        int dvi=0;
        int mod1=0;
    public:
        int add(int a, int b)
        {
            value=a+b;
            cout<<value<<endl;
            add1++;
            return 0;
        }
        int minus(int a, int b)
        {
            value=a-b;
            cout<<value<<endl;
            minus1++;
            return 0;
        }
        int mul(int a, int b)
        {
            value=a*b;
            cout<<value<<endl;
            mul1++;
            return 0;
        }
        int div(int a, int b)
        {
            value=a/b;
            cout<<value<<endl;
            dvi++;
            return 0;
        }
        int mod(int a, int b)
        {
            value=a%b;
            cout<<value<<endl;
            mod1++;
            return 0;
        }
        int all()
        {
            cout<<"Add: "<<add1<<endl;
            cout<<"Minus: "<<minus1<<endl;
            cout<<"Mul: "<<mul1<<endl;
            cout<<"Div: "<<dvi<<endl;
            cout<<"Mod: "<<mod1<<endl;
            return 0;
        }
};
int main()
{
    int a, b, menu;
    Calculator c;
    while(1)
    {
        cin>>menu;
        if(menu==0)
        {
            break;
        }
        if(menu==1)
        {
            cin>>a;
            cin>>b;
        }
        if(menu==2)
        {
            c.add(a, b);
        }
        if(menu==3)
        {
            c.minus(a,b);
        }
        if(menu==4)
        {
            c.mul(a,b);
        }
        if(menu==5)
        {
            c.div(a,b);
        }
        if(menu==6)
        {
            c.mod(a,b);
        }
        if(menu==7)
        {
            c.all();
        }
    }
    return 0;

} */

/* 
#include <iostream>
using namespace std;
class Speed{
    private:
        int limit;
        int speed=0;
    public:
    int get_limit(int a)
    {
        limit=a;
        return 0;
    }
    int acc(int add)
    {
        speed+=add;
        if(speed<=0)
            cout<<"Off 0"<<endl;
        else
        {
            cout<<"On "<<speed<<endl;
        }
        if(speed>limit)
            cout<<"ATTENTION: overspeed!"<<endl;
        return 0;
    }
    int dec(int add)
    {
        speed-=add;
        if(speed<=0)
            cout<<"Off 0"<<endl;
        else
        {
            cout<<"On "<<speed<<endl;
        }
        if(speed>limit)
            cout<<"ATTENTION: overspeed!"<<endl;
        return 0;
    }
    int reset()
    {
        speed=0;
        cout<<"Off 0"<<endl;
        return 0;

    }
};
int main()
{
    int menu, a, limit;
    cin>>limit;
    Speed s;
    s.get_limit(limit);
    while(1)
    {
        cin>>menu;
        if(menu==0)
            break;
        if(menu==1)
        {
            cin>>a;
            s.acc(a);
        }
        if(menu==2)
        {
            cin>>a;
            s.dec(a);
        }
        if(menu==3)
            s.reset();
    }
    return 0;
} */
#include <iostream>
using namespace std;
 
class Speed {
private:
    int limit;
    int spd = 0;
    int state = 0;
public:
    void accel(int v) {
        spd += v;
        state = 1;
        if (spd < 0) {
            spd = 0;
            state = 0;
        }
        if (state == 0) {
            cout << "Off " << spd << endl;
        }
        else if (state == 1) {
            cout << "On " << spd << endl;
        }
 
        if (spd > limit) {
            cout << "ATTENTION: overspeed!" << endl;
        }
    }
    void decel(int v) {
        spd -= v;
        state = 1;
        if (spd < 0) {
            spd = 0;
            state = 0;
        }
        if (state == 0) {
            cout << "Off " << spd << endl;
        }
        else if (state == 1) {
            cout << "On " << spd << endl;
        }
 
        if (spd > limit) {
            cout << "ATTENTION: overspeed!" << endl;
        }
    }
    void brake() {
        spd = 0;
        state = 0;
        if (state == 0) {
            cout << "Off " << spd << endl;
        }
        else if (state == 1) {
            cout << "On " << spd << endl;
        }
    }
    void set_limit(int lim) {
        limit = lim;
    }
};
 
int main() {
    int op = 1;
    int lim;
    int vel;
    Speed s;
 
    cin >> lim;
    s.set_limit(lim);
    while (op != 0){
        cin >> op;
        if (op == 1) {
            cin >> vel;
            s.accel(vel);
        }
        if (op == 2) {
            cin >> vel;
            s.decel(vel);
        }
        if (op == 3) {
            s.brake();
        }
    }
    return 0;
}