#include <iostream>
#include <string.h>

using namespace std;

struct encryption{
    char enc[200];
    char plaintext[200];
    char ciphertext[200];
    int key;
}e;

int main()
{
    char username[20], password[20], uname[20]="p1", pass[20]="p2", choice;
    int op;
    cout<<"\n  The security of your information matters\n";
    cout<<"---------------------------------------------\n";
    cout<<"     PLEASE LOG IN TO USE FEATURES"<<endl;
    cout<<"---------------------------------------------\n";
    cout<<"     Enter your username: ";
    cin>>username;
    cout<<"     Enter your password: ";
    cin>>password;
    cout<<"---------------------------------------------\n";
    if(strcmp(username,uname)==0 && strcmp(password,pass)==0) //comparing strings method
    {
        cout<<"\n  Welcome to the world of encryption\n\n";
        do{
        cout<<"Please Enter your option:\n";
        cout<<"1.Encryption     2.Decryption     3.Exit\n";
        cin>>op;
            switch (op)
            {
            case 1:
                cout<<"Please enter the encryption key: ";
                cin>>e.key;
                fflush(stdin); //to free up buffer space.
                cout<<"Enter the plaintext: ";
                cin.get(e.plaintext,200); // I used cin.get because, cin just collects a single string. parameters in this case (name of array, size of array).
                cout<<"The Ciphertext is :\n";
                for(int i=0; i<strlen(e.plaintext); i++)
                {
                    e.enc[i]=(int)e.plaintext[i] + e.key;
                    cout<<e.enc[i];
                }
                break;
            case 2:
                cout<<"Please enter the decryption key: ";
                cin>>e.key;
                fflush(stdin); //to free up buffer space.
                cout<<"Enter the Ciphertext: ";
                cin.get(e.ciphertext,200);
                cout<<"The Plaintext is :\n";
                for(int i=0; i<strlen(e.ciphertext); i++)
                {
                    e.plaintext[i]=(int)e.ciphertext[i] - e.key;
                    cout<<e.plaintext[i];
                }
                break;
            case 3:
                exit(0);
                break;
            default:
                cout<<"Enter a correct input";
            }
        cout<<"\nWould you like to continue enter (Y) for yes or any key for close:\n";
        cin>>choice;
        }while (choice =='y' || choice == 'Y');

    }
    else{
        cout<<"Try again later, username or password is incorrect!"<<endl;
    }

}