//     Ques 1    //
// #include <iostream>
// using namespace std;
// // Base class
// class Polygon {
// protected:
//     int width, height;

// public:
//     void set_value(int w, int h) {
//         width = w;
//         height = h;
//     }

//     // Virtual function
//     virtual int calculate_area() {
//         return 0;
//     }
// };
// // Derived class Rectangle
// class Rectangle : public Polygon {
// public:
//     int calculate_area() {
//         return width * height;
//     }
// };

// // Derived class Triangle
// class Triangle : public Polygon {
// public:
//     int calculate_area() {
//         return (width * height) / 2;
//     }
// };

// int main() {
//     Polygon *p;  
//     Rectangle rect;
//     Triangle tri;

//     // Rectangle
//     p = &rect;
//     p->set_value(10, 5);
//     cout << "Rectangle Area = " << p->calculate_area() << endl;

//     // Triangle
//     p = &tri;
//     p->set_value(10, 5);
//     cout << "Triangle Area = " << p->calculate_area() << endl;
//     return 0;
// }

// ///        Ques 2      //
// #include <iostream>
// using namespace std;
// class Shape {
// public:
//     virtual void area() {
//         cout << "Area not defined\n";
//     }

//     virtual void display() {
//         cout << "This is Shape\n";
//     }
// };
// // Circle class
// class Circle : public Shape {
// public:
//     void area() {
//         float r = 5;
//         cout << "Area of Circle = " << 3.14 * r * r << endl;
//     }

//     void display() {
//         cout << "Circle\n";
//     }
// };
// // Rectangle class
// class Rectangle : public Shape {
// public:
//     void area() {
//         int l = 10, b = 5;
//         cout << "Area of Rectangle = " << l * b << endl;
//     }

//     void display() {
//         cout << "Rectangle\n";
//     }
// };
// // Triangle class
// class Triangle : public Shape {
// public:
//     void area() {
//         int b = 10, h = 5;
//         cout << "Area of Triangle = " << (b * h) / 2 << endl;
//     }

//     void display() {
//         cout << "Triangle\n";
//     }
// };

// int main() {
//     Shape *s;

//     Circle c;
//     Rectangle r;
//     Triangle t;

//     s = &c;
//     s->display();
//     s->area();

//     s = &r;
//     s->display();
//     s->area();

//     s = &t;
//     s->display();
//     s->area();

//     return 0;
// }

// Ques 3 //
// #include <iostream>
// #include <cmath>
// using namespace std;
// // Right angle triangle
// float area(float base, float height) {
//     return (base * height) / 2;
// }
// // Equilateral triangle
// float area(float side) {
//     return (1.732 * side * side) / 4;   // √3 ≈ 1.732
// }
// // Isosceles triangle
// float area(float equal, float base, int x) {
//     float height = sqrt(equal * equal - (base * base) / 4);
//     return (base * height) / 2;
// }
// int main() {
//     cout << "Right angle triangle = " << area(10, 5) << endl;
//     cout << "Equilateral triangle = " << area(6) << endl;
//     cout << "Isosceles triangle = " << area(5, 6, 1) << endl;
//     return 0;
// }

//      Ques 4       //
// #include <iostream>
// using namespace std;
// // Abstract base class
// class Student {
// public:
//     virtual void display() = 0;   // pure virtual function
// };
// class Engineering : public Student {
// public:
//     void display() {
//         cout << "Engineering Student" << endl;
//     }
// };
// class Medicine : public Student {
// public:
//     void display() {
//         cout << "Medicine Student" << endl;
//     }
// };
// class Science : public Student {
// public:
//     void display() {
//         cout << "Science Student" << endl;
//     }
// };
// int main() {
//     Student *s[3];   // array of base class pointers
//     Engineering e;
//     Medicine m;
//     Science sc;
//     // Assign objects
//     s[0] = &e;
//     s[1] = &m;
//     s[2] = &sc;
//     // Access objects
//     for(int i = 0; i < 3; i++) {
//         s[i]->display();
//     }
//     return 0;
// }

