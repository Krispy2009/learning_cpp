/*
** Drawbacks of using arrays instead of vectors 
**
** 1. Once initialized we cannot change the size of an array. So we lose some of the
**   flexibility we have with vectors. 
**
** 2. We can only initialize an array using a literal or a constexpr.    
**
** 3. We cannot use auto to deduce the type of an array from a list of initializers.
**
*/