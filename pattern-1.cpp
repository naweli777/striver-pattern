// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 

#include<iostrem.h>
int main() {
    // Write C++ code here
    int n;
    std::cin>>n;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            std::cout<<"*"<<" ";
        }
        std::cout<<std::endl;
    }

    return 0;
}