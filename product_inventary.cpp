#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int productId;
    string productName;
    float price;
    int quantityInStock;

public:
    // Parameterized constructor to initialize attributes
    Product(int id, const string& name, float pr, int qty)
        : productId(id), productName(name), price(pr), quantityInStock(qty)
        {}

    // Display product information
    void displayProductInfo() const 
    {
        cout << "Product ID: " << productId << "\n"
                  << "Product Name: " << productName << "\n"
                  << "Price: $" << price << "\n"
                  << "Quantity in Stock: " << quantityInStock << "\n\n";
    }

    // Getter for product quantity
    int getQuantity() const
    {
        return quantityInStock;
    }

    // Update product quantity after a sale or restocking
    void updateQuantity(int newQuantity) 
    {
        quantityInStock = newQuantity;
    }
};

int main()
{
    // Creating Product objects using the parameterized constructor
    Product product1(1, "Laptop", 899.99, 10);
    Product product2(2, "Smartphone", 499.99, 15);

    // Displaying initial product information
    cout << "Initial Product Information:\n";
    product1.displayProductInfo();
    product2.displayProductInfo();

    // Simulating a sale and updating quantity
    int soldQuantity = 3;
    int newQuantity = product1.getQuantity() - soldQuantity;
    product1.updateQuantity(newQuantity);

    // Displaying updated product information
    cout << "Product Information after Sale:\n";
    product1.displayProductInfo();

    return 0;
}
