/*
    Ints have a guaranteed minimum size of 16 so on some machines we would have 16 bit
    integers. This means that on some machines we would be able to save only 16 students 
    instead of the required 27.
    So we use a long, which has guaranteed minimum size of 32, which is more than 
    our required 27. 
*/