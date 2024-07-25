#include <iostream>
using namespace std;

void printArray(int arr[],int size){
  cout<<"Printing the array"<<endl;
    // print the array
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
  cout<<"Printing Done"<<endl;

}

int main(){
    // Declare
    int number[15];

    //accessing an array
    // cout<<"Value at 15 index : "<< number[14]<<endl;

    // cout<<"Value at 100 index : "<< number[100]<<endl;

    //initialising an array
    int second[3] = {5,7,11};

    //accessing an element

    // cout << "Value at 2 index "<< second[2] <<endl;

    int third[15]={2,8};

    int n = 15;
   printArray(third,15);

    //initialising an array with 0
    int fourth[10] = {0};

    n=10;
    printArray(fourth,10);

  //initialising an array with 0
    int fifth[10] = {0};

    n=10;
        printArray(fifth,10);

  int fifthSize = sizeof(fifth)/sizeof(fifth[0]);
  // cout<<"Size of fifth array : "<<fifthSize<<endl;


    
  //initialising an array with 1 [not possible with below line]
    int sixth[10] = {1};

    n=10;
    // cout<<"Printing the array"<<endl;
    // print the array
    for(int i = 0; i<n; i++){
        // cout<<sixth[i]<<" ";
    }

    
    

    cout<<endl<<"Everything is Fine"<<endl;

    return 0;
}