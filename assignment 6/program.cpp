// ////////////   QUES 1 /////
// #include <iostream>
// #include <string>
// using namespace std;
// class Book {
// public:
//     string title, author, ISBN;
// };

// class Library {
//     Book books[100];
//     int count;

// public:
//     Library() { 
//         count = 0; 
//     }

//     bool addNewBook(string &title, string &author, string &ISBN) {
//         if(count >= 100) return false;
//         books[count].title = title;
//         books[count].author = author;
//         books[count].ISBN = ISBN;
//         count++;
//         return true;
//     }
//     bool removeBooks(string &ISBN);
//     void displayDetails() {
//         for (int i = 0; i < count; i++) {
//             cout << i+1 << ". Title  : " << books[i].title << "\n";
//             cout << "   Author : " << books[i].author << "\n";
//             cout << "   ISBN   : " << books[i].ISBN << "\n";
//         }
//     }
// };
// bool Library::removeBooks(string &ISBN) {
//     for (int i = 0; i < count; i++) {
//         if (books[i].ISBN == ISBN) {
//             for (int j = i; j < count - 1; j++) {
//                 books[j] = books[j+1];
//             }
//             count--;
//             return true;
//         }
//     }
//     return false;
// }
// int main() {
//     Library lib;

//     string t1 = "Harry Potter",      a1 = "J.K. Rowling",       i1 = "ISBN001";
//     string t2 = "The Alchemist",     a2 = "Paulo Coelho",        i2 = "ISBN002";
//     string t3 = "1984",              a3 = "George Orwell",       i3 = "ISBN003";
//     string t4 = "Ikigai",            a4 = "Francesc Miralles",   i4 = "ISBN004";
//     string t5 = "Rich Dad Poor Dad", a5 = "Robert Kiyosaki",     i5 = "ISBN005";

//     cout << "Adding Books:\n";
//     cout << "Book 1 Added: " << (lib.addNewBook(t1, a1, i1) ? "Yes" : "No") << "\n";
//     cout << "Book 2 Added: " << (lib.addNewBook(t2, a2, i2) ? "Yes" : "No") << "\n";
//     cout << "Book 3 Added: " << (lib.addNewBook(t3, a3, i3) ? "Yes" : "No") << "\n";
//     cout << "Book 4 Added: " << (lib.addNewBook(t4, a4, i4) ? "Yes" : "No") << "\n";
//     cout << "Book 5 Added: " << (lib.addNewBook(t5, a5, i5) ? "Yes" : "No") << "\n";

//     lib.displayDetails();
//     string rem = "ISBN003";
//     cout << "\nRemoving book with ISBN003 (1984)...\n";
//     if (lib.removeBooks(rem))
//         cout << "Book Removed Successfully!\n";
//     else
//         cout << "Book Not Found!\n";

//     lib.displayDetails();
//     return 0;
// }

// // //////   QUES 2    /////
// #include <iostream>
// #include <string>
// using namespace std;
// class Book {
// public:
//     string title, author, ISBN;
//     // Default Constructor
//     Book() {
//         this->title = "";
//         this->author = "";
//         this->ISBN = "";
//     }
//     // Parameterized Constructor
//     Book(string title, string author, string ISBN) {
//         this->title = title;
//         this->author = author;
//         this->ISBN = ISBN;
//     }
//     // Copy Constructor
//     Book(Book &b) {
//         this->title = b.title;
//         this->author = b.author;
//         this->ISBN = b.ISBN;
//     }
// };
// class Library {
//     Book books[100];
//     int count;

// public:
//     Library() {
//         this->count = 0;
//     }

