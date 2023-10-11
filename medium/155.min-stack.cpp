/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */

// @lc code=start
class MinStack {

private:
    vector<int> stack_vec;
    vector<int> min_stack_vec;

    int min_val = INT_MAX; 

public:
    MinStack() {
        
    }
    
    void push(int val) {
        min_val = min(min_val,val);
        min_stack_vec.push_back(min_val);
        stack_vec.push_back(val);
    }
    
    void pop() {
        min_stack_vec.pop_back();
        if(min_stack_vec.empty())
            min_val = INT_MAX;
        else
            min_val = min_stack_vec.back();


        return stack_vec.pop_back();
    }
    
    int top() {
        return stack_vec.back();
    }
    
    int getMin() {
        return min_stack_vec.back();
    }

};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

