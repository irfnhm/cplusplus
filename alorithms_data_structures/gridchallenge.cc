/** Given a square grid of characters in the range ascii[a-z], rearrange elements of each row alphabetically, ascending. Determine if the columns are also in ascending alphabetical order, top to bottom. Return YES if they are or NO if they are not. **/

string gridChallenge(vector<string> grid) {
    for(auto &c : grid) {
        string s = c;
        if(!is_sorted(s.begin(), s.end()))
          sort(s.begin(), s.end()); // if unsorted
        c = s; // add sorted element back
    }
    
    for(int i = 0; i < grid.size() - 1; i++) {
        for(int j = 0; j < grid.at(i).size(); j++) {
            if(grid.at(i).at(j) > grid.at(i + 1).at(j)){
                return "NO";
            }
        }
    }
    return "YES";
}