//     bool addBook(Book b) {
//         if (this->count >= 100) return false;
//         this->books[count] = b;
//         this->count++;
//         return true;
//     }
//     bool removeBooks(string ISBN) {
//         for (int i = 0; i < this->count; i++) {
//             if (this->books[i].ISBN == ISBN) {
//                 for (int j = i; j < this->count - 1; j++) {
//                     this->books[j] = this->books[j+1];
//                 }
//                 this->count--;
//                 return true;
//             }
//         }
//         return false;
//     }
//     void displayDetails() {
//         for (int i = 0; i < this->count; i++) {
//             cout << i+1 << ". Title  : " << this->books[i].title << "\n";
//             cout << "   Author : " << this->books[i].author << "\n";
//             cout << "   ISBN   : " << this->books[i].ISBN << "\n";
//         }
//     }
// };
// int main() {
//     Library lib;
//     // 1. Initializer List (direct initialization)
//     Book b1("Harry Potter", "J.K. Rowling", "ISBN001");
//     Book b2("The Alchemist", "Paulo Coelho", "ISBN002");
//     Book b3("1984", "George Orwell", "ISBN003");
//     lib.addBook(b1);
//     lib.addBook(b2);
//     lib.addBook(b3);

//     // 2. Dynamic Initialization (using new keyword)
//     cout << " Using Dynamic Initialization \n";
//     Book *b4 = new Book("Ikigai", "Francesc Miralles", "ISBN004");
//     Book *b5 = new Book("Rich Dad Poor Dad", "Robert Kiyosaki", "ISBN005");
//     lib.addBook(*b4);
//     lib.addBook(*b5);

//     // Copy Constructor demo
//     cout << "\n Copy Constructor Demo \n";
//     Book b6(b1);       // copies Harry Potter
//     cout << "Copied Book: " << b6.title << " by " << b6.author << "\n";

//     // Display all books
//     lib.displayDetails();

//     // Remove a book
//     cout << "\nRemoving 1984 (ISBN003) \n";
//     if (lib.removeBooks("ISBN003"))
//         cout << "Book Removed Successfully!\n";
//     else
//         cout << "Book Not Found!\n";

//     // Display after removal
//     lib.displayDetails();

//     // Free dynamic memory
//     delete b4;
//     delete b5;

//     return 0;
// }


//  ////  QUES 3  /////
// #include <iostream>
// #include <string>
// using std::cin;
// using std::cout;
// using std::endl;
// using std::string;

// class Account {
// public:
//     const long accountNumber;   // const account number
//     long transactionID;
//     string transactionType;
//     double balance;

//     // Parameterized Constructor
//     Account(const long accNum, const double initialBalance)
//         : accountNumber(accNum) {  
//         this->transactionID = 1000;
//         this->balance = initialBalance;
//         this->transactionType = "None";
//     }
//     // a. Debit (depositAmount = money going OUT)
//     long depositAmount(const long to, const long from, const double amount) {
//         if (this->accountNumber == from) {
//             if (this->balance < amount) {
//                 cout << "Account " << from << ": Insufficient balance!\n";
//                 return -1;
//             }
//             this->balance -= amount;
//             this->transactionType = "Debited to Account " + std::to_string(to);
//             this->transactionID++;
//         }
//         return this->transactionID;
//     }

//     // b. Credit (creditAmount = money coming IN)
//     long creditAmount(const long to, const long from, const double amount) {
//         if (this->accountNumber == to) {
//             this->balance += amount;
//             this->transactionType = "Credited from Account " + std::to_string(from);
//             this->transactionID++;
//         }
//         return this->transactionID;
//     }

//     // c. Display — const function (cannot modify any member)
//     void displayDetails() const {
//         cout << "Account Number  : " << this->accountNumber << endl;
//         cout << "Balance         : Rs." << this->balance << endl;
//         cout << "Last Transaction: " << this->transactionType << endl;
//         cout << "Transaction ID  : " << this->transactionID << endl;
//     }
// };

// // Helper function to transfer money between accounts
// void transfer(Account &sender, Account &receiver, const double amount) {
//     cout << "\nTransferring Rs." << amount;
//     cout << " from Account " << sender.accountNumber;
//     cout<< " to Account " << receiver.accountNumber << "\n";
//     long tid1 = sender.depositAmount(receiver.accountNumber, sender.accountNumber, amount);
//     long tid2 = receiver.creditAmount(receiver.accountNumber, sender.accountNumber, amount);

