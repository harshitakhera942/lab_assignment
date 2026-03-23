// // Ques 1
// #include <iostream>
// using namespace std;
// class Rectangle {
//     int length, breadth;
// public:
//     // Constructor 1 (no parameter)
//     Rectangle() {
//         length = 0;
//         breadth = 0;
//     }
//     // Constructor 2 (one parameter)
//     Rectangle(int x) {
//         length = x;
//         breadth = x;
//     }
//     // Constructor 3 (two parameters)
//     Rectangle(int l, int b) {
//         length = l;
//         breadth = b;
//     }
//     int area() {
//         return length * breadth;
//     }
// };
// int main() {
//     Rectangle r1;       // no parameter
//     Rectangle r2(5);    // one parameter
//     Rectangle r3(4,6);  // two parameters
//     cout << "Area r1 = " << r1.area() << endl;
//     cout << "Area r2 = " << r2.area() << endl;
//     cout << "Area r3 = " << r3.area() << endl;
//     return 0;
// }

// QUES 2
// #include<iostream>
// using namespace std;
// class Rectangle{
//     int length, breadth;
// public:
//        Rectangle(int l= 0,int b= 0){
//         length=l;
//         breadth=b;
//        }
//        int area(){
//         return length*breadth;
//        }
//        ~Rectangle(){
//         cout<<"Destructor called"<<endl;
//        }
// };
// int main(){
//     Rectangle r[3]={ Rectangle(), Rectangle(5), Rectangle(4,6)};
//     for(int i=0; i<3; i++){
//         cout<<"Area of rectangle"<< i+1 <<"=" <<r[i].area() << endl;
//     }
//     return 0;
// }

// Ques 3
// #include <iostream>
// using namespace std;
// class Demo {
// public:
//     Demo() {
//         cout << "Constructor called" << endl;
//     }
//     // Destructor
//     ~Demo() {
//         cout << "Destructor called" << endl;
//     }
// };
// int main() {
//     Demo d;
//     return 0;
// }

// Ques 4 (A)
// #include <iostream>
// using namespace std;
// int main() {
//     int *p = new int;
//     *p = 10;
//     cout << *p << endl;
//     delete p;
// }


// QUES 4(b)
// # include <iostream>
// using namespace std;
// int main(){
//     float *p = new float;
// *p = 5.5;
// cout << *p;
// delete p;
// }

// QUES 4 (C)
// #include<iostream>
// using namespace std;
// int main(){
//     int *arr = new int[5];
// for(int i=0;i<5;i++){
//     arr[i] = i+1;
// }
// for(int i=0;i<5;i++){
//      cout << arr[i] << " ";
//    }
//    delete arr[];
// }


// QUES 4(d)
// #include<iostream>
// using namespace std;
// int main(){
//     float *arr = new float[3];
// arr[0] = 1.1;
// arr[1] = 2.2;
// arr[2] = 3.3;
// for(int i=0; i<3; i++){
//     cout << arr[i] << " ";
// }
// delete[] arr;
// }

// QUES 4(e)
// #include<iostream>
// using namespace std;
//     class Test {
// public:
//     void show() {
//         cout << "Hello";
//     }
// };
// int main() {
//     Test *t = new Test;
//     t->show();
//     delete t;
// }

// QUES 4(f)
// #include<iostream>
// using namespace std;
// class Test {
// public:
//     void show() {
//         cout << "Hi ";
//     }
// };
// int main() {
//     Test *t = new Test[3];
//     for(int i=0; i<3; i++)
//         t[i].show();

//     delete[] t;
// }