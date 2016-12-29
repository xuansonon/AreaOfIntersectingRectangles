# Area Of Intersecting Rectangles
A console-based application written in C++ that allows users to find the area of an intersection rectangle that is overlapped by two other rectangles. 
<img src="http://i.imgur.com/yDxLORZ.jpg"/><br /><br />

The application will take in two different rectangles (specifically two x,y coordinates), and it will begin to search for intersecting values (i.e. the red rectangle above). Once the values are found, the area of that shape will be returned.
<br />
<br />
**How to compile the application**<br />
On linux terminals:
```
g++ main.cpp rectangle.cpp -o ./OverlappingRectangles
```

**How to use the application**<br />
```
./OverlappingRectangles
```

**Still to do**
- [ ] Add support for decimal values
- [ ] Add support for multiple shapes
- [ ] Allow users to enter in their own values for rectangles

Note: If anyone knows a better implementation (performance or structure-wise) please let me know!
