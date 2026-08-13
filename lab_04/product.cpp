
#include<iostream>
#include<string>
using namespace std;

class Product
{
    private:
    int prod_id,prod_quantity;
    string prod_name;
    float prod_price,prod_bill;;

    public:
    void inputDetails(){
        cout<<"Enter Product name:";
        getline(cin>>ws,prod_name);
        cout<<"Enter Product id:";
        cin>>prod_id;
        cout<<"Enter Product quatity:";
        cin>>prod_quantity;
        cout<<"Enter Product price:";
        cin>>prod_price;
    }

    void bill()
    {
        prod_bill=prod_quantity*prod_price;
        cout<<"Bill="<<prod_bill<<endl;
    }

    void displayDetails() const{
        cout<<"--------Product Details----------"<<endl;
        cout<<"Product Id:"<<prod_id<<endl;
        cout<<"Product Name:"<<prod_name<<endl;
        cout<<"Product Quantity:"<<prod_quantity<<endl;
        cout<<"Product Price:"<<prod_price<<endl;
    }    
};

int main()
{
    Product p;
    p.inputDetails();
    p.displayDetails();
    p.bill();
    
    return 0;
}