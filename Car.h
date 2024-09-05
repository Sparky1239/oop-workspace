#ifndef CAR_H
#define CAR_H

class Car
{
protected:
    int price;
    int emissions;

public:
    //default constructor
    Car();
    //constructor that takes price
    Car(int price);

    //returns price
    int get_Price();
    //set price
    void set_Price(int newPrice);

    //returns emmisions
    int get_Emissions();
    //sets emmisions
    void set_Emissions(int newEmissions);

    //drives a distance set emmisions to 20* kms
    void drive(int kms);

};

#endif