///       ques 5        ///
// #include <iostream>
// using namespace std;
// class Time {
// private:
//     int h, m, s;
// public:
//     // Constructor
//     Time(int hh = 0, int mm = 0, int ss = 0) {
//         h = hh;
//         m = mm;
//         s = ss;
//     }
//     // Overloading + operator
//     Time operator+(Time t) {
//         Time temp;
//         temp.s = s + t.s;
//         temp.m = m + t.m + temp.s / 60;
//         temp.s = temp.s % 60;
//         temp.h = h + t.h + temp.m / 60;
//         temp.m = temp.m % 60;
//         return temp;
//     }
//     // Display
//     void show() {
//         cout << h << ":" << m << ":" << s << endl;
//     }
// };
// int main() {
//     Time t1(5,15,34), t2(9,53,58), t3;
//     t3 = t1 + t2;   // using overloaded operator
//     t3.show();
//     return 0;
// }

//  Ques 6 ///
// #include <iostream>
// #include <cstring>
// using namespace std;
// class STRING {
// private:
//     char str[100];
// public:
//     // Input function
//     void input() {
//         cin >> str;
//     }
//     // Display function
//     void display() {
//         cout << str << endl;
//     }
//     // Overload == (compare)
//     int operator==(STRING s) {
//         return strcmp(str, s.str) == 0;
//     }
//     // Overload + (concatenate)
//     STRING operator+(STRING s) {
//         STRING temp;
//         strcpy(temp.str, str);
//         strcat(temp.str, s.str);
//         return temp;
//     }
// };
// int main() {
//     STRING s1, s2, s3;
//     cout << "Enter first string: ";
//     s1.input();
//     cout << "Enter second string: ";
//     s2.input();
//     // Compare strings
//     if (s1 == s2)
//         cout << "Strings are equal\n";
//     else
//         cout << "Strings are not equal\n";

//     // Concatenate strings
//     s3 = s1 + s2;
//     cout << "Concatenated string: ";
//     s3.display();
//     return 0;
// }

//     ques 7     ///
// #include <iostream>
// using namespace std;
// class Matrix {
// private:
//     int a[2][2];
// public:
//     void input() {
//         cout << "Enter elements:\n";
//         for(int i = 0; i < 2; i++) {
//             for(int j = 0; j < 2; j++) {
//                 cin >> a[i][j];
//             }
//         }
//     }
//     void display() {
//         for(int i = 0; i < 2; i++) {
//             for(int j = 0; j < 2; j++) {
//                 cout << a[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
//     // Friend function for multiplication
//     friend Matrix operator*(Matrix m1, Matrix m2);
// };
// // Definition of friend function
// Matrix operator*(Matrix m1, Matrix m2) {
//     Matrix temp;
//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 2; j++) {
//             temp.a[i][j] = 0;
//             for(int k = 0; k < 2; k++) {
//                 temp.a[i][j] += m1.a[i][k] * m2.a[k][j];
//             }
//         }
//     }
//     return temp;
// }
// int main() {
//     Matrix m1, m2, m3;
//     cout << "Matrix 1:\n";
//     m1.input();
//     cout << "Matrix 2:\n";
//     m2.input();
//     m3 = m1 * m2;   // operator overloading
//     cout << "Result:\n";
//     m3.display();
//     return 0;
// }

// Ques 8 //
// #include <iostream>
// using namespace std;
// class Array {
// private:
//     int a[5];

// public:
//     void input() {
//         cout << "Enter 5 elements:\n";
//         for(int i = 0; i < 5; i++) {
//             cin >> a[i];
//         }
//     }
//     // Overload [] operator
//     int operator[](int index) {
//         if(index < 0 || index >= 5) {
//             cout << "Index out of bounds!\n";
//             return -1;
//         }
//         return a[index];
//     }
// };
// int main() {
//     Array arr;
//     arr.input();
//     cout << "Element at index 2: " << arr[2] << endl;
//     cout << "Element at index 7: " << arr[7] << endl;     // out of bounds
//     return 0;
// }

