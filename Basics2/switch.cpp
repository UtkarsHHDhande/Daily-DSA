#include <iostream>
using namespace std;

// int main(){
//     char ch = '1';
//     int num = 1;
//     cout<<endl;

//     switch (ch){
//     case 1:
//        cout<<"First"<<endl;
//         break;

//     case '1':
//     switch(num){
//      case 1:
//     cout<<"Value of num is : "<<num<<endl;
//         break;
//        }
//      break; 
    
//     default:
//     cout<<"It is default case"<<endl;
//         break;
//     }
//     cout<<endl;
// } 


// int main(){
//    int a,b;
//    cout<<"Enter the value of a : "<<endl;
//    cin>>a;
//    cout<<"Enter the value of b : "<<endl;
//    cin>>b;

//    char op;
//    cout<<"Enter the Operation you want to perform : "<<endl;
//    cin>> op;

//    switch (op)
//    {
//    case '+':
//         cout<<(a+b)<<endl;
//     break;
//     case '-':
//         cout<<(a-b)<<endl;
//     break;
//     case '*':
//         cout<<(a*b)<<endl;
//      break;
//     case '/':
//         cout<<(a/b)<<endl;

//     break;
//     case '%':
//         cout<<(a%b)<<endl;

//     break;
   
//    default:
//    cout<<"Please enter a valid operation"<<endl;
//     break;
//    }
   

//    return 0;
// }


// int main()
// {
//   int amount;
//   cout << "Enter the Total Amount: ";
//   cin >> amount;
//   int count100 = 0, count50 = 0, count20 = 0, count1 = 0;
  

//   switch(amount >=count100) {
//     case 1 : count100 = amount / 100;
//     amount %= 100;
//     break;
//   }
//   switch(amount >=count50) {
//     case 1 : count50 = amount / 50;
//     amount %= 50;
//     break;
//   }
//   switch(amount >=count20) {
//     case 1 : count20 = amount / 20;
//     amount %= 20;
//     break;
//   }
//   switch(amount >=count1) {
//     case 1 : count1 = amount / 1;
//     amount %= 1;
//     break;
//   }
   
  
//   cout << "No. of 100 notes: " << count100 << endl;
//   cout << "No. of 50 notes: " << count50 << endl;
//   cout << "No. of 20 notes: " << count20 << endl;
//   cout << "No. of 1 notes: " << count1 << endl;
  
//   return 0;
// }