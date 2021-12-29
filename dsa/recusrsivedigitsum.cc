// Given an integer, we need to find the super digit of the integer.

int superDigit(string n, int k) {
    long super_digit{0};
    if(n.size() == 1 && k == 1) return n[0] - 48;
    super_digit = accumulate(n.begin(), n.end(), 0) - (n.size() * 48); 
    return superDigit(to_string(super_digit * k), 1);
}
