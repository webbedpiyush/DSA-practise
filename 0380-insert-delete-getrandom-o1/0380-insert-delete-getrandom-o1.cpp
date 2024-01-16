class RandomizedSet {
public:
    unordered_set<int> arr;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(arr.find(val) != arr.end()) {
            return false;
        }
        else {
            arr.insert(val);
            return true;
        }
    }
    
    bool remove(int val) {
        if(arr.find(val) != arr.end()) {
            auto it = arr.find(val);
            arr.erase(it);
            return true;
        }
        else {
            return false;
        }
    }
    
    int getRandom() {
        int N = arr.size();
        auto it = arr.begin();
        advance(it, rand() % N);

        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */