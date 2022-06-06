vector<int> smaller(int arr[],int n){
    vector<int> ans;
    // int count = 0;
    stack<int> st;
    for(int i=0;i<n;i++){
        if(st.empty())
        ans.push_back(1);

        else if(!st.empty() and st.top() > arr[i])
        ans.push_back(i-(find(arr,arr+n,st.top())-arr));

        else if(!st.empty() and st.top() < arr[i]) {
            while(!st.empty() and st.top() < arr[i])
            st.pop();

            if(st.empty())
            ans.push_back(1);

            else
            ans.push_back(i-(find(arr,arr+n,st.top())-arr));
        }
        st.push(arr[i]);
            
    }
    return ans;

}
