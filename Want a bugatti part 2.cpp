#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Choose the color of your Bugatti:" << endl;
    cout << "1. Red" << endl;
    cout << "2. Blue" << endl;
    cout << "3. Black" << endl;
    cout << "4. Yellow" << endl;
    
    int colorChoice;
    cout << "Which Colour Do you want: ";
    cin >> colorChoice;

    
    string selectedColor;
    switch (colorChoice)
	{
        case 1:
            selectedColor = "Red";
            break;
        case 2:
            selectedColor = "Blue";
            break;
        case 3:
            selectedColor = "green";
            break;
        case 4:
		    selectedColor = "Yellow";
			break;    
        default:
            cout << "Invalid color choice. Exiting program." << endl;
            return 1;
   }
    cout << "Color selected: " << selectedColor << endl;
    cout << "Choose your payment method:" << endl;
    cout << "1. Cash" << endl;
    cout << "2. Card" << endl;
    cout << "3. Net banking" << endl;

    
    int paymentChoice;
    cout << "Enter the number corresponding to your payment method: " ;
    cin >> paymentChoice;

    
    string paymentMethod;
    switch (paymentChoice)
	{
        case 1:
            paymentMethod = "Cash";
            break;
        case 2:
            paymentMethod = "Card";
            break;
        case 3:
		    paymentMethod = "Net banking";
			break;
        default:
            cout << "Invalid payment method choice. Exiting program." << endl;
            return 1;
   } 
	

   
    cout << "Bugatti color: " << selectedColor << endl<<endl;
    cout << "Payment method: " << paymentMethod << endl << endl << endl;
    cout << "Congratulation You are the owner of " << selectedColor << " Bugatti" << endl << endl;
    cout << " ThankYou for Coming :) ";


    
    return 0;
}


/*#include<iostream>
using namespace std;

int main() 
{
    int day;
    cout<<"Enter a number :";
    cin>>day;

    switch (day) 
	{
        case 1:
            cout << "Monday";
            break;
            
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        default:
            cout << "Weekend" << endl;
            cout << "Hooorayyyyyyyyyyyyyy";
    }

    return 0;
}*/

