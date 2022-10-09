#include<iostream>
using namespace std;
int main()
{
    float netSalary,basic,percentAllow,percentDeduct;
    cout<<"Enter basic Salary";
    cin>>basic;
    cout<<"Enter percent of Allowance";
    cin>>percentAllow;
    cout<<"Enter percentage of deduction";
    cin>>percentDeduct;
    netSalary=basic+basic*percentAllow/100-
basic*percentDeduct/100;
    cout<<"Net Salary is"<<netSalary<<endl;
    return 0;
}
