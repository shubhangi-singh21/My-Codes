//Given two 1d vectors, implement an iterator to return their elements alternately.
//v1 = [1, 2]
//v2 = [3, 4, 5, 6]
//By calling next repeatedly until hasNext returns false, the order of elements returned by next should be: [1, 3, 2, 4, 5, 6].

For example, given two 1d vectors:

v1 = [1, 2]
v2 = [3, 4, 5, 6]
By calling next repeatedly until hasNext returns false, the order of elements returned by next should be: [1, 3, 2, 4, 5, 6].

class ZigzagIterator {
public:
    ZigzagIterator(vector<int>& v1, vector<int>& v2) {
       if(!v1.empty())  q.push(make_pair(v1.begin(), v1.end()));
       if(!v2.empty())  q.push(make_pair(v2.begin(), v2.end()));
    }

    int next() {
        auto i = q.front().first;
        auto end = q.front().second; 
        q.pop();
        if(i + 1 != end) q.push(make_pair(i + 1, end));

        return *i;        
    }

    bool hasNext() {
        return !q.empty();
    }
private:
    queue<pair<vector<int>:: iterator, vector<int>:: iterator>> q;
};

/**
 * Your ZigzagIterator object will be instantiated and called as such:
 * ZigzagIterator i(v1, v2);
 * while (i.hasNext()) cout << i.next();
 */
