// question 1
// #include <iostream>
// using namespace std;
// template <typename T>
// void swapValues(T &a, T &b) {
//     T temp = a;
//     a = b;
//     b = temp;
// }
// int main() {
//     int x = 5, y = 10;
//     swapValues(x, y);
//     cout << "After swap: " << x << " " << y << endl;
//     return 0;
// }

// // ques 2
// #include <iostream>
// using namespace std;
// template <typename T>
// T findMin(T arr[], int n) {
//     T min = arr[0];
//     for(int i = 1; i < n; i++) {
//         if(arr[i] < min)
//             min = arr[i];
//     }
//     return min;
// }
// int main() {
//     int arr[] = {5, 2, 8, 1, 9};
//     cout << "Minimum = " << findMin(arr, 5);
// }

// ques 3
// #include <iostream>
// using namespace std;
// template <typename T>
// T findMax(T arr[], int n) {
//     T max = arr[0];
//     for(int i = 1; i < n; i++) {
//         if(arr[i] > max)
//             max = arr[i];
//     }
//     return max;
// }
// int main() {
//     int arr[] = {5, 2, 8, 1, 9};
//     cout << "Maximum = " << findMax(arr, 5);
// }

// ques 4
// #include <iostream>
// using namespace std;
// template <typename T>
// void bubbleSort(T arr[], int n) {
//     for(int i = 0; i < n-1; i++) {
//         for(int j = 0; j < n-i-1; j++) {
//             if(arr[j] > arr[j+1]) {
//                 T temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }
// int main() {
//     int arr[] = {5, 3, 2, 4, 1};
//     bubbleSort(arr, 5);
//     cout << "Sorted array: ";
//     for(int i = 0; i < 5; i++){
//          cout << arr[i] << " ";
//     }
// } 

// Question 5
// #include <iostream>
// using namespace std;
// template <typename T>
// int linearSearch(T arr[], int n, T key) {
//     for(int i = 0; i < n; i++) {
//         if(arr[i] == key)
//             return i;
//     }
//     return -1;
// }
// int main() {
//     int arr[] = {10, 20, 30, 40};
//     int pos = linearSearch(arr, 4, 30);
//     if(pos != -1){
//         cout << "Found at index: " << pos;
//     }
//     else
//         cout << "Not found";
// }
 
// class  template
// Question 1
// #include <iostream>
// using namespace std;
// template <typename T>
// class Stack {
//     T arr[100];
//     int top;
// public:
//     Stack() { top = -1; }

//     void push(T x) {
//         arr[++top] = x;
//     }
//     void pop() {
//         if(top == -1)
//             cout << "Stack Empty\n";
//         else
//             cout << "Popped: " << arr[top--] << endl;
//     }
// };
// int main() {
//     Stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.pop();
// }

// question 2
// #include <iostream>
// using namespace std;
// template <typename T>
// class Queue {
//     T arr[100];
//     int front, rear;
// public:
//     Queue() { front = rear = -1; }

//     void enqueue(T x) {
//         if(rear == -1) front = 0;
//         arr[++rear] = x;
//     }

//     void dequeue() {
//         if(front == -1 || front > rear)
//             cout << "Queue Empty\n";
//         else
//             cout << "Removed: " << arr[front++] << endl;
//     }
// };
// int main() {
//     Queue<int> q;
//     q.enqueue(10);
//     q.enqueue(20);
//     q.dequeue();
// }

// Question 3
// #include <iostream>
// using namespace std;
// template <typename T1, typename T2>
// class Pair {
//     T1 a;
//     T2 b;
// public:
//     Pair(T1 x, T2 y) {
//         a = x;
//         b = y;
//     }
//     void display() {
//         cout << "A = " << a << " B = " << b << endl;
//     }
// };
// int main() {
//     Pair<int, float> p(10, 5.5);
//     p.display();
// }

// Question 4
// #include <iostream>
// using namespace std;
// template <typename T>
// class Calculator {
//     T a, b;
// public:
//     Calculator(T x, T y) {
//         a = x;
//         b = y;
//     }
//     void display() {
//         cout << "Add: " << a + b << endl;
//         cout << "Sub: " << a - b << endl;
//         cout << "Mul: " << a * b << endl;
//         cout << "Div: " << a / b << endl;
//     }
// };
// int main() {
//     Calculator<int> c(10, 5);
//     c.display();
// }

// Question 5
// #include <iostream>
// using namespace std;
// template <typename T>
// class Array {
//     T arr[100];
//     int n;
// public:
//     void input() {
//         cout << "Enter size: ";
//         cin >> n;
//         for(int i = 0; i < n; i++)
//             cin >> arr[i];
//     }
//     void display() {
//         for(int i = 0; i < n; i++)
//             cout << arr[i] << " ";
//     }
// };
// int main() {
//     Array<int> a;
//     a.input();
//     a.display();
// }