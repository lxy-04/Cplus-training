#include <iostream>
#include "stack_new.h"

using namespace std;

int main()
{
    Stack st(5);
    Stack st2(6);
    int tmp;
    for (int i = 0; i < 4; i++)
    {
        st.push(10 * i);
    }
    st2 = st;
    cout << st2 << endl;
    int top_val = st.top_val();
    for (int i = 0; i < top_val; i++)
    {
        st.pop(tmp);
        cout << st << endl;
        cout << "tmp is " << tmp << endl;
    }
    
    
    return 0;
}
