#include <iostream>
using namespace std;

/* Examine and predict
int main()
{
int x = 5;
int y = 7;

cout << endl;
cout << x + y << " " << x * y;
cout << endl;

return 0;
}
*/

/* Basic Input/Output Operations
int main(){
int age;
cout << "Enter your age: ";
cin >> age;

cout << "Your entered: " << age << endl;
return 0;
}
*/

/* Variables, Data types, and Type Casting
int main(){
   int a = 10;
   double b = 3.5;

   double result = (double)a / b; // type casting

   cout << "a = " << a << endl;
   cout << "b = " << b << endl;
   cout << "Result of a / b = " << result << endl;

   return 0;
}
*/

/* Operators and Expressions
int main(){
   int x = 8;
   int y = 3;

   cout << "x + y = " << x + y << endl;
   cout << "x - y = " << x - y << endl;
   cout << "x * y = " << x * y << endl;
   cout << "x / y = " << x / y << endl;
   cout << "x % y = " << x % y << endl;

   return 0;
}
*/

/* Control Structures (A If/Else)
int main(){
   int temp = 30;

   if (temp > 25)
      cout << "It's hot outside!" << endl;
   else
      cout << "It's cool ouside." << endl;

   return 0;
}
*/

/* Control Structures (B Switch statement)
int main(){
   int day = 3;

   switch(day) {
      case 1: cout << "Monday"; break;
      case 2: cout << "Tuesday"; break;
      case 3: cout << "Wednesday"; break;
      default: cout << "Invalid day"; break;
   }

   return 0;
}
*/

/* Control Structure (C For Loop)
int main(){
   for (int i = 1; i <= 5; i++){
      cout << "Count: " << i << endl;
   }
   return 0;
}
*/

/* Functions and Parameter Passing
void greet()
{
   cout << "Hello from a function!" << endl;
}

int main()
{
   greet();
   return 0;
}
*/

/* Function With Parameters
int add(int a, int b)
{
   return a + b;
}

int main()
{
   int result = add(4, 6);
   cout << "Sum = " << result << endl;
   return 0;
}
*/

// Function With return value and user input
double area(double width, double height)
{
   return width * height;
}

int main()
{
   double w, h;
   cout << "Enter width: ";
   cin >> w;
   cout << "Enter height: ";
   cin >> h;

   cout << "Area = " << area(w,h) << endl;
   return 0;
}


