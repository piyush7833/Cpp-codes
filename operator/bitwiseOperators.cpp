#include <iostream>
using namespace std;


int main(){



return 0;   
}
// & Binary AND. Copies a bit to the result if it exists in both operands.
// 0101
// & 0110
// 0100

// | Binary OR. Copies a bit if it exists in either operand.
// 0101
// | 0110
// 0111

// ^ Binary XOR. Copies the bit if it is set in one operand but not both. dono same value hain toh 0 alg hain toh 1
// 0101
// ^0110
// 0011

// ~ Binary Ones Complement. Flips the bit.
// ~0101 => 1010

// << Binary left shift. The left operands bits are moved left by the number of places specified by the rightoperand. like here all 4 bits are shift by 1 in left
// 4 (0100)
// 4<<1
// =1000 = 8

// >>  Binary right shift. The left operands bits are moved right by the number of places specified by theright operand.
// 4>>1
// =0010
// If shift operator is applied on a number N then,
//  N<<a will give a result N*2^a
//  N>>a will give a result N/2^a