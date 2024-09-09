#include <stdio.h>

int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    int remainder;

    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isPalindrome(num)) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }
    return 0;
}
