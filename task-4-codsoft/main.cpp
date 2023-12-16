#include <iostream>
#include <vector>
#include <string>
using namespace std;

class task{
public:

    string content;
    bool marker;

    task(const string& cont)
    {
        
        content=cont;
        marker=false;
    }

    void display() const {
        cout<<(marker ? "[X] " : "[ ] ")<<content<<endl;
    }
};


class list{
    
    public:


    vector<task>cod;


    void add(const string& content) 
    {
        cod.emplace_back(content);
        cout<<"Task added: "<<content<<endl;
    }


    void display() const {
        
        if(cod.empty())
        {
            cout<<"The list is empty.\n";
        } 
        else 
        {
            cout<<"TO DO LIST\n";
            
            for(size_t i = 0;i<cod.size();++i)
            {
                cout<<i + 1<<".";
                cod[i].display();
            }
        }
    }

    void markit(size_t index)
    {
        if (index>=0 &&index<cod.size())
        {
            cod[index].marker= true;
            cout<<"Task marked as completed: "<<cod[index].content<<endl;
        } 
        else 
        {
            cout<<"Invalid index.\n";
        }
    }


    void remove(size_t index)
    {
        if (index >= 0&& index<cod.size()) 
        {
            cout<<"task removed: "<< cod[index].content<<endl;
            cod.erase(cod.begin() + index);
        } 
        else 
        {
            cout<<"Invalid task index.\n";
        }
    }
};

int main()
{
    list sumedh;
    int choice;
   
    do {
        cout<<"\n\t\t\t\t\t\tTO-DO LIST\n";
        cout<<"1. Add Task\n";
        cout<<"2. View Tasks\n";
        cout<<"3. Mark Task as Completed\n";
        cout<<"4. Remove Task\n";
        cout<<"5. Quit\n";
        cout<<"Enter your choice (1-5): ";
        cin>>choice;

        switch (choice) 
        {
            case 1: {
                cin.ignore();
                cout << "Enter task description: ";
                string description;
                getline(cin, description);
                sumedh.add(description);
                break;
            }

            case 2:
                sumedh.display();
                break;

            case 3: {
                cout<<"Enter the index of the task to mark as completed: ";
                size_t index;
                cin>>index;
                sumedh.markit(index - 1);
                break;
            }

            case 4: {
                cout<<"Enter the index of the task that you want to remove: ";
                size_t index;
                cin>>index;
                sumedh.remove(index - 1);
                break;
            }

            case 5:
                cout<<"Exiting the program\n";
                break;

            default:
                cout<<"Invalid entry\n";
        }

    } while(choice!=5);

    return 0;
}



