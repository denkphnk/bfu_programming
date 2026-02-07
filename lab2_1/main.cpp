#include <iostream>
#include <string>
using namespace std;


class Product {
    private:
        string name;
        string desc;
        int price;
        int date;
        string place;

    public:
        Product() : name("Unknown"), desc("Unknown"), price(0), date(0), place("Unknown") {}

        Product(string n, string d, int p, int da, string pl) : name(n), desc(d), price(p), date(da), place(pl) {}

        Product(const Product &other) : name(other.name), desc(other.desc), price(other.price), date(other.date), place(other.place) {}

        ~Product() {
            cout << "dtor" << endl;
        }

        //Геттеры
        string getName() const {
            return name;
        }
        string getDesc() const {
            return desc;
        }
        int getPrice() const {
            return price;
        }
        int getDate() const {
            return date;
        }
        string getPlace() const {
            return place;
        }

        //Сеттеры
        void setPrice(int newPrice) {
            price = newPrice;
            cout << "New price: " << price << endl;
        }

        void changeDate(int newDate) {
            date = newDate;
            cout << "Days left: " << date << endl;
        }

        void printPlace() {
            cout << "Place: " << place << endl;
        }

        void info() {
            cout << "----------------------------" << endl;
            cout << "Information" << endl;
            cout << "Name: " << name << endl;
            cout << "Description: " << desc << endl;
            cout << "Price: " << price << endl;
            cout << "Days left: " << date << endl;
            cout << "Place: " << place << endl;
            cout << "----------------------------" << endl;
        }
};

int main() {
    Product p1;
    p1.info();

    Product p2("Cookies", "Chocolate cookies", 200, 3, "Sweets");
    p2.info();

    Product p3 = p2;
    p3.info();

    p1.setPrice(250);
    p2.changeDate(2);

    p1.info();
    p2.info();
    p3.info();
}