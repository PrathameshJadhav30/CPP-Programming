// C++ program to demonstrate function

#include <iostream>
using namespace std;
class Rectangle {
   private:
      int length;
      int width;
   public:
      void setLength(int len) {
         length = len;
      }
      void setWidth(int wid) {
         width = wid;
      }
      int getArea() {
         return length * width;
      }
};
int main() {
   Rectangle rect;
   rect.setLength(5);
   rect.setWidth(3);
   cout << "The area of the rectangle is " << rect.getArea() << endl;
   return 0;
}