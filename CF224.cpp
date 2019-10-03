#include<bits/stdc++.h>
#define loop(i,a,n) for(int i=a;i<n;++i)
#define rloop(i,n,a) for(int i=n;i>=a;i--)
#define vi vector<int>
#define vl vector<long long int>
#define vvi vector<vector<int> >
#define vvl vector<vector<long long int> >
#define vpii vector<pair<int,int> >
#define vpll vector<pair<long long int,long long int> >
#define si stack<int>
#define sl stack<long long int>
#define mpii map<int,int>
#define mpll map<long long int,long long int>
#define mpci map<char,int>
#define mpcl map<char,long long int>
#define pii pair<int,int>
#define pll pair<long long int,long long int>
#define V vector
#define S stack
#define P pair
// #define F first
// #define Sc second
#define PB push_back
#define mp make_pair
#define IT iterator
#define MOD 1e9 + 7;
using namespace std;

typedef long long int ll;

struct point {
    int x,y;

    point(int a, int b){
        x = a;
        y = b;
    }
    
    point(){
        x = 0;
        y = 0;
    }
};

point p0(INT_MAX, INT_MAX);

int direction(point a, point b, point c) {
   int val = (b.y-a.y)*(c.x-b.x)-(b.x-a.x)*(c.y-b.y);
   if (val == 0)
      return 0;    //colinear
   else if(val < 0)
      return 2;    //anti-clockwise direction
      return 1;    //clockwise direction
}

double distsq(point p0, point p1){
    double val = (p0.x - p1.x)*(p0.x - p1.x) + (p0.y - p1.y)*(p0.y - p1.y);
    val = sqrt(val);
    return val;
}

point NextToTop(S <point> stack){
    //saving the current top;
    point top = stack.top();

    // pop the top element and to get second to top element on top to return;
    stack.pop();
    point res = stack.top();
    //pushing the top once again to return stack to the original state;
    stack.push(top);

    return res;
}

int comp(const void *point1, const void*point2) {
    point *p1 = (point*)point1;
    point *p2 = (point*)point2;
    int dir = direction(p0, *p1, *p2);
    if(dir == 0)
        return (distsq(p0, *p2) >= distsq(p0, *p1))?-1 : 1;
    return (dir==2)? -1 : 1;
}

double ConvexHull(V<point> points, int n) {
    V<point> convexHullPoints;
    
    int minY = points[0].y, min = 0;
    for(int i = 1; i<n; i++) {
        int y = points[i].y;
        //find bottom most or left most point
        if((y < minY) || (minY == y) && points[i].x < points[min].x) {
            minY = points[i].y;
            min = i;
        }
    }
    
    swap(points[0], points[min]);    //swap min point to 0th location
    p0 = points[0];
    
    qsort(&points[1], n-1, sizeof(point), comp);    //sort points from 1 place to end
    
    int arrSize = 1;    //used to locate items in modified array
    for(int i = 1; i<n; i++) {
        //when the angle of ith and (i+1)th elements are same, remove points
        while(i < n-1 && direction(p0, points[i], points[i+1]) == 0)
            i++;
            points[arrSize] = points[i];
            arrSize++;
    }
    
    // if(arrSize < 3)
    //     return convexHullPoints;    //there must be at least 3 points, return empty list.
    
    //create a stack and add first three points in the stack
    stack<point> stk;
    stk.push(points[0]); 
    stk.push(points[1]); 
    stk.push(points[2]);
    
    for(int i = 3; i<arrSize; i++) {    //for remaining vertices
        while(direction(NextToTop(stk), stk.top(), points[i]) != 2)
            stk.pop();    //when top, second top and ith point are not making left turn, remove point
            stk.push(points[i]);
    }
    double res = 0;
    point last = stk.top();
    while(stk.size() > 1){
        res += distsq(NextToTop(stk), stk.top());
        // convexHullPoints.push_back(stk.top());    //add points from stack
        stk.pop();
    }
    res += distsq(last, stk.top());
    stk.pop();
    return res;
}

void solve(){
    int n;
    cin >> n;
    V <point> arr(n);

    loop(i,0,n) {
        cin >> arr[i].x >> arr[i].y;
        if (p0.y > arr[i].y){
            p0.y = arr[i].y;
            p0.x = arr[i].x;
        }
        else if (p0.y == arr[i].y){
            if (p0.x >= arr[i].y){
                p0.x = arr[i].x;
            }
        }
    }
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    cout << ConvexHull(arr, n) << endl;
    return;
}

int main(){
    int t=1;
    //cin >> t;
    while (t--) solve();
}