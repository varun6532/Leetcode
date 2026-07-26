bool isPalindrome(int x) 
{
    
    if(x < 0 )
    {
        return false ;
    }
    long rev = 0;
    long orignal = x;
    while(x!=0)
    {
        long last  = x % 10;
        rev = rev * 10 + last ;
        x = x/10;
    
    }
    return rev == orignal ;
}