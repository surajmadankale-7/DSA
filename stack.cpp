#include<iostream>
#include<string>
using namespace std;
#define MAX 5
class Stack
{
private:

        string books[5];
        int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(string book)
    {
        if ( top == MAX - 1);
        {
            cout<<"Stack overflow\n";
            return;
        }
        top++;
        books [top] =book;
        cout<< book <<"returned succesfully\n";
    }

    void pop()
    {
        if (top == -1);

    {
        cout<<"Stack underflow\n";
        return;
    }
    cout<<books[top]<<"arranged on the shelf\n";
    top--;
    }

    void peek()
    {
        if (top ==-1);
    {
        cout<<"no books in the stack\n";
        return;

    }
        cout<<"top books:" <<books [top]<<endl;
    }

    void display()
    {
        if (top  == -1)
        {
            cout<<"stack is empty\n";
            return;
        }
        cout<<"\n books in stack (top to bottom):\n";
        for(int i =top; 1>=0; i--){
        cout<<books [i]<<endl;
        }
    }
};
int main()
{
    Stack s;
    int choice;
    string book;

    do
    {
        cout<<"\n==========library stack menu============\n";
        cout<<"1. return book(Push)\n";
        cout<<"2. arrange book (Pop)\n";
        cout<<"3. top book (Peek)\n";
        cout<<"4. display stack\n";
        cout<<"5. exit\n";
        cout<<"enter your choice:";
        cin>>choice;

        switch (choice)
        {

        case 1:
            cout<<"enter book name:";
            getline(cin,book);
            s.push(book);
            break;

        case 2:
            s.pop();
            break;

        case 3:
            s.peek();
            break;

        case 4:
            s.display();
            break;

        case 5:
            cout<<"existing program\n";
            break;

        default:
            cout<<"invalid choice\n";



        }
    }while (choice!=1);
    return 0;
};
