class Solution {
    public:
        
        int numRabbits(std::vector<int>& answers) {
            map<int, int> frequencyMap;
            for (int answer : answers) {
                frequencyMap[answer]++;
            }
            int totalRabbits = 0;
            for (auto& entry : frequencyMap) {
                int otherRabbits = entry.first;           
                int frequencyOfClaim = entry.second;        
                int groupsOfRabbits = static_cast<int>(ceil((double)frequencyOfClaim / (otherRabbits + 1)));
    
                totalRabbits += groupsOfRabbits * (otherRabbits + 1);
            }
            return totalRabbits;
        }
    };