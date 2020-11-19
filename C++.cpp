#include <iostream>
#include <string>
using namespace std;

int main() {
   cout << "Hello C++ World!\n";
   cout << "I am learning C++" << endl;
   cout << "So let's get started";

   int x;
   cout << "Type a number: "; // Type a number and press enter
   cin >> x; // Get user input from the keyboard
   cout << "Your number is: " << x; // Display the input value

   string fullName;
   cout << "Type your full name: "; // Type your full name: John Doe
   cin >> fullName;
   cout << "Your name is: " << fullName; // Your name is: John
   // it doesn't print 'Doe' because cin considers blank space, tabulation, ...
   // so let's use getline()
   getline (cin, fullName);
   cout << "Your name is: " << fullName; // Your name is: John does

   // datatypes
   int myNum = 5;               // Integer
   float myFloatNum = 5.99;     // Floating point number
   double myFloatNum = 5.99;    // Floating point number
   char myLetter = 'D';         // Character
   string myText = "Hello";     // String
   bool myBoolean = true;       // Boolean (true or false)

   int myNum = 15;  // myNum is 15
   myNum = 10;  // Now myNum is 10
   cout << myNum;  // Outputs 10
   const int myNum = 15;  // myNum will always be 15

   int myAge = 35;
   cout << "I am " << myAge << " years old.";

   // operations
   int x = 5;
   int y = 6;
   int sum = x + y;
   cout << sum;

   int x = 5, y = 6, z = 50;
   cout << x + y + z;

   cout << x + y;
   cout << x - y;
   cout << x * y;
   cout << x / y;
   cout << x % y;
   cout << x < y;
   cout << x > y;
   cout << x <= y;
   cout << x >= y;
   cout << x = y;
   cout << x == y;
   cout << x != y;
   cout << x && y;
   cout << x || y;
   cout << x ! y;
   cout << ++x;  // 6
   cout << --x;  // 4

   // string
   string myString = "Hello";
   cout << myString[0]; // Outputs H

   string myString = "Hello";
   myString[0] = 'J';
   cout << myString; // Outputs Jello

   string firstName = "John";
   string lastName = "Doe";
   string fullName = firstName + " " + lastName;
   cout << fullName; // Outputs John Doe

   string firstName = "John ";
   string lastName = "Doe";
   string fullName = firstName.append(lastName);
   cout << fullName; // Outputs John Doe

   string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   cout << "The length of the txt string is: " << txt.length(); // Outputs The length of the txt string is: 26
   cout << "The length of the txt string is: " << txt.size();  // Outputs The length of the txt string is: 26

   // array
   int arrayOfInts[5];
   int arrayOfInts[5] = {10, 20, 30, 40, 50};
   int arrayOfInts[] = {10, 20, 30, 40, 50};
   int arrayOfInts[5] = {10,20}; // 10, 20, 0, 0, 0

   char arrayOfChars[5]; // declare the array and allocate the memory, don't initialize
   char arrayOfChars[5] = { 'a', 'b', 'c', 'd', 'e' } ; //declare and initialize
   double arrayOfDoubles[5] = {1.14159, 2.14159, 3.14159, 4.14159, 5.14159};
   string arrayOfStrings[5] = { "C++", "is", "super", "duper", "great!"};

   int array[5] = { 10/*Element no.0*/, 20/*Element no.1*/, 30, 40, 50/*Element no.4*/};
   cout << array[4]; //outputs 50
   cout << array[0]; //outputs 10

   int const n_rows = 3;
   int const n_cols = 7;
   int const m[n_rows][n_cols] ={{ 1, 2, 3, 4, 5, 6, 7 },
                                 { 8, 9, 10, 11, 12, 13, 14 },
                                 { 15, 16, 17, 18, 19, 20, 21 }};

   // if, else if
   int time = 22;
   if (time < 10) {
     cout << "Good morning.";
   } else if (time < 20) {
     cout << "Good day.";
   } else {
     cout << "Good evening.";
   }  // Outputs "Good evening."

   // short hand if else
   int time = 20;
   string result = (time < 18) ? "Good day." : "Good evening.";
   cout << result; // Outputs "Good evening."

   // switch break
   int day = 4;
   switch (day) {
     case 1:
       cout << "Monday";
       break;
     case 2:
       cout << "Tuesday";
       break;
     case 3:
       cout << "Wednesday";
       break;
     case 4:
       cout << "Thursday";
       break;
     case 5:
       cout << "Friday";
       break;
     case 6:
       cout << "Saturday";
       break;
     case 7:
       cout << "Sunday";
       break;
   }  // Outputs "Thursday" (day 4)

   // switch default
   int day = 4;
   switch (day) {
     case 6:
       cout << "Today is Saturday";
       break;
     case 7:
       cout << "Today is Sunday";
       break;
     default:
       cout << "Looking forward to the Weekend";
   }  // Outputs "Looking forward to the Weekend"

   // for
   for(int i = 0; i < 10; i++) {
      cout << i << std::endl;
   }  // End of line; "0 1 2 3 4 5 6 7 8 9"

   string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
   for (int i = 0; i < 4; i++) {
      cout << i << ": " << cars[i] << "\n";
  } // Outputs 0: Volvo
    //         1: BMW
    //         2: Ford
    //         3: Mazda

   // for break
   for (int i = 0; i < 10; i++) {
      if (i == 4)
         break; // this will immediately exit our loop
      cout << i << '\n';
   }  // 1 2 3

   // for continue
   for (int i = 0; i < 6; i++) {
      if (i % 2 == 0) // evaluates to true if i is even
         continue; // this will immediately go back to the start of the loop
         /* the next line will only be reached if the above "continue" statement does not execute */
      cout << i << " is an odd number\n";
   }  // 1 is an odd number
      // 3 is an odd number
      // 5 is an odd number

   // while
   int i = 0;
   while (i < 10) {
      cout << i << " ";
      ++i; // Increment counter
   }  // End of line; "0 1 2 3 4 5 6 7 8 9"

   // do while
   int i = 0;
   do {
      cout << i;
      ++i; // Increment counter
   } while (i < 0); // End of line; 0

   // do while break
   int i =0;
   do {
      cout << i;
      ++i; // Increment counter
      if (i > 5){
         break
      }
   } while (true); // End of line; 0 1 2 3 4 5

   // do while continue
   int i =0;
   do {
      cout << i;
      ++i; // Increment counter
      if (i > 5){
         continue
      }
   } while (true); // End of line; Infinte loop

   // pointers
   string food = "Pizza";  // food variable
   string &meal = food;    // reference to food
   cout << food << "\n";  // Outputs Pizza
   cout << meal << "\n";  // Outputs Pizza
   cout << &food; // Outputs 0x6dfed4
   string* ptr = &food;  // A pointer variable, with the name ptr, that stores the address of food
   cout << food << "\n"; // Output the value of food (Pizza)
   cout << ptr << "\n";  // Reference: Output the memory address of food with the pointer (0x6dfed4)
   cout << *ptr << "\n"; // Dereference: Output the value of food with the pointer (Pizza)
   *ptr = "Hamburger";   // Change the value of the pointer
   cout << *ptr << "\n"; // Output the new value of the pointer (Hamburger)
   cout << food << "\n"; // Output the new value of the food variable (Hamburger)

   // function
   void myFunction() {
      cout << "I just got executed!";
   }  // Outputs "I just got executed!"

   myFunction();  // I just got executed!
   myFunction();  // I just got executed!
   myFunction();  // I just got executed!

   void myFunction1(string fname) {
      cout << fname << " Refsnes\n";
   }

   myFunction1("Liam");  // Liam Refsnes
   myFunction1("Jenny"); // Jenny Refsnes
   myFunction1("Anja");  // Anja Refsnes

   void myFunction2(string fname, int age) {
     cout << fname << " Refsnes. " << age << " years old. \n";
   }

   myFunction2("Liam", 3);    // Liam Refsnes. 3 years old.
   myFunction2("Jenny", 14);  // Jenny Refsnes. 14 years old.
   myFunction2("Anja", 30);   // Anja Refsnes. 30 years old.

   int myFunction3(int x) {
     return 5 + x;
   }

   cout << myFunction3(3);  // Outputs 8 (5 + 3)

   int myFunction4(int x, int y) {
     return x + y;
   }

   int z = myFunction4(5, 3);
   cout << z;  // Outputs 8 (5 + 3)

   // function overloading
   // instead of defining two functions that do the same thing, it is better to overload one
   // so instead plusFuncInt and plusFunDouble, called one plusFunc
   int plusFunc(int x, int y) {
     return x + y;
   }

   double plusFunc(double x, double y) {
     return x + y;
   }

   int myNum1 = plusFunc(8, 5);
   double myNum2 = plusFunc(4.3, 6.26);
   cout << "Int: " << myNum1 << "\n";  // Outputs Int: 13
   cout << "Double: " << myNum2;    // Outputs Double: 10.56

   // pass by reference (pointer)
   void swapNums(int &x, int &y) {
     int z = x;
     x = y;
     y = z;
   }

   int main() {
     int firstNum = 10;
     int secondNum = 20;
     cout << "Before swap: " << "\n";
     cout << firstNum << secondNum << "\n"; // 1020
     // Call the function, which will change the values of firstNum and secondNum
     swapNums(firstNum, secondNum);
     cout << "After swap: " << "\n";
     cout << firstNum << secondNum << "\n"; // 2010
     return 0;
   }

   // class
   class MyClass {       // The class
     public:             // Access specifier
       int myNum;        // Attribute (int variable)
       string myString;  // Attribute (string variable)
   };

   MyClass myObj;  // Create an object of MyClass
   myObj.myNum = 15;
   myObj.myString = "Some text";
   cout << myObj.myNum << "\n";  // Outputs 15
   cout << myObj.myString;    // Outputs Some text

   class Car {
     public:
       string brand;
       string model;
       int year;
   };
   // Create an object of Car
   Car carObj1;
   carObj1.brand = "BMW";
   carObj1.model = "X5";
   carObj1.year = 1999;
   // Create another object of Car
   Car carObj2;
   carObj2.brand = "Ford";
   carObj2.model = "Mustang";
   carObj2.year = 1969;
   cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n"; // Outputs BMW X5 1999
   cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n"; // Outputs Ford Mustang 1969

   // public, private, protected
   class MyClass {
      public:    // Public access specifier
         int x;   // Public attribute
      private:   // Private access specifier
         int y;   // Private attribute
      protected:
         int z;
   };

   MyClass myObj;
     myObj.x = 25;  // Allowed (public)
     myObj.y = 50;  // Not allowed (private)
     myObj.z = 75;  // Not allowed, needs to be inheritance to access

   // methods inside class
   class MyClass {        // The class
     public:              // Access specifier
       void myMethod() {  // Method/function defined inside the class
         cout << "Hello World!";
       }
   };

   MyClass myObj;     // Create an object of MyClass
   myObj.myMethod();  // Call the method

   // methods outside class
   class MyClass {        // The class
     public:              // Access specifier
       void myMethod();   // Method/function declaration
   };

   // Method/function definition outside the class
   void MyClass::myMethod() {
     cout << "Hello World!";
   }

   MyClass myObj;     // Create an object of MyClass
   myObj.myMethod();  // Call the method

   // constructor with paramenters inside class
   class Car {        // The class
     public:          // Access specifier
       string brand;  // Attribute
       string model;  // Attribute
       int year;      // Attribute
       Car(string x, string y, int z) { // Constructor with parameters
         brand = x;
         model = y;
         year = z;
       }
   };

   // Create Car objects and call the constructor with different values
   Car carObj1("BMW", "X5", 1999);
   Car carObj2("Ford", "Mustang", 1969);

   // constructor with paramenters outside class
   class Car {        // The class
     public:          // Access specifier
       string brand;  // Attribute
       string model;  // Attribute
       int year;      // Attribute
       Car(string x, string y, int z); // Constructor declaration
   };

   // Constructor definition outside the class
   Car::Car(string x, string y, int z) {
     brand = x;
     model = y;
     year = z;
   }

   // Create Car objects and call the constructor with different values
   Car carObj1("BMW", "X5", 1999);
   Car carObj2("Ford", "Mustang", 1969);

   // encapsulation
   class Employee {
     private:
       // Private attribute
       int salary;

     public:
       // Setter
       void setSalary(int s) {
         salary = s;
       }
       // Getter
       int getSalary() {
         return salary;
       }
   };

   Employee myObj;
   myObj.setSalary(50000);
   cout << myObj.getSalary(); // Outputs 50000

   // inheritance
   // Base class
   class Vehicle {
     public:
       string brand = "Ford";
       void honk() {
         cout << "Tuut, tuut! \n" ;
       }
   };
   // Derived class
   class Car: public Vehicle {
     public:
       string model = "Mustang";
   };

   Car myCar;
   myCar.honk();
   cout << myCar.brand + " " + myCar.model;  // = Tuut, tuut!
                                             // = Ford Mustang

   // multilevel inheritance
   // Base class (parent)
   class MyClass {
     public:
       void myFunction() {
         cout << "Some content in parent class." ;
       }
   };
   // Derived class (child)
   class MyChild: public MyClass {
   };
   // Derived class (grandchild)
   class MyGrandChild: public MyChild {
   };

   MyGrandChild myObj;
   myObj.myFunction();  // = Some content in parent class.

   // access specifier
   // Base class
   class Employee  {
     protected:  // Protected access specifier
       int salary;
   };
   // Derived class
   class Programmer: public Employee {
     public:
       int bonus;
       void setSalary(int s) {
         salary = s;
       }
       int getSalary() {
         return salary;
       }
   };

   Programmer myObj;
   myObj.setSalary(50000);
   myObj.bonus = 15000;
   cout << "Salary: " << myObj.getSalary() << "\n";   // = Salary: 50000
   cout << "Bonus: " << myObj.bonus << "\n";          // = Bonus: 15000
}

   // polymorphism
   // Base class
   class Animal {
     public:
       void animalSound() {
       cout << "The animal makes a sound \n" ;
     }
   };

   // Derived class
   class Pig : public Animal {
     public:
       void animalSound() {
       cout << "The pig says: wee wee \n" ;
      }
   };

   // Derived class
   class Dog : public Animal {
     public:
       void animalSound() {
       cout << "The dog says: bow wow \n" ;
     }
   };

   Animal myAnimal;
   Pig myPig;
   Dog myDog;
   myAnimal.animalSound();
   myPig.animalSound();
   myDog.animalSound();
