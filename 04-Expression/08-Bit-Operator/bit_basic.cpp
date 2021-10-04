#include <iostream>
#include <bitset>
using namespace std;



void bit_move()
{
    unsigned char bits = 0223;
    cout << bitset<32>(bits) << endl;
    cout << bitset<32>(bits << 8) << endl;
    cout << bitset<32>(bits << 31) << endl;
    cout << bitset<32>(bits >> 2) << endl;
    cout << bitset<32>(bits >> 31) << endl;
}

void bit_reverse()
{
    unsigned char bits = 0227;
    cout << bitset<8>(bits) << endl;
    cout << bitset<8>(~bits) << endl;
}

void bit_logic_opt(){
    unsigned char b1 = 0145;
    unsigned char b2 = 0257;
    // cout.width(6);
    
 
    cout << "b1: " << bitset<8>(b1) << endl;

    cout << "b2: " << bitset<8>(b2) << endl;
    
    cout << "b1&b2: " << bitset<8>(b1&b2) << endl;
    cout << "b1|b2: " << bitset<8>(b1|b2) << endl;
    cout << "b1^b2: " << bitset<8>(b1^b2) << endl;
}



int main(int argc, char const *argv[])
{
    /* code */

    // bit_reverse();
    bit_logic_opt();
    return 0;
}
