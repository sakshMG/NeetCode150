#include <stack>
#include <utility>
#include <vector> 

using namespace std;

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        stack <pair<int,int>> fleets; 
        int fleetNum = 1; 

        for (int i = 0; i < position.size(); i++) {
            pair<int, int> car_time;
            
            car_time.first = i;     
            car_time.second = target - position[i] / speed[i];
            
            while (!fleets.empty()) {


                fleets.pop(); 
                fleetNum++; 

            }

            fleets.push(car_time);

        }

        return true; 

        
    }
};

// Car cannot overtake 
// Calculate the time each car would theoretically take 
// If a car infront takes longer or is equal, becomes part of a fleet 
// Complete this  
