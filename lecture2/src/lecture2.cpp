// #include "lecture2.hpp"

#include <iomanip>  // for output manipulator std::setprecision()
#include <iostream>
#include <limits>    // for the min and max range of a type
#include <typeinfo>  // needed for typeid
#define PI 3.14159   // symbolic constant
#define SQUARE(x) ((x) * (x))

//</> 31
//=====================
// int global_var{1};

// void my_function() {
//     global_var++;
// }

//</> 32
//=====================
// int global_x;
// int global_y{1};

//</> 33, 34, 35
//=====================
// // namespace MyNamespace
// namespace MyNamespace {
// int x{3};
// int y{4};
// }  // end namespace MyNamespace

//</> 34
//=====================
// using namespace MyNamespace;

//</> 35
//=====================
// using MyNamespace::x;

//</> 36
//=====================
// // custom namespace
// namespace MyNamespace {
// int cout{1};
// }  // end namespace MyNamespace
// using namespace std;
// using namespace MyNamespace;

//</> 37
//=====================
// Create custom types using 'using'
using Integer = int;
using Float = float;
using uint = unsigned int;

int main() {
    //</> 1
    //=====================
    //  int break1;  // OK
    //  int break_1; // OK
    //  int Break1;  // OK
    //  int BREAK;   // OK
    //  int _break1; // OK
    //  // int 1Break;  // Error: expected unqualified-id before numeric constant

    // </> 2
    // =====================
    //  int number{20};
    //  std::cout << "sizeof(number): " << sizeof(number) << '\n'; // 4 bytes on my machine
    //  std::cout << "sizeof(int): " << sizeof(int) << '\n';    // 4 bytes on my machine
    //  std::cout << "address of number: " << &number << '\n';

    //</> 3
    //=====================
    //  int number;                  // declaration
    //  number = 1;                  // assignment
    //  std::cout << number << '\n'; // 1
    //  number = 2;                  // assignment
    //  std::cout << number << '\n'; // 2

    //</> 4
    //=====================
    // int a{};                                                      // initialized to 0
    // std::cout << a << '\n';                                       // 0
    // double b{};                                                   // initialized to 0.0
    // std::cout << b << '\n';                                       // 0
    // std::cout << std::fixed << std::setprecision(1) << b << '\n'; // 0.0
    // int c{0};
    // b = c + 3;
    // std::cout << b << '\n';
    // std::cout << std::fixed << std::setprecision(1) << b << '\n'; // 0.0

    //</> 5
    //=====================
    // int a{};   // the value of a will be replaced later
    // int b{0};  // we plan to use the value of b
    // a = b + 3; // value of b is used and a is assigned a new value

    //</> 6
    //=====================
    // int number;                  // uninitialized
    // std::cout << number << '\n'; // garbage

    //</> 7
    //=====================
    // std::cout << "Type\t\tSize (bytes)\tMin Value\t\tMax Value\n";
    // std::cout << "--------------------------------------------------------------------\n";

    // std::cout << "char\t\t" << sizeof(char)
    //           << "\t\t" << int(std::numeric_limits<char>::min())
    //           << "\t\t\t" << int(std::numeric_limits<char>::max()) << '\n';

    // std::cout << "unsigned char\t" << sizeof(unsigned char)
    //           << "\t\t" << int(std::numeric_limits<unsigned char>::min())
    //           << "\t\t\t" << int(std::numeric_limits<unsigned char>::max()) << '\n';

    // std::cout << "int\t\t" << sizeof(int)
    //           << "\t\t" << std::numeric_limits<int>::min()
    //           << "\t\t" << std::numeric_limits<int>::max() << '\n';

    // std::cout << "unsigned int\t" << sizeof(unsigned int)
    //           << "\t\t" << std::numeric_limits<unsigned int>::min()
    //           << "\t\t\t" << std::numeric_limits<unsigned int>::max() << '\n';

    // std::cout << "short\t\t" << sizeof(short)
    //           << "\t\t" << std::numeric_limits<short>::min()
    //           << "\t\t\t" << std::numeric_limits<short>::max() << '\n';

    // std::cout << "unsigned short\t" << sizeof(unsigned short)
    //           << "\t\t" << std::numeric_limits<unsigned short>::min()
    //           << "\t\t\t" << std::numeric_limits<unsigned short>::max() << '\n';

    // std::cout << "long\t\t" << sizeof(long)
    //           << "\t\t" << std::numeric_limits<long>::min()
    //           << "\t" << std::numeric_limits<long>::max() << '\n';

    // std::cout << "unsigned long\t" << sizeof(unsigned long)
    //           << "\t\t" << std::numeric_limits<unsigned long>::min()
    //           << "\t\t\t" << std::numeric_limits<unsigned long>::max() << '\n';

    // std::cout << "long long\t" << sizeof(long long)
    //           << "\t\t" << std::numeric_limits<long long>::min()
    //           << "\t" << std::numeric_limits<long long>::max() << '\n';

    // std::cout << "ull\t\t" << sizeof(unsigned long long)
    //           << "\t\t" << std::numeric_limits<unsigned long long>::min()
    //           << "\t\t\t" << std::numeric_limits<unsigned long long>::max() << '\n';

    //</> 8-1
    //=====================
    // std::cout << std::fixed << std::scientific << std::setprecision(10);
    // // std::scientific -- Display the result in scientific notation
    // // std::fixed and std::precision -- By combining std::fixed with std::setprecision, 
    // // you can control the number of decimal places that are shown. 
    // // For example, std::setprecision(2) with std::fixed will display the number with 
    // // exactly two digits after the decimal point.
    // std::cout << "Type\t\tSize (bytes)\tMin Value\t\t\tLowest Value\t\t\tMax Value\n";
    // std::cout << "--------------------------------------------------------------------------------------------------------\n";

    // std::cout << "float\t\t" << sizeof(float)
    //           << "\t\t" << std::numeric_limits<float>::min()
    //           << "\t\t" << std::numeric_limits<float>::lowest()
    //           << "\t\t" << std::numeric_limits<float>::max() << '\n';

    // std::cout << "\ndouble\t\t" << sizeof(double)
    //           << "\t\t" << std::numeric_limits<double>::min()
    //           << "\t\t" << std::numeric_limits<double>::lowest()
    //           << "\t\t" << std::numeric_limits<double>::max() << '\n';

    // std::cout << "\nlong double\t" << sizeof(long double)
    //           << "\t\t" << std::numeric_limits<long double>::min()
    //           << "\t\t" << std::numeric_limits<long double>::lowest()
    //           << "\t\t" << std::numeric_limits<long double>::max() << '\n';

    //</> 8-2
    //=====================
    // std::cout << 1.05 << '\n';  // this is a double
    // std::cout << 1.05f << '\n'; // this is a float
    // std::cout << 1f << '\n';    // error
    // std::cout << 1.0f << '\n';  // OK

    //</> 8-3
    //=====================
    // std::cout << std::setprecision(9);             // show 9 digits of precision
    // std::cout << 0.33333333333f << '\n';           // 0.333333343
    // std::cout << std::setprecision(15) << '\n';    // show 15 digits of precision
    // std::cout << 8.3642343534322323232322 << '\n'; // 8.36423435343223 (15 digits)

    //</> 9-1
    //=====================
    // bool is_today_sunny{true};
    // bool is_today_cloudy{false};
    // std::cout << is_today_sunny << '\n';  // 1
    // std::cout << is_today_cloudy << '\n'; // 0

    //</> 9-2
    //=====================
    // bool is_today_sunny{true};
    // bool is_today_cloudy{false};
    // std::cout << std::boolalpha << is_today_sunny << '\n';  // true
    // std::cout << std::boolalpha << true << '\n';            // true
    // std::cout << std::noboolalpha << true << '\n';          // 1
    // std::cout << std::boolalpha << is_today_cloudy << '\n'; // false
    // std::cout << std::boolalpha << false << '\n';           // false
    // std::cout << std::noboolalpha << false << '\n';         // 0

    //</> 10
    //=====================
    // int a{1};         // initialize variable a with literal value 1
    // int b{2 + 3 - 1}; // initialize variable b with computed value 4
    // int c{2 * 2 + 1}; // initialize variable c with computed value 5
    // int d{b};         // initialize variable d with variable value 4

    //</> 11
    //=====================
    // double num1 = 1.5;
    // int num2 = num1;                                                // 1.5 converted to 1
    // std::cout << "Value of num1 : " << num1 << '\n';                // 1.5
    // std::cout << "Type of num1 : " << typeid(num1).name() << '\n';  // double
    // std::cout << "Value of num2 : " << num2 << '\n';

    //</> 12-1
    //=====================
    // double num1{5.0};   // no promotion necessary
    // double num2{4.0f};  // float promoted to double

    //</> 12-2
    //=====================
    // short s = 1;
    // int num1 = s;                    // short promoted to int
    // int num2 = 'a';                  // char promoted to int
    // int num3 = true;                 // bool promoted to int
    // std::cout << num1 << '\n';       // 1
    // std::cout << num2 << '\n';       // 97
    // std::cout << num3 << '\n';       // 1
    // std::cout << sizeof(s) << '\n';  // 2

    //</> 13
    //=====================
    // int a;
    // int b = 3.2;
    // int c(1.3);
    // int d{3.5};
    // std::cout << a << '\n';
    // std::cout << b << '\n';
    // std::cout << c << '\n';
    // std::cout << d << '\n';

    //</> 14
    //=====================
    // int b = static_cast<int> (3.2);
    // std::cout << b << '\n';
    // int c(static_cast<int> (1.3));
    // std::cout << c << '\n';
    // int d{static_cast<int> (3.5)};
    // std::cout << d << '\n';

    //</> 15
    //=====================
    // int i = 42;
    // double d = 3.14;

    // std::cout << "Type of result: " << typeid(i + d).name() << '\n';  // double
    // std::cout << "Value of result: " << i + d << '\n';                // 45.14

    // unsigned int ui = 100;
    // long l = 5000;

    // std::cout << "Type of result: " << typeid(ui + l).name() << '\n';  // long
    // std::cout << "Value of result: " << ui + l << '\n';                // 5100

    // unsigned short us = 10;
    // unsigned long ul = 700000;

    // std::cout << "Type of result: " << typeid(us + ul).name() << '\n';  // unsigned long
    // std::cout << "Value of result: " << us + ul << '\n';                // 700010

    //</> 16
    //=====================
    // short s1 = 100;
    // char c = 50;
    // std::cout << "Type of result: " << typeid(s1 + c).name() << '\n'; // int
    // std::cout << "Value of result: " << s1 + c << '\n'; // 150

    // unsigned char uc = 200;
    // bool b1 = true;
    // std::cout << "Type of result: " << typeid(uc + b1).name() << '\n'; // int
    // std::cout << "Value of result: " << uc + b1 << '\n'; // 201

    // bool b2 = false;
    // short s2 = 32767;
    // std::cout << "Type of result: " << typeid(b2 + s2).name() << '\n'; // int
    // std::cout << "Value of result: " << b2 + s2 << '\n'; // 32767

    //</> 17
    //=====================
    // int a{3};
    // int b{2};
    // std::cout << "Type of result: " << typeid(a / b).name() << '\n';
    // std::cout << "Value of result: " << static_cast<double>(a) / b << '\n';

    //</> 19
    //=====================
    // int x{1};
    // // Output the value of the variable 'x'
    // std::cout << x << '\n';
    // // Output multiple strings in a single statement
    // std::cout << "hello, " << "world\n";
    // // Output a combination of a variable and a literal of different data types
    // std::cout << x << " x " << 3.4 << '\n';

    //</> 20-1
    //=====================
    // // ask user for their age
    // std::cout << "Enter your age: ";
    // // init variable to hold user input
    // unsigned short age{};
    // // store input in variable age
    // std::cin >> age;
    // std::cout << "Your age is " << age << '\n';

    //</> 20-2
    //=====================
    // std::cout << "Enter two integers separated by a space: ";
    // // init variable to hold the first number
    // int a{};
    // // init variable to hold the second number
    // int b{};
    // // store inputs in variables a and b
    // std::cin >> a >> b;
    // std::cout << "a: " << a << ", b: " << b << '\n';

    //</> 21
    //=====================
    // std::cout << "Enter two integers separated by a space: ";
    // // init variable to hold the first number
    // int a{};
    // // init variable to hold the second number
    // double b{};
    // // store inputs in variables a and b
    // std::cin >> a >> b;
    // std::cout << "a: " << a << ", b: " << b << '\n';

    //</> 22-1
    //=====================
    // const double pi;

    //</> 22-2
    //=====================
    // const double pi{3.141598};
    // pi = 3.14;

    //</> 23
    //=====================
    // std::cout << "pi: " << PI << '\n';  // preprocessor replaces PI with 3.14159

    //</> 24-1
    //=====================
    // int a = 5;
    // double result = SQUARE(a);
    // std::cout << result << '\n';

    //</> 24-2
    //=====================
    // double area = PI * 10 * 10;
    // std::cout << area << '\n';

    //</> 25-1
    //=====================
    // const int a{1};              // a is a compile-time const
    // const int b{2};              // b is a compile-time const
    // std::cout << a + b << '\n';  // a + b is a compile-time expression

    //</> 25-2
    //=====================
    // std::cout << "Enter an integer: ";
    // int input{};
    // std::cin >> input;
    // const int a{1};              // a is a compile-time const
    // const int b{input};          // b is a run-time const
    // std::cout << a + b << '\n';  // a + b is a run-time expression

    //</> 26
    //=====================
    // constexpr int a{1};  // OK: a is a compile-time const
    // constexpr int b{2};  // OK: b is a compile-time const
    // std::cout << "Enter an integer: ";
    // int input{};
    // std::cin >> input;
    // constexpr int c{input};  // error

    //</> 27
    //=====================
    // auto a{3.0};    // 3.0 is a double literal, so variable a will be type double
    // std::cout << "Type of a: " << typeid(a).name() << '\n'; // double
    // auto b{1 + 2};  // 1 + 2 evaluates to an int, so b will be type int
    // std::cout << "Type of b: " << typeid(b).name() << '\n';  // int
    // auto c{b};      // variable b is an int, so c will be type int
    // std::cout << "Type of c: " << typeid(c).name() << '\n';  // int

    //</> 28-1
    //=====================
    // const int a{5};  // a is const
    // auto b{a};       // b is int (const is dropped)
    // b = 1;           // OK

    //</> 28-2
    //=====================
    // constexpr int a{5};   // a is const int
    // constexpr auto b{a};  // b is const int
    // b = 1;                // error: assignment of read-only variable 'b'

    //</> 29
    //=====================
    // int a{};
    // {  // start nested block 1
    //     int b{};
    //     {  // start nested block 2
    //         int c{};
    //     }  // end nested block 2
    // }  // end nested block 1

    //</> 30
    //=====================
    // int a{1};
    // {
    //     int b{2};
    //     std::cout << a << '\n';  // 1
    //     std::cout << b << '\n';  // 2
    // }  // b goes out of scope here.
    // // std::cout << b << '\n';  // error: b is out of scope
    // int c{3};

    //</> 31
    //=====================
    // std::cout << global_var << '\n';  // 1
    // global_var++;                     // 2
    // my_function();                    // 3
    // std::cout << global_var << '\n';  // 3

    //</> 32
    //=====================
    // std::cout << &global_x << '\n';
    // std::cout << &global_y << '\n';

    //</> 33
    //=====================
    // std::cout << MyNamespace::x << '\n';  // 3
    // std::cout << MyNamespace::y << '\n';  // 4

    //</> 34
    //=====================
    // std::cout << x << '\n';  // no need to use MyNamespace::x
    // std::cout << y << '\n';  // no need to use MyNamespace::y

    //</> 35
    //=====================
    // std::cout << x << '\n';  // no need to use MyNamespace::x
    // std::cout << y << '\n';  // error: ‘y’ was not declared in this scope

    //</> 36
    //=====================
    // cout << cout << '\n';

    //</> 37
    //=====================
    // Use the custom types
    // Integer a{10};
    // Float b{20.5f};
    // uint age{30};

    // std::cout << "Integer: " << a << '\n';
    // std::cout << "Float: " << b << '\n';
    // std::cout << "Age: " << age << '\n';
}
