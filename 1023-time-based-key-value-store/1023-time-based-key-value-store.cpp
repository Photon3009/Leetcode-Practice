class TimeMap {
private:
    unordered_map<string, vector<pair<int, string>>> data;

public:
    TimeMap() {
    }
    
    void set(std::string key, std::string value, int timestamp) {
        data[key].push_back({timestamp,value});
    }
    
    std::string get(std::string key, int timestamp) {
        if (data.find(key) == data.end()) {
            return "";
        }
        int l=0,r=data[key].size()-1;
        if(data[key][0].first>timestamp){
            return "";
        }
        string ans;
        while(l<=r){
            int mid=(l+r)/2;
            if(data[key][mid].first==timestamp){
                return data[key][mid].second;
            }
            if(data[key][mid].first<timestamp){
                ans=data[key][mid].second;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return ans;
    }
};
/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */