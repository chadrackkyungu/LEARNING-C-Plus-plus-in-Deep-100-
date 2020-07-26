#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   /* THIS THE PROGRAM WRITTEN DOWN
   //CABLE COMPANY BILING
   Demonstrates a program that calculates a customer's bill for a local company.
   there are two types of customers: residential and business.
   there are two rates for calculating a cable bill: one for residential customers and one for business customers.

  1. for residential customers bill is :
       1 bill processing fee :R4.50
       2 basic service fee:R20.50
       3 premium channels: R7.50 per channel

   for business customers bill is :
       bill processing fee:R15.00
       basic service fee: R75.00 for first 10 connections, R5.00 for each additional connection
       premium channels: R50.00 per channel for any number of connections

   2. The Program should ask the user for an acount number (that number the program should ask it as to be an INTEGER (Remeber)) and a CUSTOMER CODE.
   assume that R or r stand for residential customer which is the first one and assume that B or b stand for business customer which is the second one

    HERE IS WHAT SHOULD BE YOUR INPUT AND OUTPUT

    INPUT : The customer's account number, customer code, number of premium channels to which the user subcribes, and, in the case of business customers,
    numbers, number of basic service connections.

    OUTPUT : Customer's account number and the billing amount.

    The Purpose of this program is to calculate and print the billing amount.
    and to calculate the billing amount you need to know the customer for whom the billing amount is calculated (Whetther the customer is: residential or
   business) and the number of premium channels to which the customer subscribes.

   NOTE: in the case of a business customer, you also need to know the number of basic service connections and the number of premium channels.
   Other data needed to be calculated to calculate the bill,such as the bill processing fees and cost of a premium channel,are known quantities



    THE FOLLOWING IS THE ALGORITHME OR PSEUDO CODE OF THIS PROGRAM :

        1 prompt the user for the account number and customer type.
        2 based on the customer type, determine the number of premium channels and basic service connections, compute the bill and print the bill:

            a) if the customer type is r or R,
                1) prompt the user for the number of premium channels.
                2) compute the bill
                3) Print the bill

            b) if the customer type is b or B :

                1) Prompt the user for the number of basic service connections and the number of premium channels
                2) Compute the bill
                3) Print the bill


    Variable :because the program will ask the user to input the customer account number, customer code, number of premium channels, and number of basic service connections,
    you need you need variables to store all this information  also the progam will calculate the billing amount you need the variable to store the billing amount
    the Program need at least 5 variable


    THREE DATA TYPE int,char,double

    1 int accountNumber;
    2 char customerCode;
    3 int numOfPrimiumChannels;
    4 int numOfBasicServiceConnetion;
    5 double AmountDue;



    THESE ARE THE VALUE FOR BOTH CUSTOMERS
    1 residential customer variables and values  :
        const double res_Bill_pro_Fees = 4.50;
        const double res_Basic_serVice_cost = 20.50;
        const double res_cost_premi_channel = 7.50;

    2 business customer variablesand values :
        const bus_bill_proce_fee = 15.00;
        const bus_basic_service_cost = 75.00;
        const bus_basic_connesc_cost = 5.00;
        const bus_cost_premium_channel = 50.00


        THE FORMULA FOR RESIDENTIAL IS  : AmountDue = res_Bill_pro_Fees + res_Basic_serVice_cost + numOfPrimiumChannels * res_cost_premi_channel

        THE FORMULA FOR BUSINESS IS : if(numOfBasicServiceConnetion <= 10){
        amountDue = bus_bill_proce_fee + bus_basic_service_cost + numOfPrimiumChannels * bus_cost_premium_channel
        }
        else {

            amountDue = bus_bill_proce_fee + bus_basic_service_cost + (numOfBasicServiceConnetion - 10) * bus_basic_connesc_cost + numOfPrimiumChannels * bus_cost_premium_channel
        }

        */

        /*//RESIDENTIAL CUSTOMER
        const double residen_bill_proce_fees = 4.50;
        const double residen_Basic_serv_cost = 20.50;
        const double resident_cost_premium_channel = 7.50;

        //BUSINESS CUSTOMER

        const double business_bill_proce_fees = 15.00;
        const double business_Basic_service_cost = 75.00;
        const double business_Basic_Conne_cost = 5.00;
        const double business_cost_premium_channel = 50.00;


        int accountNumber;
        char customerCode;
        int numOfPrimiumChannels;
        int numOfBasicServiceConnetion;
        double AmountDue;

        cout << fixed << showpoint << setprecision(2);

        cout << "This Program is computing the cable bill company. \n\n";

        cout << "Enter An account number (an integer) : ";
        cin >> accountNumber;
        cout << endl;

        cout << " Enter Customer Type : Residential(R or r) and Business( B or b) ";
        cin >> customerCode;
        cout <<endl;

        switch (customerCode)
        {

        case 'r':
        case 'R':
            cout << "Enter The number of Premium channel : ";
            cin >> numOfPrimiumChannels;
            cout <<endl;
            AmountDue = residen_bill_proce_fees + residen_Basic_serv_cost + numOfPrimiumChannels * resident_cost_premium_channel;

            cout << "Account Number is : " << accountNumber;
            cout << endl;
            cout << "The Amount Due is : " <<" R"<< AmountDue;
            cout <<endl;
        break;

        case 'b':
        case 'B':
            cout << "Enter The number of basic service connection : ";
            cin >> numOfBasicServiceConnetion;
            cout << endl;

            cout << "enter the number of premium channels : ";
            cin >> numOfPrimiumChannels;
            cout << endl;


            if(numOfBasicServiceConnetion <= 10)
            {
                AmountDue = business_bill_proce_fees + business_Basic_service_cost + numOfPrimiumChannels * business_cost_premium_channel;
                  cout << "Account number is : " << accountNumber;
                  cout << endl;
                  cout << "The Amount Due is : " << AmountDue;
                  cout << endl;

           break;

            } else {

    AmountDue = business_bill_proce_fees + business_Basic_service_cost +
    (numOfBasicServiceConnetion -10) * numOfPrimiumChannels * business_cost_premium_channel;

          cout << "Account number is : " << accountNumber;
          cout << endl;
          cout << "The Amount Due is : " <<"R" << AmountDue;
          cout << endl;

           break;

        default :
            cout << "Invalid Customer type : \n\n";
            }

        }

        */





        int accountnumber,existing_accountnumber = 1234;
        char customer_code;
        int number_Of_pre_channel;
        int number_of_serv_connec;
        double Billing_Amount;
        string Name = "chad";
        string Name1;

        //For the residential customer
        const double resi_bill_processing_fees = 4.50;
        const double resi_basic_service_cost = 20.50;
        const double resi_Cost_Premium_channel = 7.50;

        // for businesscutomer bill :

        const double business_bill_processing_fees = 15.00;
        const double business_basic_service_cost = 75.00;
        const double business_basic_connect_cost = 5.00;
        const double business__cost_premium_channel = 50.00;

        //for the decimal number
        cout << fixed << showpoint << setprecision(2);

         int condition = 1;
