/**Develop a calculator program that performs basic arithmetic operations such as addition, subtraction, 
multiplication, and division. Allow the user to input two numbers and choose an operation to perform**/

#include <iostream>
using namespace std;

class calculator {
public:
    string password="coding";
    string key;
    
    void display(const string& name, const string& language, const string& company, const string& task) 
    {
        cout<<"-->Name: "<<name<<endl;
        cout<<"-->Language: "<<language<<endl;
        cout<<"-->Internship at "<<company<<endl;
        cout<<"-->Task: "<<task<<endl;
    }

    void access() 
    {
        cout<<"\t\t\tIn order to access the Calculator, you will have to enter the right password"<<endl;

        do{
            cout << "\n-->Enter the Password: ";
            cin >> key;
            cout<<"-->The password that you entered was "<<key<<endl;
            
            if(password!=key)
            {
                cout<<"-->The provided password was invalid!! Try again...."<<endl;
            }

            if (key==password) 
            {
                cout<<"-->The password was a match !! Login Successful..."<<endl;
                break;
            }

        } while (key!=password);
    }

    long double add(long double x, long double y)
    {
        return x+y;
    }

    long double sub(long double x, long double y)
    {
        return x-y;
    }

    long double mult(long double x, long double y) 
    {
        return x*y;
    }

    long double divv(long double x, long double y) 
    {
        if(y!=0) 
        {
            return x / y;
        } 
        else 
        {
        cout<<"Divisor cannot be 0"<<endl;
        return 0;
        }
    }
};

int main() 
{
    calculator obj;
    obj.display("Sumedh","C++","Codsoft","Task 2");
    obj.access();
    cout<<"\t\t\t\t\t\nSimple Calculator"<<endl;
    cout<<"--> 1.  Addition"<<endl;
    cout<<"--> 2.  Subtraction"<<endl;
    cout<<"--> 3.  Multiplication"<<endl;
    cout<<"--> 4.  Division"<<endl;
    while(1)
    {
    int choice;
    cout<< "--> Enter choice [1,2,3,4]: ";
    cin>> choice;
    

    if(choice<1||choice>4) 
    {
        cout<<"Invalid choice"<<endl;
        return 1;
    }

    long double num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;

    switch(choice) 
    {
        case 1:
            cout<<num1<<" + "<< num2<<" = "<<obj.add(num1,num2)<<endl;
            break;
            
        case 2:
            cout<<num1<<" - "<<num2<<" = "<<obj.sub(num1,num2)<<endl;
            break;
            
        case 3:
            cout<<num1<<" * "<<num2<<" = "<<obj.mult(num1,num2)<<endl;
            break;
            
        case 4:
            cout<<num1<< " / "<< num2 <<" = "<< obj.divv(num1, num2)<<endl;
            break;
         }
    }
    return 0;
}









