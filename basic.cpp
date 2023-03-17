#include <iostream>
using namespace std;
//  Classes have objects which have the same data type as defined in the class
//  class myClass{
//     string name;//class data
//  };
//  Constructors in C++
// Invoked as soon as the class objects are created.
// It can be parameterized as well.
class student
{
    string name;

public:
    int age;
    bool gender;
    student()
    {
        cout << "default_constructor" << endl;
    }

    //     Setters
    // Setters are public functions used to set private data members in the class.
    void setName(string s)
    {
        name = s;
    }

    //     Getters
    // Getters are public functions used to get private data members in the class.
    string getName()
    {
        return name;
    }
    void printInfo()
    {
        cout << "name= ";
        cout << name << endl;

        cout << "age= ";
        cout << age << endl;

        cout << "gender= ";
        cout << gender << endl;
    }
    student(string s, int a, int g)
    {
        cout << "parameterized constructor" << endl;
        name = s;
        age = a;
        gender = g;
    } // parameterized constructor

    //      Copy Constructors
    // To copy the class objects we use the copy constructor. Here a student object is
    // passed, it initializes the values to the new object.
    student(student &a)
    {
        cout << "copy constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    //     Shallow Copy
    // The object and its copy, point to the same memory address. If you make a change
    // in its copy it gets changed in the main copy as well and vice versa.

    // Deep Copy
    // The object and its copy, point to different addresses in the memory. If you make a
    // change in its copy it will not get changed in the main copy and vice versa.

    //     Destructors in C++
    // Invoked when the object goes out of scope or is explicitly destroyed by a call to
    // delete.
    ~student()
    {
        cout << "call destructor" << endl;
    }

    //     Operator overloading
    // We can overload operators( == , + , - ,etc), to work on class objects.
    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }
    // In the above code snippet, we can compare two class objects using ==.
    // Example: Student object a,b, we can compare from a == b.

    //     Function Overloading
    // Functions having the same name but different definitions. The invoked function
    // would depend on the arguments you pass to the functions.
    // area(5) //for circle
    // area(5, 10) //for rectangle
    // area of circle

    float area(int r)
    {
        return 3.141 * r * r;
    }
    // area of rectangle
    int area(int l, int r)
    {
        return l * r;
    }
};
int main()
{
    // student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     string s;
    //     cout << "name= ";
    //     cin>>s;
    //     arr[i].setName(s);
    //     cout << "age= ";
    //     cin >> arr[i].age;
    //     cout << "gender= ";
    //     cin >> arr[i].gender;
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].printInfo();
    // }
    student a("Anubhav", 20, 0);
    // a.getName();
    // a.printInfo();
    student b; // default constructor called
    student c = a;

    if (c == a)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Not Same" << endl;
    }
    //for function overloading
    student f;
    cout<<f.area(2)<<endl;
    cout<<f.area(2,4)<<endl;


    return 0;
}