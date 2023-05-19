/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int y=0;
    int size =11;
    
        int nums[size] = {0,3,0,2,0,6,7,0,5,3,2};
        int hold[size];
        
        for(int x =0; x<size ; x++){
        if(nums[x]!=0){
        hold[y] =nums[x];
        y++;
        };
            
        };
        
        for(int x =0; x<size ; x++){
        if(hold[x] <1){
            hold[x] =0;
        }
        cout<< hold[x];
        }
        

    return 0;
}
