// Caesar cipher

string caesarCipher(string s, int k) {
    k = k % 26;
    for(int i = 0 ; i < s.size(); i++)
    {
        if(s[i] >= 65 && s[i] <= 90) {
            if(s[i] + k > 90)
                s[i] -= 26;
            s[i] += k;
        }
        else if(s[i] >= 97 && s[i] <= 122) {   
            if(s[i] + k > 122)
                s[i] -= 26;
            s[i] += k;
        }
    }
    return s;
}
