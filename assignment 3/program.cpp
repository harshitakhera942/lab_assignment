// ////          QUESTION 1
// #include <iostream>
// using namespace std;
// class Demo
// {
//     int x;
//     public:
//     void set(int x)
//     {
//         this->x = x;            // this pointer
//     }
//     void show()
//     {
//         cout<<"Value = "<<x<<endl;
//     }
// };
// int main()
// {
//     Demo d;
//     Demo *p;
//     p = &d;
//     d.set(10);    
//     d.show();
//     p->set(20);   
//     p->show();
//     return 0;
// }

// ///       QUESTION 2
// #include <iostream>
// using namespace std;
// class B;
// class A
// {
//     int x;
// public:
//     void set(int a){ x=a; }
//     friend void swap(A&,B&);
//     void show()
//     { cout<<"A = "<<x<<endl;
//      }
// };
// class B
// {
//     int y;
// public:
//     void set(int b){ y=b; }
//     friend void swap(A&,B&);
//     void show(){  
//         cout<<"B = "<<y<<endl; 
//     }
// };
// void swap(A &a, B &b)
// {
//     int t=a.x;
//     a.x=b.y;
//     b.y=t;
// }
// int main()
// {
//     A a;
//     B b;
//     a.set(10);
//     b.set(20);
//     swap(a,b);
//     a.show();
//     b.show();
// }
  
// ////    QUESTION 3
// #include <iostream>
// using namespace std;
// class B;
// class A
// {
//     int x;
// public:
//     void set(int a){ x=a; }
//     friend void add(A,B);
// };
// class B
// {
//     int y;
// public:
//     void set(int b){ y=b; }
//     friend void add(A,B);
// };
// void add(A a,B b)
// {
//     cout<<"Sum = "<<a.x + b.y;
// }
// int main()
// {
//     A a;
//     B b;
//     a.set(5);
//     b.set(10);
//     add(a,b);
// }

// // QUESTION 4
// #include <iostream>
// using namespace std;
// class A
// {
//     int x=10;
//     friend class B;
// };
// class B
// {
// public:
//     void show(A a)
//     {
//         cout<<"Value = "<<a.x;
//     }
// };
// int main()
// {
//     A a;
//     B b;
//     b.show(a);
// }
 
//////        QUESTION 5
// #include <iostream>
// using namespace std;
// class Rectangle
// {
//     int l,b;
// public:
//     void get()
//     {
//         cin>>l>>b;
//     }
//     void area()
//     {
//         cout<<"Area = "<<l*b<<endl;
//     }
// };
// int main()
// {
//     Rectangle r[2];
//     for(int i=0;i<2;i++)
//     {
//         cout<<"Enter length and breadth: ";
//         r[i].get();
//     }
//     for(int i=0;i<2;i++)
//     {
//         r[i].area();
//     }
// }

// ///    QUESTION 6

//  #include <iostream>
// using namespace std;
// inline int cube(int n)
// {
//     return n*n*n;
// }
// int main()
// {
//     int x;
//     cout<<"Enter number: ";
//     cin>>x;
//     cout<<"Cube = "<<cube(x);
// }

// ///        QUESTION 7 (a)

// #include <iostream>
// using namespace std;
// class Test
// {
// public:
//     int x;
// };
// Test add(Test t)
// {
//     t.x = t.x + 5;
//     return t;
// }
// int main()
// {
//     Test t1,t2;
//     t1.x=10;
//     t2=add(t1);
//     cout<<"Value = "<<t2.x;
// }

// ///       QUESTION 7 (b)

// #include <iostream>
// using namespace std;
// class Test
// {
// public:
//     int x;
// };
// void add(Test &t)
// {
//     t.x = t.x + 5;
// }
// int main()
// {
//     Test t;
//     t.x=10;
//     add(t);
//     cout<<"Value = "<<t.x;
// }

