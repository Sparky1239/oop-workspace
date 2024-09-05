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
    int get_price();
    //set price
    void set_price(int newPrice);

    //returns emmisions
    int get_emissions();
    //sets emmisions
    void set_emissions(int newEmissions);

    //drives a distance set emmisions to 20* kms
    virtual void drive(int kms);

};

#endif