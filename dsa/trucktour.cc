// Hackerrank truck tour problem

int truckTour(vector<vector<int>> petrolpumps) {
  int pump{0}, tank{0};
    for(int i = 0; i < petrolpumps.size(); i++){
        tank += petrolpumps.at(i).at(0) - petrolpumps.at(i).at(1);
        if (tank < 0){
            pump = i + 1;
            tank = 0;
        }
    }
    return pump;
}