//     if (tid1 != -1)
//         cout << "Transaction Successful! Transaction ID: " << tid1 << "\n";
// }
// int main() {
//     Account accounts[5] = {
//         Account(1001, 5000.0),
//         Account(1002, 8000.0),
//         Account(1003, 3000.0),
//         Account(1004, 12000.0),
//         Account(1005, 6500.0)
//     };
//     for (int i = 0; i < 5; i++) {
//         accounts[i].displayDetails();
//     }
//     transfer(accounts[0], accounts[1], 1000.0);
//     transfer(accounts[2], accounts[4], 500.0);
//     transfer(accounts[3], accounts[0], 2000.0);
//     transfer(accounts[1], accounts[2], 300.0);
//     transfer(accounts[4], accounts[3], 9000.0);
//     for (int i = 0; i < 5; i++) {
//         accounts[i].displayDetails();
//     }
//     return 0;
// }

// //     ques 4    //
// #include <iostream>
// #include <string>
// using std::cout;
// using std::cin;
// using std::endl;
// // Forward declaration
// class Savings;

// class Current {
//     double balance;

// public:
//     Current(double bal) {
//         this->balance = bal;
//     }
//     friend void addAccounts(Current c, Savings s);

//     void displayDetails() const {
//         cout << "Current Account Balance : Rs." << this->balance << endl;
//     }
// };
// class Savings {
//     double balance;

// public:
//     Savings(double bal) {
//         this->balance = bal;
//     }

//     // Declare friend function in both classes
//     friend void addAccounts(Current c, Savings s);

//     void displayDetails() const {
//         cout << "Savings Account Balance : Rs." << this->balance << endl;
//     }
// };
// // Friend function — can access private members of BOTH classes
// void addAccounts(Current c, Savings s) {
//     double total = c.balance + s.balance;   // accessing private directly
//     cout << "\n--- Total Balance ---\n";
//     cout << "Current Balance : Rs." << c.balance << endl;
//     cout << "Savings Balance : Rs." << s.balance << endl;
//     cout << "Total Combined  : Rs." << total << endl;
// }

// int main() {
//     Current c1(15000.0);
//     Savings s1(25000.0);
//     c1.displayDetails();
//     s1.displayDetails();
//     addAccounts(c1, s1);
//     return 0;
// }

// ques 5 //
// #include <iostream>
// using std::cout;
// using std::endl;
// class Complex {
//     double real;
//     double imaginary;

// public:
//     // Parameterized Constructor
//     Complex(double real, double imaginary) {
//         this->real = real;
//         this->imaginary = imaginary;
//     }

//     // Copy Constructor
//     Complex(Complex &c) {
//         this->real = c.real;
//         this->imaginary = c.imaginary;
//     }
//     void display() const {
//         if (this->imaginary < 0)
//             cout << this->real << " - " << -(this->imaginary) << "i" << endl;
//         else
//             cout << this->real << " + " << this->imaginary << "i" << endl;
//     }
//     // Declare friend function
//     friend void sum(Complex c1, Complex c2);
// };
// // Friend function — accesses private members of both objects
// void sum(Complex c1, Complex c2) {
//     double realSum      = c1.real      + c2.real;
//     double imaginarySum = c1.imaginary + c2.imaginary;
//     Complex result(realSum, imaginarySum);
//     cout << "Number 1 : ";  c1.display();
//     cout << "Number 2 : ";  c2.display();
//     cout << "Sum      : ";  result.display();
// }
// int main() {
//     // Parameterized constructor
//     Complex c1(3.0, 4.0);    //  3 + 4i
//     Complex c2(1.0, -2.0);   //  1 - 2i
//     // Copy constructor
//     Complex c3(c1);           // copy of c1
//     cout << "c1 : "; c1.display();
//     cout << "c2 : "; c2.display();
//     cout << "c3 (copy of c1) : "; c3.display();
//     // Call friend function to add
//     sum(c1, c2);
//     // Another addition
//     Complex c4(5.0, 6.0);
//     Complex c5(2.0, 3.0);
//     sum(c4, c5);
//     return 0;
// }
