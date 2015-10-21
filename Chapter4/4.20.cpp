#include <iostream>
#include <vector>

int main()
{   
    std::vector<std::string> v1 = {"one", "two", "three", "four", "five", "six"};
    auto iter = v1.begin();

    /*
        (a) *iter++. this is legal.
        It first increments the iterator but yields the unincremebted value so then
        it dereferences it to get the value of iter. 
        so we are getting the value of the first element of the vector, and our iter is
        pointing to the second.
    */
        std::cout << *iter++ << std::endl;
    /*
        (b) (*iter)++. this is illegal. We first dereference the value and then increment
        it by one. It would have been legal if this was not a vector of strings. We cannot 
        increment a string by 1 so this is illegal.
    */
        std::cout << (*iter)++ << std::endl;
    /*
        (c) *iter.empty(). this is illegal. This is trying to get the value of iter.size()
        and then dereference it. iterators do not have a size() member function and you
        cannot dereference the value of that call so this is illegal.
    */
        std::cout << *iter.empty() <<std::endl;
    /*
        (d) iter->empty(). This is legal. The arrow notation is equivalent to
        (*iter).empty() which is valid. We are trying to check if the string pointed to
        by the current iterator is empty. The string at iter has a member function 
        empty() so this is legal.
    */
        std::cout << iter->empty() <<std::endl;
   
    /*
        (e) ++*iter. This is illegal because it is trying to  increment the dereferenced
        value of iter. Dereferencing iter yields a string, and incrementing a string 
        is undefined.
         
    */
        std::cout << *iter  << " and " << ++*iter << std::endl;
        
    /*
        (f) iter++->empty(); This is legal. It is incrementing iter by one, but yields
        the unincremented one, so it is then dereferencing the unincremented iter and 
        checks if the string at that position is empty. It is equivalent to iter->empty();  
        iter+1;
    */
        std::cout << iter++->empty() << std::endl;
    
    
}