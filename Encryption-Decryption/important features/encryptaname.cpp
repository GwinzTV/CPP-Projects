#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char name1[10], enc[10];
    cout<< "enter a name:" <<endl;
    cin>> name1;
    cout<<"The encrypted name is :\n";
    for(int i=0; i < strlen(name1); i++)
    {
        enc[i]=(int)name1[i]+4;
        cout<<enc[i];
    }
}