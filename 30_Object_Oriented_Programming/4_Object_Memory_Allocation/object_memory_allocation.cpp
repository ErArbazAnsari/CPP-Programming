#include <iostream>

using namespace std;
class shop
{
private:
    int item_id[100];
    int item_price[100];
    int counter;

public:
    void initialize_counter(void)
    {
        counter = 0;
    }
    void getdata(void)
    {
        cout << "Enter Item_Id: ";
        cin >> item_id[counter];
        cout << "Enter Item_Price: ";
        cin >> item_price[counter];
        counter = counter + 1;
    }
    void display(void)
    {
        for (int i = 0; i < counter; i++)
        {
            cout << "Price of Item " << item_id[i] << " : " << item_price[i] << endl;
        }
    }
};

int main()
{
    shop dukaan;
    dukaan.initialize_counter();
    dukaan.getdata();
    dukaan.getdata();
    dukaan.getdata();
    dukaan.display();
    return 0;
}