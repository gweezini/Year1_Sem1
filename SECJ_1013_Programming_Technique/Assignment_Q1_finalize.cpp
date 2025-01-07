//ASSIGNMENT 1 : QUESTION 1

#include <iostream>
using namespace std;

//prototype
double postageCostWest(double);
double postageCostEast(double);

//main function
int main()
{
     
    int item_charged=0, item_no;
    double sum_cost=0.0,cost,Weight;
    char Location;
  
   
    cout << "Enter the number of items(1-10) :  ";
    cin >> item_no;//prompt user to enter the number of item
    cout << endl;

    if (item_no <1 || item_no>10)//if the number of item is not in teh range
    {
        cout << "Number of item is exceed the range.Please try again"; //display message and the program will be end if the number of items are out of range
        return 0;
    }

       for (int count=0; count<item_no; count++)
       {

            cout << "Enter item's weight: ";
            cin >> Weight;//prompt user to enter the item's weight

            if ((Weight <0 || Weight > 5))//if the weight is more than 5 or less than or equal to 0,it will be considered as invalid weight
            
            {
                cout << "Weight is invalid, please enter the new weight."<<endl;
                cout<< "Enter ietm's weight : " ;//if users enter a invalid weight,ask usr to try again
                cin >> Weight;
                cout << endl;
            }
        
            
             cout << "Please enter location (E=East Malaysia or W=West Malaysia) : ";
             cin >> Location;
             Location=toupper(Location);
             cout << endl;
                if (Location == 'W')
                    { 
                      cost = postageCostWest(Weight);//Calculate the postage cost based on the weight entered by users if the item send to West Malaysia
                    }
                else if (Location == 'E')
                    { 
                      cost = postageCostEast(Weight);//Calculate the postage cost based on the weight entered by users if the item send to East Malaysia
                    }
                else 
                   {
                    cout << "Invalid location.Please try again." << endl;//If users do not choose the East or West Malaysia,it is invalid and ask user the location again
                    return 0;
                   }
               
                
                if (cost != 0)//if the item is charged for fee,the number of charged item will be increment
                   {
                      item_charged ++;   
                   }

                sum_cost += cost;
    
        
       }
       cout << "The sum of overall postage is RM " << sum_cost << endl;
       cout << "The total number of item being charged with postage cost is  " << item_charged;
       return 0;
       
}    


double postageCostWest(double w)//function header
{
    double c;
    
    if (w>0.1)
        c=w*3.5;
    else 
        c=0;
    return c;

}

double postageCostEast(double w)//function header
{
    double c;
    
    if (w>0.1)
        c=w*5;
    else 
        c=0;
    return c;
}
     