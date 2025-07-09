class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t n1 = 0;
        for (int i = 0; i<32; ++i) {
            uint32_t bit = (n >> i) & 1;
            n1 = (n1 << 1) | bit;
        }

        return n1;
    }
};