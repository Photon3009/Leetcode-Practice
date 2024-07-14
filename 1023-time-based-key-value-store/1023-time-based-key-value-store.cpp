class TimeMap {
private:
    std::unordered_map<std::string, std::map<int, std::string>> data;

public:
    TimeMap() {
    }
    
    void set(std::string key, std::string value, int timestamp) {
        data[key][timestamp] = value;
    }
    
    std::string get(std::string key, int timestamp) {
        if (data.find(key) == data.end()) {
            return "";
        }
        
        auto& timeMap = data[key];
        auto it = timeMap.upper_bound(timestamp);
        
        if (it == timeMap.begin()) {
            return "";
        }
        
        --it;
        return it->second;
    }
};
/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */