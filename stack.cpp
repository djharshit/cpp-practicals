#include <iostream>

using namespace std;

class Stack{
    private:
        int top, c;
        int num[10];
    public:
        Stack();
        int push(int);
        int pop();
        int isEmpty();
        void display();
};

Stack::Stack(){
    top = -1;
    c = 0;
}

int Stack::isEmpty(){
    return (c==0);
}

int Stack::push(int n){
    if(c >= 10){
        return 0;
    }
    top++; c++;
    num[top]=n;
    return n;
}

int Stack::pop(){
    int temp;
    if(c == 0){
        return 0;
    }
    temp=num[top];
    top--; c--;
    return temp;
}

void Stack::display(){
    int i;
    cout << "Stack is: ";
    for(i=(top); i>=0; i--){
        cout << num[i] << " ";
    }
    cout << endl;
}

int main(){
    Stack stk;
    int choice, n,temp;

    do
    {
        cout<<endl;
        cout<<"0 - Exit."<<endl;
        cout<<"1 - Push Item."<<endl;
        cout<<"2 - Pop Item."<<endl;
        cout<<"3 - Display Items (Print Stack)."<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 0: break;

            case 1:
                cout<<"Enter item to insert: ";
                cin>>n;
                temp=stk.push(n);
                if(temp==0)
                    cout<<"Stack is FULL."<<endl;
                else
                    cout<<temp<<" inserted."<<endl;
            break;

            case 2:
                temp=stk.pop();
                if(temp==0)
                    cout<<"Stack IS EMPTY."<<endl;
                else
                    cout<<temp<<" is removed (popped)."<<endl;
            break;

            case 3:
                stk.display();
                break;
            default:
                cout<<"An Invalid choice."<<endl;
        }
    }while(choice!=0);


    return 0;

}
