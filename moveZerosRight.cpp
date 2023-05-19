#include <iostream>

using namespace std;

int main()
{
   int y=0;
    int size =11;                                  //SET SIZE (IMPORTANT)
    
        int nums[size] = {0,3,0,2,0,6,7,0,5,3,2};   //ARRAY
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
        cout<< hold[x];                             //GIVES RESULT
        }
        

    return 0;
}
