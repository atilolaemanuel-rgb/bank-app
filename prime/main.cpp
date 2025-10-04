#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << " number: ";
    cin>> number;

    bool  primeflag = false;
    for(int i = 2; i < number;i ++){
        if (number %i==0){
            is PrimeFlag = true;
        }
    }
    if (is primeflag)
        cout << "prime number" << endl;
    cout << " number :";

    else (not primeflag);
        cout << " not prime number " << endl;


    system(" pause >0");
    return 0;
}
