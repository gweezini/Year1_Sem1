#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

//prototype
int getProblem();
void getRateDropFactor();
void getKgRateConc();
double byWeight(double a,double b,double c);


int main()
{
    getProblem();
    getRateDropFactor();
    getProblem();
    getKgRateConc();

    return 0;
}

int getProblem()
{
    int input;
    cout<<"INTRAVENOUS RATE ASSISTANT"<<endl;
    cout<<"Enter the number of the problem you wish to solve."<<endl;
    cout<<setw(4)<<"GIVEN A MEDICAL ORDER IN"<<setw(8)<<"CALCULATE RATE IN"<<endl;
    cout<<"(1) ml/hr & tubing drop factor "<<setw(8)<<"drops/min"<<endl;
    cout<<"(2) mg/kg/hr&concentration in mg/ml"<<setw(8)<<"ml/hr"<<endl;
    cout<<"(3) QUIT"<<endl;
    cout<<endl;
    cout<<endl;
    return 0;
}

void getRateDropFactor()
{
    int input;
    double rate,dropsperml,result;
    cout<<"Probelm => ";
    cin>>input;
        if(input==1)
        {    cout<<"Enter rate in ml/hr=> ";
        cin>>rate;
        cout<<"Enter tubing's drop factor(drops/ml)=>";
        cin>>dropsperml;
        result=rate*dropsperml/60;
        cout<<"The drop rate per minute is: "<<ceil(result)<<endl;
        cout<<endl;
        cout<<endl;
        }
}

void getKgRateConc()
{
    int input;
    double rate,weight,concentration,result;
    cout<<"Probelm => ";
    cin>>input;
    if(input==2)
    {    
        cout<<"Enter rate in mg/hr=> ";
        cin>>rate;
        cout<<"Enter patientt weight in kg=> ";
        cin>>weight;
        cout<<"Enter concentration in mg/ml=> ";
        cin>>concentration;
        double final=byWeight(rate,weight,concentration);
        cout<<"The drate in millilitres per hour is: "<<ceil(final);
    }

}

double byWeight(double a,double b,double c)
{
    double r=a*b/c;
    return r;
}