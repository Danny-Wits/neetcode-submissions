class MinStack {
    vector<int> minList;
    vector<int> v;

   public:
    MinStack() {}

    void push(int val) {
        if (val <= getMin()) minList.push_back(val);
        v.push_back(val);
    }

    void pop() {
        if (top() == getMin()) minList.pop_back();
        v.pop_back();
    }

    int top() { return v[v.size() - 1]; }

    int getMin() {
        if (minList.empty()) return pow(2,31)-1;
        return minList[minList.size() - 1];
    }
};
