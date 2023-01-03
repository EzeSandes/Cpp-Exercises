# Exercise

Write, test and draw conclusions with a program in which a "Point class" is declared with private int attributes (coordX, coordY), 
representing the coordinates of a point on the screen(1024x768).  

1. First, just declare and develop (hereafter abbreviated D&D) for this class a method called "show()" that displays on screen the coordinates of the 
point in "(x, y)" format. Test the program with some objects created by default and one created by copy.

2. D&D the default constructor that initialises the coordinates of the point representing the centre of the screen. Verify the operation of the copy constructor.

3. D&D the constructors of: 
    * With a single parameter (attribute 'coordX' allocates directly, but the attribute 'coordY' allocates by taking care of the ratio 1024/768 = 4/3).
    * With both parameters.

Also, check how the assignment between point objects works, showing them before and after the assignment (p1 = p2 = p3).
