#include <iostream>
#include <string>
#include <cctype>

const int SIZE = 80;

using namespace std;

int main(void){

    char ch[SIZE];
    char ch_outnum[SIZE];
    int count = 0;
    int i = 0;
    cout << "Enter the char[80]" << endl;
    cin.getline(ch, SIZE);
    cout << "complete array is: " << ch << endl;
    while (ch[i] != '\0' && ch[i] != '@')
    {
        if ( !(isdigit(ch[i])) )
        {
            if (isupper(ch[i]))
            {
                ch[i] = ch[i] + 32;
            }else if (islower(ch[i]))
            {
                ch[i] = ch[i] - 32;
            }
            ch_outnum[count] = ch[i];
            ++count;
        }
        i++; 
    }
    ch_outnum[count] = '\0';
    cout << "char array without number is: " << ch_outnum << endl;
    
    
    
    return 0;
}