# Objects in 2d and 3d

The project contains three classed to describe geometric points, lines and polygons by coordinates in 2d (x,y) or 3d (x,y,z).

## Summary

Each of the classes mentioned above is used to describe point object, line objects and polygones with 2d and 3d coordinates. The main file "Objects-in-2d-and-3d" shows examples on how these classes can be used. 
It stats by creating 4 points, these points are then divided into two groups to create one line each. A vector is used for polygon and both points and lines can be pushed into the vector to create a polygon. 
A polygon can also be created with another polygon and a point or a line, this is also demonstrated in this file.

### Point Class

It's a simple class containing a constructor, operator overloading and a few functions. The constructor contains three int values for the x-axis, y-axis and z-axis. 
The operator overloading is done to return the coordinates of a point in 2d or 3d. It also contains simple get functions for x, y and z. 

### Line Class

A line is drawn between two points. This class includes the previous discussed point class. This class contains a constructor which consist of two points.
A point p which is the start point of the line, and a point q which is the end point. It has an operator overloading in order to return the line, as well as get and set functions for the start point and end point.

### Polygon class

A polygon is a unknown number of points, because of this i'm using a vector to store this undefined number. The constructor expects the input of the polygon object to consist of the points making up the polygon.
The class has multiple functions to either get the number of points in the polygon or to create a new polygon by merging the current and either adding a point, line or another polygon.
It also contains of operator overloading to easy return the points in the polygon. 


**Feel free to use the code as your own! If you have any questions regarding the project, don't hesitate to contact!**
