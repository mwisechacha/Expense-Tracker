#include <iostream>
using namespace std;

struct Smartphone{
    string name;
    int storage;
    string color;
    float price;
};

struct Person{
    string name;
    int age;
    Smartphone smartphone;
};

void printSmartPhoneInfo(Smartphone smartphone){
    cout << "name; "<< smartphone.name << endl;
    cout << "storage; "<< smartphone.storage << endl;
    cout << "price; "<< smartphone.price << endl;
    cout << "color; "<< smartphone.color << endl;
};

void printPersonInfo(Person person){
    cout << "name; " << person.name << endl;
    cout << "age; " << person.age << endl;
    printSmartPhoneInfo(person.smartphone);
};

int main(){
    Smartphone smartphone0;
    smartphone0.name = "Iphone 16";
    smartphone0.storage = 64;
    smartphone0.color = "pink";
    smartphone0.price = 1000;

    Smartphone smartphone1;
    smartphone1.name = "Samsung";
    smartphone1.color = "white";
    smartphone1.price = 900;
    smartphone1.storage = 32;

    // printSmartPhoneInfo(smartphone0);
    // printSmartPhoneInfo(smartphone1);

    Person p;
    p.name = "Angie";
    p.age = 22;
    p.smartphone = smartphone0;

    printPersonInfo(p);

    return 0;
}