#include &lt;iostream&gt;
using namespace std;
// declare a class
class Wall {
private:
double length;
double height;
public:
// initialize variables with parameterized constructor
Wall(double len, double hgt)
: length{len}
, height{hgt} {
}
// copy constructor with a Wall object as parameter
// copies data of the obj parameter
Wall(const Wall&amp; obj)

: length{obj.length}
, height{obj.height} {
}
double calculateArea() {
return length * height;
}
};
int main() {
// create an object of Wall class
Wall wall1(10.5, 8.6);

// copy contents of wall1 to wall2
Wall wall2 = wall1;
// print areas of wall1 and wall2
cout &lt;&lt; &quot;Area of Wall 1: &quot; &lt;&lt; wall1.calculateArea() &lt;&lt; endl;
cout &lt;&lt; &quot;Area of Wall 2: &quot; &lt;&lt; wall2.calculateArea();
return 0;
}