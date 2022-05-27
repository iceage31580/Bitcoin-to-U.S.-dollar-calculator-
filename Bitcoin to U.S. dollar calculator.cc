#include <iostream>
using namespace std;


int main()
{
    char user_input = 'y';

    do{

    double btcPrice, btcAmount, dollars;
    //btcAmount = btcPrice * dollars;

    cout << "Please enter amount of BTC \n";
    cin >> btcAmount;
    cout << "Please enter the current price of BTC \n";
    cin >> btcPrice;

    cout << btcAmount*btcPrice << "\n";

    cout << "Run again " << endl;
    cin >> user_input;

    }while(user_input = 'y');

}
