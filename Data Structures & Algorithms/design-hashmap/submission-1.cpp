class MyHashMap {
   public:
    vector<int> map;
    MyHashMap() { map = vector<int>(1000001, -1); }

    void put(int key, int value) { map[hash(key)] = value; }

    int get(int key) { return map[hash(key)];}

    void remove(int key) { map[hash(key)] = -1; }
    int hash(int key) { return key % 1000003; }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */