// ques1
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ofstream file("NUM.TXT");

//     for(int i = 1; i <= 200; i++) {
//         file << i << " ";
//     }

//     file.close();
//     cout << "Numbers written successfully";
// }

// ques2
// #include <iostream>
// #include <fstream>
// using namespace std;
// void countAlphabets() {
//     ifstream file("notes.txt.txt");
//     char ch;
//     int count = 0;
//     while(file.get(ch)) {
//         if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//             count++;
//     }
//     cout << "Total alphabets = " << count;
//     file.close();
// }
// int main() {
//     countAlphabets();
// }

// q3
// #include <iostream>
// #include <fstream>
// using namespace std;

// class Student {
//     int id;
//     char name[20];
// public:
//     void input() {
//         cout << "Enter ID and Name: ";
//         cin >> id >> name;
//     }
//     void display() {
//         cout << "ID: " << id << " Name: " << name;
//     }
// };

// int main() {
//     Student s;
//     fstream file;

//     file.open("data.dat", ios::out | ios::binary);
//     s.input();
//     file.write((char*)&s, sizeof(s));
//     file.close();

//     file.open("data.dat", ios::in | ios::binary);
//     file.read((char*)&s, sizeof(s));
//     s.display();
//     file.close();
// }

// // q4
// // #include <iostream>
// // #include <fstream>
// // using namespace std;
// int main() {
//     ifstream src("notes.txt.txt");   
//     ofstream dest("NUM.TXT");    
//     char ch;
//     while(src.get(ch)) {
//         dest.put(ch);
//     }
//     src.close();
//     dest.close();
//     cout << "File copied successfully";
// }
// q5
// #include <iostream>
// #include <fstream>
// #include <cstring>
// using namespace std;

// int main() {
//     char str[100];

//     cout << "Enter string: ";
//     cin.getline(str, 100);

//     cout << "Length = " << strlen(str) << endl;

//     ofstream file("string.txt");
//     file << str;
//     file.close();

//     ifstream file2("string.txt");
//     char ch;

//     cout << "File content: ";
//     while(file2.get(ch)) {
//         cout << ch;
//     }

//     file2.close();
// }


// q6 (a)
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ofstream f("abc.txt");
//     for(char ch='A'; ch<='Z'; ch++)
//         f << ch;
//     f.close();

//     ifstream file("abc.txt");
//     file.seekg(9);   // 10th position
//     char ch;
//     file.get(ch);

//     cout << "10th character: " << ch;
//     file.close();
// }

// b part
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     fstream file("abc.txt", ios::in | ios::out);

//     file.seekp(4); // 5th position
//     file.put('X');

//     file.close();
// }

// c part
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ifstream file("abc.txt");

//     file.seekg(0, ios::end);
//     int size = file.tellg();

//     cout << "File size: " << size << " bytes";
//     file.close();
// }

// d part
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ifstream file("abc.txt");

//     file.seekg(-1, ios::end);
//     char ch;
//     file.get(ch);

//     cout << "Last character: " << ch;
//     file.close();
// }

// e part
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ofstream file("data.txt");
//     file << "Hello this is a sample file for testing.";
//     file.close();

//     ifstream f("data.txt");

//     f.seekg(10);
//     cout << "Current position: " << f.tellg() << endl;

//     char ch;
//     while(f.get(ch)) {
//         cout << ch;
//     }

//     f.close();
// }

// f part
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     fstream file("hello.txt", ios::out | ios::in);

//     string str = "HelloWorld";

//     // write and show position
//     for(int i = 0; i < str.length(); i++) {
//         file.put(str[i]);
//         cout << "Position: " << file.tellp() << endl;
//     }

//     // replace "World" with "C++"
//     file.seekp(5);
//     file << "C++";

//     file.close();
// }