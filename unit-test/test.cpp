#include <string>
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

// long long factorial_int(long long n)
// {
//   return (n == 1) ? 1 : n * factorial_int(n - 1);
// }
//
// string factorial(int n){
//   return to_string(factorial_int(n));
// }
//
// int main(void)
// {
//   cout << factorial(15) << endl;
// }

// ---

// void display(int arr[]){
//     int ctr = 0;
//     for (int i=0; i<5000; i++){
//         if (!ctr && arr[i])         ctr = 1;
//         if(ctr)
//             std::cout<<arr[i];
//     }
// }
//
// void factorial(int arr[], int n){
//     if (!n) return;
//     int carry = 0;
//     for (int i=5000-1; i>=0; --i){
//         arr[i] = (arr[i] * n) + carry;
//         carry = arr[i]/10;
//         arr[i] %= 10;
//     }
//     factorial(arr,n-1);
// }

void factorial_spec(std::vector<int>& res, int n)
{
  if (!n) return;

  int carry = 0;

  for (int i = n - 1; i >= 0; --i)
  {
    res[i] = res[i] * n + carry;
    carry = res[i] / 10;
    res[i] %= 10;
  }

  factorial_spec(res, n - 1);
}

string factorial_new(int n)
{
  std::vector<int> res(n - 1);
  res.push_back(1);
  factorial_spec(res, n);
  for (auto& num : res) std::cout << num;
  return "";
}

int main(){
    // int *arr = new int[5000];
    // std::memset(arr,0,5000*sizeof(int));
    // arr[5000-1] = 1;
    // int num;
    // std::cout<<"Enter the number: ";
    // std::cin>>num;
    // std::cout<<"factorial of "<<num<<"is :\n";
    // factorial(arr,num);
    // // display(arr);
    // for (auto& num : arr) std::cout << num;
    // delete[] arr;

    factorial_new(5);

    return 0;
}
