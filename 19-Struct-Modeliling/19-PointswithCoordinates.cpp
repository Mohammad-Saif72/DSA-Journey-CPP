// Q19. Points with Coordinates

// You are given multiple points:

// (2, 3)
// (5, 1)
// (-2, 4)
// Task

// Design a Point struct.

// Then write a function that finds the point with the greatest:

// x + y

// Questions to think about:

// Should the function modify the vector?
// What parameter type should you use?
// Should you return an index or a Point?

// Choose one design and justify it.

#include<iostream>
#include<vector>

struct Point{
    int x;
    int y;
};

Point greatestPoint(const std::vector<Point>& point){
    int sum = point[0].x+point[0].y;
    int index = 0;
    for(int i=1;i<point.size();i++){
        if(point[i].x+point[i].y>sum){
            sum = point[i].x+point[i].y;
            index = i;
        }
    }

    return point[index];
}

int main(){

    std::vector<Point> points={
        {2,3},
        {5,1},
        {-2,4}
    };

    Point res = greatestPoint(points);

    std::cout<<"x = "<<res.x<<"   y = "<<res.y;

    return 0;
}