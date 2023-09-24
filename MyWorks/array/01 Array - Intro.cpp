#include <iostream>

using namespace std;

int main()
{

    int marks[100]={-1};
    int n;

    cout << "Enter Count:" << endl;
    cin >> n;

    for(int i=0;i<n;i++){
        cout <<"Enter Mark : ";
        cin >> marks[i];
    }

    for(int i=0;i<n;i++){
        cout <<"Mark"<<i<<":"<<marks[i]<<endl;
    }
    return 0;
}
