#include<iostream>
using namespace std;
int main(){
    int nums[4]={2,7,11,15};
    int target = 9;
   for (int i = 0; i < 4; i++)
   {
    if (nums[i]+nums[i+1]==target)
    {
        cout << i <<i+1;
    }
    
   }
   
    return 0;
}