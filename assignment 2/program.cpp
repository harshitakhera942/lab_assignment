
    // ////////     QUESTION 1
// #include <iostream>
// using namespace std;

// struct Student
// {
//     string name;
//     int rollNo;
//     string degree;
//     string hostel;
//     float cgpa;

//     void addDetails()
//     {
//         cout<<"Enter Name: ";
//         cin>>name;
//         cout<<"Enter Roll No: ";
//         cin>>rollNo;
//         cout<<"Enter Degree: ";
//         cin>>degree;
//         cout<<"Enter Hostel: ";
//         cin>>hostel;
//         cout<<"Enter CGPA: ";
//         cin>>cgpa;
//     }
//     void updateDetails(){
//         cout<<"\n enter updated degree:";
//         cin>>degree;
//         cout<<"\n enter updated roll no:";
//         cin>>rollNo;

//     }
//     void updateCGPA()
//     {
//         cout<<"\n Enter new CGPA: ";
//         cin>>cgpa;
//     }
//     void updateHostel()
//     {
//         cout<<"\n Enter new Hostel: ";
//         cin>>hostel;
//     }
//     void displayDetails()
//     {
//         cout<<"\nName: "<<name;
//         cout<<"\nRoll No: "<<rollNo;
//         cout<<"\nDegree: "<<degree;
//         cout<<"\nHostel: "<<hostel;
//         cout<<"\nCGPA: "<<cgpa;
//     }
// };

// int main()
// {
//     Student s;
//     s.addDetails();
//     s.updateDetails();
//     s.updateCGPA();
//     s.updateHostel();
//     s.displayDetails();
//     return 0;
// }

// /////                  QUESTION 2

// #include <iostream>
// using namespace std;

// class Student
// {
//     private:                        // DATA MEMBERS PRIVATE
//     string name;
//     int roll;
//     string degree;
//     string hostel;
//     float cgpa; 
//     void privateFun()                 // PRIVATE MEMBER FUNCTION
//     {
//         cout<<"\nPrivate function called";
//     }
//     public:                      // PUBLIC FUNCTIONS
//     void addDetails()
//     {
//         cout<<"Enter Name: ";
//         cin>>name;
//         cout<<"Enter Roll No: ";
//         cin>>roll;
//         cout<<"Enter Degree: ";
//         cin>>degree;
//         cout<<"Enter Hostel: ";
//         cin>>hostel;
//         cout<<"Enter CGPA: ";
//         cin>>cgpa;
//     }

//     void updateDetails()
//     {
//         cout<<"\nUpdate Name: ";
//         cin>>name;
//         cout<<"\n Update Degree: ";
//         cin>>degree;
//     }

//     void updateCGPA()
//     {
//         cout<<"\n Enter new CGPA: ";
//         cin>>cgpa;
//     }

//     void updateHostel()
//     {
//         cout<<"\n Enter new Hostel: ";
//         cin>>hostel;
//     }

//     void displayDetails()
//     {
//         privateFun();               // PRIVATE FUNCTION INSIDE PUBLIC
//         cout<<"\nName: "<<name;
//         cout<<"\nRoll: "<<roll;
//         cout<<"\nDegree: "<<degree;
//         cout<<"\nHostel: "<<hostel;
//         cout<<"\nCGPA: "<<cgpa;
//     }
// };
// int main()
// {
//     Student s;
//     s.addDetails();
//     s.updateDetails();
//     s.updateCGPA();
//     s.updateHostel();
//     s.displayDetails();
//     return 0;
// }

// ///           QUESTION 3
// #include <iostream>
// using namespace std;
// class Demo
// {
// private:
//     void privateFunction()     
//     {
//         cout<<"This is Private Function"<<endl;
//     }
// public:
//     void publicFunction()      
//     {
//         cout<<"This is Public Function"<<endl;
//         privateFunction();                         // PRIVATE CALLED INSIDE PUBLIC
//     }
// };
// int main()
// {
//     Demo d;
//     d.publicFunction();       
//     return 0;
// }

// ////           QUESTION 4
// #include <iostream>
// using namespace std;
// class Rectangle
// {
//     int width, height;   // data members
// public:
//     void getdata()
//     {
//         cout<<"Enter width: ";
//         cin>>width;
//         cout<<"Enter height: ";
//         cin>>height;
//     }
//     void calculatearea()
//     {
//          int area = width * height;
//         cout<<"Area of Rectangle = "<<area;
//     }
// };
// int main()
// {
//     Rectangle r;
//     r.getdata();         
//     r.calculatearea();   
//     return 0;
// }

//               QUESTION 5
// #include <iostream>
// using namespace std;
// class Complex
// {
//     float real, imag;
// public:
//     void getData()
//     {
//         cout<<"\n Enter real part: ";
//         cin>>real;
//         cout<<"\n Enter imaginary part: ";
//         cin>>imag;
//     }
//     void show()
//     {
//         cout<<real<<" + "<<imag<<"i"<<endl;
//     }
//     Complex add(Complex c)                      
//    {
//         Complex temp;
//         temp.real = real + c.real;
//         temp.imag = imag + c.imag;
//         return temp;
//     }
// };
// int main()
// {
//     Complex c1, c2, c3;
//     cout<<"First Complex Number\n";
//     c1.getData();
//     cout<<"\nSecond Complex Number\n";
//     c2.getData();
//     cout<<"\nFirst Number = ";
//     c1.show();
//     cout<<"\n Second Number = ";
//     c2.show();
//     c3 = c1.add(c2);                                    // passing object & receiving object
//     cout<<"\nSum = ";
//     c3.show();
//     return 0;
// }


// ////     Question 6 (a)
// #include <iostream>
// using namespace std;
// class Demo
// {
//     public:
//     void show();               
// };
// void Demo::show()
// {
//     cout<<"Function defined outside class";
// }
// int main()
// {
//     Demo d;
//     d.show();
//     return 0;
// }

// ///      Question 6 (b)
// #include <iostream>
// using namespace std;
// int x = 10;                                 // global variable
// int main()
// {
//     int x = 20;                             // local variable
//     cout<<"Local x = "<<x<<endl;
//     cout<<"Global x = "<<::x;
//     return 0;
// }

// //////     Question 6 (c)
// #include <iostream>
// using namespace std;
// class Test
// {
//     public:
//     static int a;
// };
// int Test::a = 50;
// int main()
// {
//     cout<<Test::a;
//     return 0;
// }

//////              Question 6 (d)
// #include <iostream>
// int main()
// {
//     std::cout<<"Hello World";
//     return 0;
// }
 
// ///        Question 7

#include <iostream>
using namespace std;
namespace first
{
    int x = 10;
}
namespace second
{
    int x = 20;
}
int main()
{
    cout<<"Value from first namespace = "<<first::x<<endl;
    cout<<"Value from second namespace = "<<second::x;
    return 0;
}
