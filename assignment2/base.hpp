#include <iostream>

using namespace std;

class Base {
public:
    Base() {
        cout<<"Base Constructor called"<<endl;
        arr=new int *[100];
        for (int i=0; i<100; i++) {
            arr[i]=new int[10];
        }
        
    }
    
    Base(int x, int y) {
        cout<<"BaseXY Constructor called"<<endl;
        this->x = x;
        this->y = y;
        
        arr=new int *[100];
        for (int i=0; i<100; i++) {
            arr[i]=new int[10];
        }
    }
    
    virtual ~Base() {
        cout<<"Base Destructor called"<<endl<<endl;
    }

private:
    int x;
    int y;
    int ** arr;
};
