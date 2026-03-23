// Ques 1  
// #include <iostream>
// using namespace std;
// class Base {
// public:
//     void showBase() {
//         cout << "This is Base class" << endl;
//     }
// };
// class Derived : public Base {
// public:
//     void showDerived() {
//         cout << "This is Derived class" << endl;
//     }
// };
// int main() {
//     Base b;
//     Derived d;

//     b.showBase();
//     d.showBase();         // inherited function
//     d.showDerived();

//     return 0;
// }


// Ques 2
// #include <iostream>
// using namespace std;
// class Base {
// protected:
//     int num;
// public:
//     void setValue(int n) {
//         num = n;
//     }
// };
// class Derived : public Base {
// public:
//     void display() {
//         cout << "Value = " << num << endl; // accessible
//     }
// };
// int main() {
//     Derived d;
//     d.setValue(10);
//     d.display();
//     return 0;
// }

// ///  Ques 3
// #include <iostream>
// using namespace std;
// class Base {
// public:
//     int a = 10;
// protected:
//     int b = 20;
// private:
//     int c = 30;
// };
// class Derived : public Base {
// public:
//     void show() {
//         cout << a << endl; // public
//         cout << b << endl; // protected
//         // c not accessible
//     }
// };
// int main() {
//     Derived d;
//     d.show();
// }

// //// QUES 4 (a)
// #include <iostream>
// using namespace std;
// class A {
// public:
//     void showA() { cout << "Class A" << endl; }
// };
// class B : public A {
// public:
//     void showB() { cout << "Class B" << endl; }
// };
// int main() {
//     B obj;
//     obj.showA();
//     obj.showB();
// }

// Ques 4(b)
// #include <iostream>
// using namespace std;
// class A {
// public:
//     void showA() { cout << "Class A" << endl; }
// };
// class B {
// public:
//     void showB() { cout << "Class B" << endl; }
// };
// class C : public A, public B {
// };
// int main() {
//     C obj;
//     obj.showA();
//     obj.showB();
// }

// Ques 4(c)
// #include <iostream>
// using namespace std;
// class A {
// public:
//     void show() { cout << "Base Class A" << endl; }
// };
// class B : public A {};
// class C : public A {};
// int main() {
//     B b;
//     C c;
//     b.show();
//     c.show();
// 

// Ques 4(d)
// #include <iostream>
// using namespace std;
// class A {
// public:
//     void showA() { cout << "Class A" << endl; }
// };
// class B : public A {
// };
// class C : public B {
// };
// int main() {
//     C obj;
//     obj.showA();
// }

// Ques 4(e)
// #include <iostream>
// using namespace std;
// class A {
// public:
//     void showA() { cout << "Class A" << endl; }
// };
// class B : public A {};
// class C : public A {};
// class D : public B, public C {};
// int main() {
//      D obj;
//     obj.B::showA();   // resolve ambiguity
// }

// Ques 5
// #include <iostream>
// using namespace std;
// class Base {
// public:
//     Base() { cout << "Base Constructor" << endl; }
//     ~Base() { cout << "Base Destructor" << endl; }
// };
// class Derived : public Base {
// public:
//     Derived() { cout << "Derived Constructor" << endl; }
//     ~Derived() { cout << "Derived Destructor" << endl; }
// };
// int main() {
//     Derived d;
// }

// Ques 6
// #include <iostream>
// using namespace std;
// class Book {
// public:
//     string title, author;
//     float price;

//     void getBook() {
//         cout << "Enter title ";
//         cin >> title;
//         cout << "Enter author";
//         cin >> author ;
//         cout << "Enter price ";
//         cin >> price;
//     }
// };
// class Textbook : public Book {
// public:
//     string subject;
//     void getTextbook() {
//         cout << "Enter subject: ";
//         cin >> subject;
//     }
//     void display() {
//         cout << title << " " <<endl;
//         cout << author << " "<<endl;
//         cout  << price << " " << endl;
//     }
// };
// int main() {
//     Textbook t;
//     t.getBook();
//     t.getTextbook();
//     t.display();
// }

// Ques 7
// #include <iostream>
// using namespace std;
// class Speedometer {
// public:
//     int speed;
// };
// class FuelGauge {
// public:
//     int fuel;
// };
// class Thermometer {
// public:
//     int temperature;
// };
// class CarDashboard : public Speedometer,
//                      public FuelGauge,
//                      public Thermometer {
// public:
//     void display() {
//         cout << "Speed: " << speed << endl;
//         cout << "Fuel: " << fuel << endl;
//         cout << "Temp: " << temperature << endl;
//     }
// };
// int main() {
//     CarDashboard car;
//     car.speed = 80;
//     car.fuel = 60;
//     car.temperature = 35;
//     car.display();
// }

// Ques 8
// #include <iostream>
// using namespace std;
// class LibraryUser {
// public:
//     string name;
//     int id;
// };
// class Student : public LibraryUser {
// public:
//     int grade;
// };
// class Teacher : public LibraryUser {
// public:
//     string department;
// };
// int main() {
//     Student s;
//     s.name = "Aman";
//     s.id = 1;
//     s.grade = 10;
//     Teacher t;
//     t.name = "Ravi";
//     t.id = 2;
//     t.department = "Math";
//     cout << s.name << " " << s.grade << endl;
//     cout << t.name << " " << t.department << endl;
// }

// Ques 9
// #include <iostream>
// using namespace std;
// class Vehicle {
// public:
//     string make;
//     int year;
// };
// class Truck : public Vehicle {
// public:
//     int load_capacity;
// };
// class RefrigeratedTruck : public Truck {
// public:
//     int temperature_control;
//     void display() {
//         cout << make << " " << year << endl;
//         cout << "Load: " << load_capacity << endl;
//         cout << "Temp Control: " << temperature_control << endl;
//     }
// };
// int main() {
//     RefrigeratedTruck r;
//     r.make = "Tata";
//     r.year = 2022;
//     r.load_capacity = 5000;
//     r.temperature_control = -5;
//     r.display();
// }

// ////////
#include <iostream>
using namespace std;
class Person {
public:
    string name;
};
class Staff : virtual public Person {
public:
    int employee_id;
};
class Student : virtual public Person {
public:
    int student_id;
};
class TeachingAssistant : public Staff, public Student {
public:
    void display() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employee_id << endl;
        cout << "Student ID: " << student_id << endl;
    }
};
int main() {
    TeachingAssistant ta;
    ta.name = "Rahul";
    ta.employee_id = 100;
    ta.student_id = 200;
    ta.display();
}

