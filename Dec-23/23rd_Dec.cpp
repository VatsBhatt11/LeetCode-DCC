class Solution {
public:
    bool isPathCrossing(string path) {
        map<pair<int,int>,int>m;
        int x=0,y=0;
        m[{0,0}]++;
        for(auto it:path)
        {
            if(it=='N')
                y++;
            else if(it=='S')
                y--;
            else if(it=='E')
                x++;
            else
                x--;
            if(m[{x,y}])
                return true;
            m[{x,y}]++;
        }
        return false;
    }
};