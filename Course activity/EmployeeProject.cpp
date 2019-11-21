#include<iostream>
#include<string.h>
using namespace std;


int e[5]={1,2,3,4,5};       // Employee's id
string n[5]={"Chandler","Phoebe","Rachael","Monica","Ross"}; //Employee's name
string d[5]={"ECE","ECE","ECE","CSE","ECE"};    //Employee's department
int y[5]={10,20,15,10,10};  //Year of experience of employee
int p1[5]={111,222,333,444,555};    //password assign to employee to access personal details
string res[5]={"Nilaya","Samaya","Pranaya","Anaya","Amma"}; //Name of the residency of employee
float sala[5]={20000,20000,25000,20000,25000};  //Salary of employee
int i,id,j;

//Employee class which is used as structure to store above details
class emp{
private:
    float sal;  //Salary of employee
    string home;   //Name of the residency of employee
    int hono;   //ID used as house number
    int blno;   //Password used as block number
public :
    int empno;  // Employee's id
    string name;    //Employee's name
    string dept;    //Employee's department
    int yoe;    //Year of experience of employee
    int p;   //password assign to employee to access personal details
    void passw(string a,float s,int h,int b)        //function to use to validate password and provide the personal details
    {
        int pasw;
        home=a;
        hono=h;
        sal=s;
        blno=b;
        cout<<"Enter the employee password :"<<endl;
        cin>>pasw;
        if(pasw==p)
        {
            cout<<"Residence :"<<home<<"\nHome No :"<<hono<<"\nBlock No :"<<blno<<endl;
            cout<<"The salary package is :"<<sal<<"/month"<<endl;
        }
        else
        {
            cout<<"The Password is Incorrect"<<endl;
        }
    }
};

emp c[5];           //Defining array with size 5 for 5 employees

int main()
{
    string nam;
    char choice,ch;
    for(i=0;i<5;i++)        //loop to access details of one employee
    {
        c[i].empno=e[i];
        c[i].name=n[i];
        c[i].dept=d[i];
        c[i].yoe=y[i];
        c[i].p=p1[i];
    }
    enter:
    cout<<"Enter the employee ID";      //input the id of employee
    cin>>id;
    for(j=0;j<5;j++)
    {
        if(id==c[j].empno)          //check if id exist or not
        {
            na:
            cout<<"Enter your name :";  //input name of employee
            cin>>nam;
            if(nam==c[j].name)          //check if name exist or not
            {
                //output the work details
                cout<<"ID NO. :"<<c[j].empno<<endl<<"Emp    loyee name :"<<c[j].name<<endl<<"Department of work :"<<c[j].dept<<endl<<"Years of experience :"<<c[j].yoe<<endl;
                c[j].passw(res[j],sala[j],e[j],y[j]);       //function call to access the personal details
                cout<<"Do you need to change the personal info. y/n"<<endl; //to update personal details
                cin>>choice;
                if(choice=='y') //enter new residance name,House number,block number
                {
                    cout<<"Enter the name of residence :"<<endl;
                    cin>>res[j];
                    cout<<"Enter the Home number :"<<endl;
                    cin>>e[j];
                    cout<<"Enter the Block number :"<<endl;
                    cin>>y[j];
                }
                else
                {
                    cout<<"Press 'e' to exit or 'c' to continue: "<<endl;   //to exit or continue
                    cin>>ch;
                    if(ch == 'e'){exit(0);}
                    cout<<"**********THANK YOU**********"<<endl;
                }
            }
            else
            {
                cout<<"The name entered is INCORRECT\n";
                goto na;     //branch to label na if name is incorrect
            }
        }
    }
    goto enter; //branch to label 'enter' to access details of another employee.
}


