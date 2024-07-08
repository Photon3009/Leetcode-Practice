class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
          int n = position.size();
        std::vector<std::pair<int, double>> cars(n);
        
        for (int i = 0; i < n; ++i) {
            cars[i] = {position[i], (double)(target - position[i]) / speed[i]};
        }
        
        // Sort cars by starting position in descending order
        std::sort(cars.begin(), cars.end(), std::greater<std::pair<int, double>>());
        
        int fleets = 0;
        double currentFleetTime = 0;
        
        for (const auto& car : cars) {
            if (car.second > currentFleetTime) {
                // New fleet is formed
                currentFleetTime = car.second;
                fleets++;
            }
        }
        
        return fleets;

    }
};