//     Ques 9     ///
// #include <iostream>
// using namespace std;
// class Input {
// public:
//     // Overload () operator
//     void operator()(int a, int b) {
//         cout << "Two numbers: " << a << " " << b << endl;
//     }
//     void operator()(int a, int b, int c) {
//         cout << "Three numbers: " << a << " " << b << " " << c << endl;
//     }
//     void operator()(int a, int b, int c, int d) {
//         cout << "Four numbers: " << a << " " << b << " " << c << " " << d << endl;
//     }
// };
// int main() {
//     Input obj;
//     obj(10, 20);
//     obj(1, 2, 3);
//     obj(5, 6, 7, 8);
//     return 0;
// }

//      ques 10      //
// #include <iostream>
// using namespace std;
// class Student {
// private:
//     int id;
//     char name[50];

// public:
//     // Overload >> operator (input)
//     friend istream& operator>>(istream &in, Student &s) {
//         cout << "Enter ID: ";
//         in >> s.id;
//         cout << "Enter Name: ";
//         in >> s.name;
//         return in;
//     }
//     // Overload << operator (output)
//     friend ostream& operator<<(ostream &out, Student &s) {
//         out << "ID: " << s.id << endl;
//         out << "Name: " << s.name << endl;
//         return out;
//     }
// };
// int main() {
//     Student s;
//     cin >> s;   
//     cout << s; 
//     return 0;
// }

//     Ques 11     //
// #include <iostream>
// using namespace std;
// class Test {
// private:
//     float x;

// public:
//     // Constructor for conversion
//     Test(float f) {
//         x = f;
//     }
//     // Display function
//     void show() {
//         cout << "Value = " << x << endl;
//     }
// };
// int main() {
//     float num = 5.5;
//     Test t = num;                // float → object conversion
//     t.show();
//     return 0;
// }

//     Ques 11     //
// #include <iostream>
// using namespace std;
// class Test {
// private:
//     float value;

// public:
//     // Constructor for conversion
//     Test(float f) {
//         value = f;
//     }
//     void show() {
//         cout << "Value = " << value << endl;
//     }
// };
// int main() {
//     float num = 7.5;
//     Test t = num;  
//     t.show();
//     return 0;
// }

//    Ques 12  //
// #include <iostream>
// using namespace std;
// class Test {
// private:
//     float value;

// public:
//     // Constructor
//     Test(float v) {
//         value = v;
//     }
//     // Conversion function (object → float)
//     operator float() {
//         return value;
//     }
// };
// int main() {
//     Test t(8.5);
//     float num;
//     num = t;            // object to float conversion
//     cout << "Value = " << num << endl;
//     return 0;
// }

//      Ques 13       //
// #include <iostream>
// #include <cmath>
// using namespace std;
// class Cartesian;   // forward declaration
// class Polar {
// private:
//     float r, angle;

// public:
//     Polar(float r1, float a1) {
//         r = r1;
//         angle = a1;
//     }
//     // Conversion function
//     operator Cartesian();
// };
// class Cartesian {
// private:
//     float x, y;

// public:
//     Cartesian(float x1 = 0, float y1 = 0) {
//         x = x1;
//         y = y1;
//     }

//     void show() {
//         cout << "x = " << x << " y = " << y << endl;
//     }
// };
// // Definition of conversion function
// Polar::operator Cartesian() {
//     float rad = angle * 3.14 / 180;   // degree → radian
//     float x = r * cos(rad);
//     float y = r * sin(rad);
//     return Cartesian(x, y);
// }
// int main() {
//     Polar p(10, 45);
//     Cartesian c;
//     c = p;         // conversion
//     c.show();
//     return 0;
// }