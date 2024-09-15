/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream> //i/o library
using namespace std; //використання пространства імен

int main() //заголовок основної функції
{ //початок виконання задачі 
    int a; //декларація змінної
    cout <<"Enter value a : "; //виведення тексту до консолі
    cin >> a; //введення змінної з консолі
    int res = a - 5; //обчислення результату
    cout << "a-5: "<< res; //виведення результату з консолі 
    return 0; //повернення успішного завершення програми
} //кінець виконуваної частини