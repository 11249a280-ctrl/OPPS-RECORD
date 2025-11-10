// C++ program to demonstrate constructor overloading
#include &lt;iostream&gt;
using namespace std;
class Person {
private:
int age;

public:
// 1. Constructor with no arguments
Person() {
age = 20;
}
// 2. Constructor with an argument
Person(int a) {
age = a;
}
int getAge() {
return age;
}
};
int main() {
Person person1, person2(45);
cout &lt;&lt; &quot;Person1 Age = &quot; &lt;&lt; person1.getAge() &lt;&lt; endl;
cout &lt;&lt; &quot;Person2 Age = &quot; &lt;&lt; person2.getAge() &lt;&lt; endl;
return 0;
}