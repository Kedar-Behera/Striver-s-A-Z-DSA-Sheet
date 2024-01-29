void insert(stack<int> &st,int top_element){
    if(st.empty()){
        st.push(top_element);
        return;
    }
    int element = st.top();
    st.pop();
    insert(st,top_element);
    st.push(element);
}

void reverseStack(stack<int> &st) {
    // Write your code here
    //Base case
    if(st.empty()){
        return;
    }
    int top_element = st.top();
    st.pop();
    reverseStack(st);
    insert(st,top_element);

}