#include &lt;iostream&gt;
using namespace std;
// declare a class
class Wall {
private:
double length;
public:
// default constructor to initialize variable
Wall()
: length{5.5} {
cout &lt;&lt; &quot;Creating a wall.&quot; &lt;&lt; endl;
cout &lt;&lt; &quot;Length = &quot; &lt;&lt; length &lt;&lt; endl;
}
};
int main() {
Wall wall1;
return 0;
}