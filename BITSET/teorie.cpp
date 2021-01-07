    // BITWISE OPERATIONS
    
    
    /// HOW TO CREATE A BITSET
    bitset <365> a;
    // in case we have to read a number n and we have to assign it asa a bitset size, i hase to be ****const****
    //ex: 
    const n; cin >> n; bitset <n> a;
    
    
    
    
    
    
    int nr = 7;
    std::cout << "7 = " << std::bitset<8>(nr)  << std::endl;
    // SHIFT LEFT
    std::cout << "7 << 1 " << std::bitset<8>(nr << 1)  << std::endl;
    std::cout << "7 << 3 " << std::bitset<8>(nr << 3)  << std::endl;
    std::cout << "7 << 8 " << std::bitset<8>(nr << 8)  << std::endl;
    // SHIFT RIGHT
    std::cout << "7 >> 1 " << std::bitset<8>(nr >> 1)  << std::endl;
    std::cout << "7 >> 3 " << std::bitset<8>(nr >> 3)  << std::endl;
    std::cout << "7 >> 8 " << std::bitset<8>(nr >> 8)  << std::endl;
    // NOT ~
    std::cout << " 7 = " << std::bitset<8>(nr)  << std::endl;
    std::cout << "~7 = " << std::bitset<8>(~nr)  << std::endl;
    // AND &
    std::cout << "1 & 1 = " << (1 & 1) << std::endl;
    std::cout << "1 & 0 = " << (1 & 0) << std::endl;
    std::cout << "0 & 1 = " << (0 & 1) << std::endl;
    std::cout << "0 & 0 = " << (0 & 0) << std::endl;
    //std::cout << "7 & 15 = " << std::bitset<8>(7 & 15) << std::endl;
    //std::cout << "16 & 15 = " << std::bitset<8>(16 & 15) << std::endl;
    // OR |
    std::cout << "1 | 1 = " << (1 | 1) << std::endl;
    std::cout << "1 | 0 = " << (1 | 0) << std::endl;
    std::cout << "0 | 1 = " << (0 | 1) << std::endl;
    std::cout << "0 | 0 = " << (0 | 0) << std::endl;
    //std::cout << "7 | 15 = " << std::bitset<8>(7 | 15) << std::endl;
    //std::cout << "16 | 15 = " << std::bitset<8>(16 | 15) << std::endl;
    // XOR ^   eXclusive OR
    std::cout << "1 ^ 1 = " << (1 ^ 1) << std::endl;
    std::cout << "1 ^ 0 = " << (1 ^ 0) << std::endl;
    std::cout << "0 ^ 1 = " << (0 ^ 1) << std::endl;
    std::cout << "0 ^ 0 = " << (0 ^ 0) << std::endl;
    //std::cout << "7 ^ 15 = " << std::bitset<8>(7 ^ 15) << std::endl;
    //std::cout << "16 ^ 15 = " << std::bitset<8>(16 ^ 15) << std::endl;
