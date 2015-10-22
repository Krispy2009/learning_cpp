#include <iostream>
#include <vector>
int main()
{
    std::vector<int> ivec = {1,2,5,77,3,4,6,2,7,4,6,24,64};
    std::vector<int>::size_type cnt = ivec.size();
    for(std::vector<int>::size_type ix = 0; ix!= ivec.size(); ++ix,--cnt)
    {
        std::cout << ix << ": " << cnt << std::endl;
        ivec[ix] = cnt;
    }
        
    std::vector<int>::size_type cnt2 = ivec.size();
        
    for(std::vector<int>::size_type ix = 0; ix-1 != ivec.size(); ix++, cnt2--)
    {
        std::cout << ix-1 << ": " << cnt2+1 << std::endl;
        ivec[ix-1] = cnt2+1;
            
            
    }
}