
#include <iostream>
#include <string>
using namespace std;
class Book {
public:
    string title, author, ISBN;
};
class Library {
    Book books[10];
    int count;

public:
    Library() {
        count = 0;
    }
    // Add Book (pass by reference)
    bool addNewBook(string &title, string &author, string &ISBN) {
        if (count >= 10)
            return false;
        books[count].title = title;
        books[count].author = author;
        books[count].ISBN = ISBN;
        count++;
        return true;
    }
    // Remove Book (defined outside class)
    bool removeBooks(string &ISBN);
    // Display Books
    void displayDetails() {
        for (int i = 0; i < count; i++) {
            cout << books[i].title << " ";
            cout << books[i].author << " ";
            cout << books[i].ISBN << endl;
        }
    }
};
// Function defined outside using scope resolution
bool Library::removeBooks(string &ISBN) {
    for (int i = 0; i < count; i++) {
        if (books[i].ISBN == ISBN) {
            for (int j = i; j < count - 1; j++) {
                books[j] = books[j + 1];
            }
            count--;
            return true;
        }
    }
    return false;
}
int main(){
    Library lib;
    string t1 ="A", a1= "AA", i1="1";
    string t2 ="B", a2= "BB", i2="2";
    string t3 ="C", a3= "CC", i3="3";
    string t4 ="D", a4= "DD", i4="4";
    string t5 ="E", a5= "EE", i5="5";

    lib.addNewBook(t1,a1, i1);
    lib.addNewBook(t2,a2, i2);
    lib.addNewBook(t3,a3, i3);
    lib.addNewBook(t4,a4, i4);
    lib.addNewBook(t5,a5, i5);

    lib.removeBooks(i3);
    lib.displayDetails();
    return 0;

}
    