#include<bits/stdc++.h>
using namespace std;
double mOnEy(double salary,double IP){
    return (salary*IP)/100;
}
int main(){
    double salary,eMoney,nSalary,IP;
    cin>>salary;
    if(salary<=400.00){
        IP = 15.00;
        nSalary=mOnEy(salary,IP)+salary;
        eMoney = nSalary-salary;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<nSalary<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<eMoney<<endl;
        cout<<fixed<<setprecision(0)<<"Em percentual: "<<IP<<" %"<<endl;
    }
    else if(salary>400.00&&salary<=800.00){
        IP=12.00;
        nSalary=mOnEy(salary,IP)+salary;
        eMoney = nSalary-salary;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<nSalary<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<eMoney<<endl;
        cout<<fixed<<setprecision(0)<<"Em percentual: "<<IP<<" %"<<endl;

    }
    else if(salary>800.00&&salary<=1200.00){
        IP=10.00;
        nSalary=mOnEy(salary,IP)+salary;
        eMoney = nSalary-salary;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<nSalary<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<eMoney<<endl;
        cout<<fixed<<setprecision(0)<<"Em percentual: "<<IP<<" %"<<endl;
    }
    else if(salary>1200.00&&salary<=2000.00){
        IP=7.00;
        nSalary=mOnEy(salary,IP)+salary;
        eMoney = nSalary-salary;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<nSalary<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<eMoney<<endl;
        cout<<fixed<<setprecision(0)<<"Em percentual: "<<IP<<" %"<<endl;
    }
    else{
        IP=4.00;
        nSalary=mOnEy(salary,IP)+salary;
        eMoney = nSalary-salary;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<nSalary<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<eMoney<<endl;
        cout<<fixed<<setprecision(0)<<"Em percentual: "<<IP<<" %"<<endl;
    }
}