#include<iostream>

using namespace std;

void encrypt()
{
    char str[100];
    cout<<"Enter a string :";
    cin>>str;
    for (int i=0;(i<100 && str[i]!='\0'); i++)
    {
        str[i]=str[i]+2;
    }
    cout<<str;
}

void decrypt()
{
    char str[100];
    cout<<"Enter a string :";
    cin>>str;
    for (int i=0;(i<100 && str[i]!='\0'); i++)
    {
        str[i]=str[i]-2;
    }
    cout<<str;
    
}

int main()
{
    int choice;
    cout<<"************MENU************"<<endl;
    cout<<"1.Encryption"<<endl;
    cout<<"2.Decrypyion"<<endl;
    cin>>choice;

    switch (choice)
    {
    case 1:
        encrypt();
        break;

    case 2:
        decrypt();
        break;
    
    default:
        cout<<"Plese Enter valid input";
        break;
    }

}