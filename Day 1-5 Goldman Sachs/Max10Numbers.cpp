
vector<int> maxTenNumbers( vector<int> &arr, int n) 
{
    
    vector<int> maxTen;
    
     
    priority_queue<int, vector<int>, greater<int>> pq;
    
     
    for(int i=0; i<10; i++)
        pq.push(arr[i]);
    
    for(int i=10; i<n; i++)
    {
        if(arr[i]>pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    
    while(!pq.empty())
    {
        maxTen.push_back(pq.top());
        pq.pop();
    }
  return maxTen;
}
