#include <iostream>
using namespace std;

class Cube {
        // member variables
        double len;
        double breadth;
        
    public:
        double height;
        // member function declared and defined
        // inside class
        double getVolume(){
            return len * breadth * height;
        }
        
        // setters : to set values declared and defined 
        // inside class
        void setLen(int l){
            len = l;
        }
        void setBreadth(int b){
            breadth = b;
        }
        void setHeight(int h){
            height = h;
        }
        
        // getter functions created to get values
        int getLen(){
            return len;
        }
        int getBreadth(){
            return breadth;
        }
};

int main(){
    Cube cube_obj1;
    
    cube_obj1.setLen(10.0);
    cube_obj1.setBreadth(10.0);
    cube_obj1.setHeight(10.0);
    
    cout << "The Volume : " << cube_obj1.getVolume() << endl;
    
    cout << "The height : " << cube_obj1.height << endl;
    
    // will be able to access private variables
    // using these public member functions (getters)
    cout << "The breadth : " << cube_obj1.getBreadth() << endl;
    cout << "The Length : " << cube_obj1.getLen() << endl;
}