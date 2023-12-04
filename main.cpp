#include <iostream>
using namespace std;

class Engine {
    public:
        Engine(int p): power(p) {};
        void start() {
            cout <<"Engine ON ("<<power<<" horsepower)";
        }
    private:
        int power;
};
class Car {
    public:
        Car(Engine x, string c, int y): e(x), color(c), year(y) {};
        void start() {
            cout <<"Starting"<<endl;
            //using the start function from Engine using the instance e (Composition)
            e.start();
        }
    private:
        Engine e;
        string color;
        int year;
};

int main() {
    int power;
    string color;
    int year;
    cin >> power >> color >> year;
    
    Engine e(power); //is needed to use e.start()
    Car car(power, color, year);//instance of Car named car
    car.start();

}
