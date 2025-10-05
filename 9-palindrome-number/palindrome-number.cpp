class Solution {
public:
    bool isPalindrome(long long x) {
        if(x!=abs(x)){
            return false;
        }
        int number = x;
        int reminder =0;
        long long total=0;
        int divisor=x;

        while(true){
            reminder = divisor%10;
            total=total+reminder;
            divisor=divisor/10;
            if(divisor==0){
                break;
            }
            total=total*10;
        }
        if(x==total){
            return true;
        }
        else{
            return false;
        }
    }
};