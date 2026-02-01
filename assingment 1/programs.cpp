// #include<iostream>
// using namespace std;
///// QUESTION 1
// int main(){        
//     cout<<"Hello world";
//     return 0;
// }

/////////////////QUESTION 2

// int main(){
//     int a;
//     float b;
//     char ch;

//     cout<<"enter an integer:";
//     cin>>a;
//     cout<<"enter a float number:";
//     cin>>b;
//     cout<<"enter a character:";
//     cin>>ch;
//     cout<<"integer:\n"<<a;
//     cout<<"decimal number:\n"<<b;
//     cout<<"character:\n"<<ch;
//     return 0;

// }

/////////////////////  QUESTION 3

// int main(){
//     float a,b;
//     cout<<"enter first numbers:";
//     cin>>a;
//     cout<<"enter second numbers:";
//     cin>>b;
//     cout<<"\n addition:"<<a+b;
//     cout<<"\n subtraction:"<<a-b;
//     cout<<"\n multiplication:"<<a*b;
//     cout<<"\n division:"<<a/b;
//     return 0;


// }



///////////////   QUESTION 4

// int main(){
//     float t,f;
//     cout<<"enter temperature in celsius:";
//     cin>>t;
//     f=(9*t)/5+32;
//     cout<<"temperature in fahrenheit:"<<f;
//     return 0;

// }


/////////////    QUESTION 5

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     cout << "Hello\nWorld" << endl;
//     cout << "Hello\tWorld" << endl;
//     cout << "ABC\bD" << endl;        //// removes c
//     cout << setw(10) << "Hello" << endl;

//     return 0;
// }

////////////////////   QUESTION 6
#include<iostream>
using namespace std;
// int main(){
//     int x;
//     cout<<"enter a number:";
//     cin>>x;
//     x+=5;
//     cout<<"\n after += :"<<x;
//     x-=10;
//     cout<<"\n after -= :"<<x;
//     return 0;
// }


///////////////   QUESTION 7

// int main(){
//     int x,y;
//     cout<<"enter x:";
//     cin>>x;
//     cout<<"enter y:";
//     cin>>y;
//     x=x^y;
//     y=x^y;
//     x=x^y;
//     cout<<"after swapping:";
//     cout<<"x="<<x<<endl;
//     cout<<"y="<<y<<endl;
//     return 0;
// }


/////////// QUESTION 8

// int main(){
//     int days;
//     float fine;
//     cout<<"enter number of days:";
//     cin>>days;
//     if(days<=5){
//         fine=days*0.50;
//         cout<<"fine= Rs:"<<fine;
//     }
//     else if(days<=10){
//         fine=days*1;
//         cout<<"fine= Rs:"<<fine;
//     }
//     else if(days<=30){
//         fine=days*5;
//         cout<<"fine= Rs:"<<fine;
//     }
//     else{
//         cout<<"membership cancelled";
//     }
//     return 0;
// }


////////////////////////     QUESTION 9

// int main() {
//     int x, y, choice;

//     cout << "Enter two numbers: ";
//     cin >> x >> y;

//     cout << "\n Addition";
//     cout << "\n Subtraction";
//     cout << "\n Multiplication";
//     cout << "\n Division";
//     cout << "\n Enter your choice: ";
//     cin >> choice;

//     switch (choice) {
//         case 1:
//             cout << "Addition = " << x + y;
//             break;
//         case 2:
//             cout << "Subtraction = " << x - y;
//             break;
//         case 3:
//             cout << "Multiplication = " << x* y;
//             break;
//         case 4:
//             cout << "Division = " << (float)x / y;
//             break;
//         default:
//             cout << "Invalid choice";
//     }

//     return 0;
// }

////////////////     QUESTION 10

// int main(){
//     int x;
//     cout<<"enter a number:";
//     cin>> x;
//     if(x%2==0){
//         cout<<"even number:"<<x;
//     }
//     else{
//         cout<<"odd number:"<<x;

//     }
//     return 0;
// }