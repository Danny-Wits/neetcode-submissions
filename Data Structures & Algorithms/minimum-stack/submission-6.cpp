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

    int top() { return v.back(); }

    int getMin() {
        if (minList.empty()) return INT_MAX;
        return minList.back();
    }
};
