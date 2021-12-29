/** It is New Year's Day and people are in line for the Wonderland rollercoaster ride. Each person wears a sticker indicating their initial position in the queue from to 1 to n. Any person can bribe the person directly in front of them to swap positions, but they still wear their original sticker. One person can bribe at most two others.Determine the minimum number of bribes that took place to get to a given queue order. Print the number of bribes, or, if anyone has bribed more than two people, print Too chaotic. **/

void minimumBribes(vector<int> q) {
    int count = 0, iterations = 0;
    bool swapped = true;
    while(swapped) {
        swapped = false;
        
        if(iterations > 2) {
            cout << "Too chaotic" << "\n";
            return;
        }
        
        iterations++;
        for(int i = q.size() - 1; i > 0;  i--) {
            if(q.at(i) < q.at(i - 1)) {
                count++;
                swap(q.at(i), q.at(i - 1));
                swapped = true;
            }
        }
    }
    cout << count << "\n";
}
