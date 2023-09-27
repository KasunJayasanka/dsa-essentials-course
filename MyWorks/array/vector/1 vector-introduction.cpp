#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    //vector<int> arr={1,2,3,4,5};
    
    vector<int> arr(10,7);
    
    vector<int> arr(10,100);
    
    cout << arr.size() << endl;
    
    arr.push_back(4);//insert element to end
    
    cout << arr.size()<<endl;
    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<", ";
    }
    
    arr.pop_back();//remove last element 
    
    cout<<endl;
    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<", ";
    }
    return 0;
}
