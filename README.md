# Exp-9-Pointers
# Aim
Write a c++ program:
1. To initialize pointers of different data types and print the required values.
2. To access elements of array using pointer.
3. To access elements of array without using pointer variable.

# Software Used
VS Code and c++ online compiler.
# Theory
Pointers are a fundamental feature of C++ that provide a powerful way to manage memory and facilitate dynamic data structures.

A pointer is a variable that stores the memory address of another variable. They allow for direct memory access and manipulation.

Pointers are a powerful feature of C++ that provide deep control over memory and data structures.

# Program Code
```
//Initialize Pointers of Different Data Types

//int
 #include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr;
    ptr=&a;
   cout<< "The value pointed by *ptr is: "<<*ptr << endl;
    cout << "The value in b is: " <<a << endl;
    cout << "The value in pointer variable ptr is: "<<(void*)ptr << endl;

    cout << "the address of variable b is: "<<&a << endl;
    ptr ++;
    cout<< "After increment the value in pointer variable ptr is: " << (void*)ptr << endl;
}

//float
 #include <iostream>
using namespace std;
int main()
{
    float a = 'A';
    float *ptr;
    ptr=&a;
     cout<< "The value pointed by *ptr is: "<<*ptr << endl;
    cout << "The value in b is: " <<a << endl;
    cout << "The value in pointer variable ptr is: "<<(void*)ptr << endl;

    cout << "the address of variable b is: "<<&a << endl;
    ptr ++;
    cout<< "After increment the value in pointer variable ptr is: " << (void*)ptr << endl;
}

//char
#include<iostream>
using namespace std;
int main()
{
    char a = 'c'; 
    

    char *ptr;

    ptr = &a;

    cout<< "The value pointed by *ptr is"<<*ptr << endl;
    cout << "The value in b is" <<a << endl;
    cout << "The value in pointer variable ptr is"<<(void*)ptr << endl;

    cout << "the address of variable b is "<<&a << endl;
    ptr ++;
    cout<< "After increment the value in pointer variable ptr is: " << (void*)ptr << endl;  
}
```
```
//Access elements of array using pointer

#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int a[5] = {3,7,2,1,8};
    ptr = &a[0];
    int i;
    for(i=0 ; i<5 ; i++)
    {
        cout << "Element "<< i+1 <<" "<<"="<<" "<<*ptr << endl;
        ptr ++;

    }
}
```
```
//Access elements of array without using pointer variable

#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int a[5] = {3,7,2,1,8};
    ptr = &a[0];
    int i;
    for(i=0 ; i<5 ; i++)
    {
        cout << "Element "<< i+1 <<" "<<"="<<" "<<*(a+i) << endl;
        ptr ++;
    }
}
```

# Output
### Initialize Pointers of Different Data Types
### int
![image](https://github.com/user-attachments/assets/c79b236f-87f7-4cf9-975e-d20ef610d30c)
### float
![image](https://github.com/user-attachments/assets/6a0f9108-6870-4f73-af27-cf2bba8ae97b)
### char
![image](https://github.com/user-attachments/assets/693a3b25-ede9-4eea-afbc-c002f77c735c)
### Access elements of array using pointer
![image](https://github.com/user-attachments/assets/e94228e3-514b-42ac-be97-3491a200c111)
### Access elements of array without using pointer variable
![image](https://github.com/user-attachments/assets/663bf2c4-5aa3-4c13-b999-8189cd20671f)

# Conclusion
We learnt to initialize pointers of different data types.

We learnt to access elements of array using pointers and without pointers variable.
