class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";  // Special case for zero
    
    unsigned int n = num;  // Handle negative numbers using two's complement (treat as unsigned int)
    string hexStr = "";
    string hexMap = "0123456789abcdef";  // Mapping of remainders to hex characters
    
    while (n > 0) {
        int remainder = n % 16;  // Get the remainder when divided by 16
        hexStr = hexMap[remainder] + hexStr;  // Prepend the corresponding hex character
        n /= 16;  // Divide the number by 16 to move to the next digit
    }
    
    return hexStr;
    }
};