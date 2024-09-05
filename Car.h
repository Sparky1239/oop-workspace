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
    int getPrice();
    //set price
    void setPrice(int newPrice);

    //returns emmisions
    int getEmissions();
    //sets emmisions
    void setEmissions(int newEmissions);

    //drives a distance set emmisions to 20* kms
    void drive(int kms);

};

#endif