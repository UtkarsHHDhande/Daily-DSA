// #include <iostream>
// #include <climits>

// int main() {
//     int arr[] = {5, 2, 9, 1, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int maxElement = INT_MIN;
//     int minElement = INT_MAX;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] > maxElement) {
//             maxElement = arr[i];
//         }
//         if (arr[i] < minElement) {
//             minElement = arr[i];
//         }
//     }

//     std::cout << "Maximum element: " << maxElement << std::endl;
//     std::cout << "Minimum element: " << minElement << std::endl;

//     return 0;
// }

// sum of array elements
#include <iostream>
using namespace std;
int main(){
    int arr[]={2,7,1,-4,11};
    int sum=0;
    cout<<"sum of array elements"<<endl;
    sum = arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
    cout<<sum<<endl;
}