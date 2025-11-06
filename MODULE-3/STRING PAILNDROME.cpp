#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    char str1[100],str2[100];

    cout<<"Enter string: ";
    cin>>str1;

    strcpy(str2,str1);

    strrev(str1);

    cout<<"Reversed string: "<<str1<<endl;

    if(strcmp(str1,str2)==0)
    {
        cout<<"Pailndrome ";
    }
    else
    {
        cout<<"Normal";
    }

    
    return 0;
}
