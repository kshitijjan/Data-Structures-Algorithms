void pushAtBottom(stack<int> &s, int x){


    if(s.empty()){
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();
    pushAtBottom(s, x);
    s.push(num);
}