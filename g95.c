/*

Alex is developing a fitness application that utilizes a Collatz-like sequence to gamify step goals. The program employs a static storage specifier. Implement a function collatzSequence(int num), which calculates and displays the sequence for a given number of steps. 



The sequence is generated based on even and odd rules.

If n is even, then n = n / 2.
If n is odd, then n = 3*n + 1.
Repeat the above steps, until it becomes 1.


Example



Input:

3

Output:

3 10 5 16 8 4 2 1 

Explanation:

The input of 3, and the Collatz sequence unfold as follows: 3 is odd, so it becomes 3 * 3 + 1 = 10. Then, 10 is even, halving to 5, and the sequence continues: 16, 8, 4, 2, 1.

Input format :
The input consists of a positive integer n.

Output format :
The output should display the Collatz sequence separated by space starting from the entered number.*/

#include <stdio.h>
void collatzSequence(int num) {
    static int step = 1; 
    printf("%d ",num);
    if (num == 1) {
        return;
    }
    if (num % 2 == 0) {
        collatzSequence(num / 2);
    } else {
        collatzSequence(3 * num + 1);
    }
}
int main() {
    int number;
    scanf("%d", &number);
    collatzSequence(number);
    return 0;
}



Refer to the sample output for the formatting specifications.
*/
