class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int real = num;
        while(real != 0) {
            int digit = real % 10;
            if(num % digit == 0){
                count ++;
            }
            real = real / 10;
        }
        return count;
    }
};
