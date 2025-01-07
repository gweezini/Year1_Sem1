///This is Assignment 1 Question 2
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    int employnum,hour,num_toys;
    double pay=0,fixsalary,netsalary=0;
    char employcode,catecode,contractcode,sizecode;

    cout<<"Enter your name: ";
    getline(cin,name);//Prompt employee to enter name
    cout<<"Enter your employee number: ";
    cin>>employnum;//Prompt employee to enter employee number
    cout<<"Ener your employee code(G,K or S): ";
    cin>>employcode;
    if(employcode=='G')//If the employee is fixed paid employee
    {
        cout<<"You are categorized under(P:manager or B:non-manager): ";
        cin>>catecode;
        if(catecode=='P')
            cout<<"You are not allowed to claim overtime pay." <<endl;
        else if(catecode=='B')
        {
            cout<<"Enter your overtime hours: ";
            cin>>hour;//prompt user to enter overtime hours
            if((hour>=0)&&(hour<=10))
                pay=hour*15;//calculate the overtime pay based on overtime hour
            else if((hour>10)&&(hour<=20))
                pay=(10*15)+((hour-10)*12);//calculate the overtime pay based on overtime hour
            else
                pay=(10*15)+(10*12);//calculate the overtime pay based on overtime hour
        }
        else
        {    cout<<"Invalid code"<<endl;//User can only enter P or B only,otherwise,program ends
            return 0;
        }
        cout<<"Enter your fixed salary: ";
        cin>>fixsalary;//prompt user to enter the fixed salary
        netsalary=fixsalary+pay;//calculate the netsalary based on fixsalary and the overtime pay
    }
    else if(employcode=='K')//If employee is a ontract worker
    {
        cout<<"Enter  your category(B:Recovery or S:Maintenance): ";
        cin>>contractcode;//prompt user to enter the category of contract worker based on their category
        cout<<"Ener your number of hours worked: ";
        cin>>hour;//prompt user to enter the number of hours worked
        if(contractcode=='B')//If employee is a contract worker that working for recovery
        {
            if((hour>=0)&&(hour<=100))
            netsalary=hour*20;//calculate the netsalary based on the hour
            else if(hour>100)
            netsalary=100*20;//calculate the netsalary based on the hour
            else
            {    cout<<"Invalid hour"<<endl;
                return 0;
            }
        } 
        if(contractcode=='S')//If employee is a contract worker that working for maintenance
        {
            if((hour>=0)&&(hour<=50))
                netsalary=hour*10;//calculate the netsalary based on the hour
            else if((hour>50)&&(hour<=100))
                netsalary=(50*10)+((hour-50)*5);//calculate the netsalary based on the hour
            else if(hour>100)
                netsalary=(50*10)+(50*5);//calculate the netsalary based on the hour
            else
            {    cout<<"Invalid hour"<<endl;
                 return 0;
            }            
        }
    }
    else if (employcode=='S')//If employee is a subcontract worker
    {
        cout<<"Enter the size code of toys(B:Large size toy or S:Medium size toy or K:Small size toy): ";
        cin>>sizecode;//prompt user to the the size of toy
        cout<<"Enter number of toys assembled: ";
        cin>>num_toys;//prompt user to enter the number of toys assembled
        if(sizecode=='B')//If the size of the toy is large
            netsalary=num_toys*8;//calculate the netsalary based on the number of toys assembled
        else if(sizecode=='S')
            netsalary=num_toys*5;//calculate the netsalary based on the number of toys assembled
        else if(sizecode=='K')
            netsalary=num_toys*2;//calculate the netsalary based on the number of toys assembled
        else
        {
            cout<<"Invalid size code"<<endl;
            return 0;
        }
    }
    else
        cout<<"Invalid employee code.";
        return 0;
    cout<<"Employee name: "<<name<<endl;//Display employee name
    cout<<"Employee number: "<<employnum<<endl;//Display employee number
    cout<<"Your monthly income: RM "<<netsalary<<endl;//Display monthly income of the employee
}