//this condition it for the entire executioncode
        while(condition < 3 ){

        cout << endl;
        cout <<"   CABLE COMPANY BILLING!!!   \n\n";
        cout <<"Enter Your Name : ";
        cin >> Name1;
        cout << endl;
        cout <<"Enter Your account Number it as to be an integer " ;
        cin >> accountnumber;
        cout << endl;




        if (accountnumber == existing_accountnumber && Name == Name1 ){

        cout << "Enter Your Customer Code for residential it R or r and for business customer it B or b: ";
        cin >> customer_code;
        cout << endl;


        switch (customer_code)
        {
        case 'r':
        case 'R':
            cout << "Enter Your The number of the Premium channels : ";
            cin >> number_Of_pre_channel;
            cout << endl;

            Billing_Amount = resi_bill_processing_fees + resi_basic_service_cost + number_Of_pre_channel * resi_Cost_Premium_channel;
            cout << "Name is : " << Name1;
            cout <<endl;
            cout << "The Account Number is : " << accountnumber;
            cout << endl;
            cout << "The Amount is : " <<"R" << Billing_Amount;
            cout << endl;
            break;


        case 'b':
        case 'B':

            cout << "Enter The number of basic service connections : ";
            cin >> number_of_serv_connec;
            cout <<endl;

            cout << "Enter The Number of Premium channels : ";
            cin >> number_Of_pre_channel;
            cout <<endl;

            if( number_of_serv_connec <= 10 )
            {
                Billing_Amount = business_bill_processing_fees + business_basic_service_cost +
                number_Of_pre_channel * business__cost_premium_channel;

                cout << "Name is : " << Name1;
                cout <<endl;
                cout << "The Account number is : " << accountnumber;
                cout << endl;
                cout << "The Billing Amount is : " <<"R" << Billing_Amount;
                cout << endl;
                break;

            } else {

                Billing_Amount = business_bill_processing_fees + business_basic_service_cost +
                (number_of_serv_connec - 10)* business_basic_connect_cost + number_Of_pre_channel * business__cost_premium_channel;


                cout << "Name is : " << Name1;
                cout << endl;
                cout << "The Account Number is : " << accountnumber;
                cout << endl;
                cout << "The Billing Amount is : " <<"R" << Billing_Amount;
                cout << endl;
                break;

            }
    //the defaults worked in case the user Enter A Wrong customer type
        default :
            cout << "Invalid Customer type! ";
            cout << endl;
            break;

        }
    //this break is to stop the while loop if the above codes get executed
        break;
        }


        //this is the else condition for checking the name and the account number
        //is the else of my first if condition
        else {

        if(Name != Name1){
            cout << "Name Invalide! ";
            cout <<endl;
        }else{
        cout << "Valid Name \n";
        }


       if(accountnumber != existing_accountnumber){
            cout << "Invalid Account Number! \n";

        }else{
        cout << "The account is Valide  \n";
        }

        }


        condition++;

        }
        //close my condition

        cout << endl;
        //this condition is just checking if the user try to login with the wrong name or password for 3 time then
        //the program will stopped
        if(condition == 3){
        cout << " You Have Reach Five Attempte Try After One Hours ";
        cout << endl;
                    }

    return 0;
}
