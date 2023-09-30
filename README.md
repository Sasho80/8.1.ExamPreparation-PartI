01.Problem Description
Triangle in the plane is defined by the coordinates of its three vertices. First the vertex (x1, y1) is set. 
Then the other two vertices are set: (x2, y2) and (x3, y3), which lie on a common horizontal line (i.e. 
they have the same Y coordinates). Write a program that calculates the area of the triangle by the 
coordinates of its three vertices.
Input
The console gives 6 integers (one per line): x1, y1, x2, y2, x3, y3. ![image](https://github.com/Sasho80/8.1.ExamPreparation-PartI/assets/7139995/ee54bd81-dc4b-4395-a775-cb57cdd7ab90)
• All input numbers are in range [-1000 … 1000].
• It is guaranteed that y2 = y3.
Output
Print on the console the area of the triangle.
Sample Input and Output
Input Output Visualization                                                                                                      Comments 
5     7.5    ![image](https://github.com/Sasho80/8.1.ExamPreparation-PartI/assets/7139995/d5bea326-3c99-4753-bbd6-bf451d0a9bb1) The side of the triangle:
-2                                                                                                                                a = 6 - 1 = 5
6                                                                                                                               The height of the triangle:
1                                                                                                                                h = 1 - (-2) = 3
1                                                                                                                                Triangle area:
1                                                                                                                                S = a * h / 2 = 5 * 3 / 2 = 7.5
                                                                                                                                
Input Output Visualization                                                                                                       Comments 
4     8      ![image](https://github.com/Sasho80/8.1.ExamPreparation-PartI/assets/7139995/96e48ab9-e974-4c3c-b06e-c03600724e8c)  The side of the triangle:
1                                                                                                                                a = 3 - (-1) = 4
-1                                                                                                                               The height of the triangle:
-3                                                                                                                               h = 1 - (-3) = 4
3                                                                                                                                Triangle area:
-3                                                                                                                               S = a * h / 2 = 4 * 4 / 2 = 8

02.Problem: Moving Bricks
The next sample exam problem is to calculate how many trolleys courses are needed to move given 
set of bricks (assuming the trolley has limited capacity).
Problem Description
Construction workers have to transfer a total of x bricks. Workers are w and work simultaneously. 
They transport the bricks in trolleys, each with a capacity of m bricks. Write a program that reads the 
integers x, w, and m, and calculates what is the minimum number of courses the workers need to do 
to transport the bricks.
Input
On the console 3 integers are given, one per line:
• The number of bricks x is read from the first line.
300 Programming Basics with C#
• The number of workers’ w is read from the second line
• The capacity of the trolley m is read from the third line.
All input numbers are integers in the range [1 … 1000].
Output
Print on the console the minimum number of courses needed to transport the bricks.
Sample Input and Output
Input Output Comments 
120   2      We have 2 workers, each transporting 30 bricks per course. In total,
2            workers are transporting 60 bricks per course. To transport 120 bricks,
30           exactly 2 courses are needed.

Input Output Comments 
355   12     We have 3 workers, each transporting 10 bricks per course. In total, 
3            workers are transporting 30 bricks per course. To transport 355 bricks, 
10           exactly 12 courses are needed: 11 complete courses carry 330 bricks and 
             the last 12th course carries the last 25 bricks.

Input Output Comments 
5     1      We have 5 workers, each transporting 30 bricks per course. In total,
12           workers are transporting 150 bricks per course. In order to transport 5
30           bricks, only 1 course is sufficient (although incomplete, with only 5 bricks).

03.Problem: Point on a Segment
The next sample exam problem is about checking whether given point stays inside or outside given 
horizontal segment.
Video: Point on a Segment
Problem Description
A horizontal segment is placed on a horizontal line, set with the x coordinates of both ends: first and
second. A point is located on the same horizontal line and is set with its x coordinate. Write a program 
that checks whether the point is inside or outside the segment and calculates the distance to the 
nearest end of the segment.
Input
The console reads 3 integer numbers (one per line):
• On the first line the number "first" is read – one end of the segment.
• On the second line the number "second" is read – the other end of the segment.
• On the third line the number "point" is read – the location of the point.
All input numbers are integers in the range [-1000 … 1000].
Output
Print the result on the console:
• On the first line, print "in" or "out" – whether the point is inside or outside the segment.
• On the second line, print the distance from the point to the nearest end of the segment.
Sample Input and Output
![image](https://github.com/Sasho80/8.1.ExamPreparation-PartI/assets/7139995/2249a41a-80b7-4c28-ae95-fcdfcf367907)

![image](https://github.com/Sasho80/8.1.ExamPreparation-PartI/assets/7139995/b1d9ec76-b321-4ef2-ad69-82f3ac70f2fb)

04.Problem: Point in a Figure
The next sample exam problem is about checking whether given point stays inside or outside given 
figure (see the image below).
Problem Description
Write a program that checks whether a point (with coordinates
x and y) is inside or outside the figure, shown on the right.
Input
The console reads two integers (one per line): x and y.
All input numbers are integers in the range [-1000 … 1000].
Output
Print on the console "in" or "out" – whether the point is inside or outside the figure (the outline is 
inside).
Sample Input and Output
Input Output Input Output Input Output Input Output 
8     in       6    in     11   out      11   out
-5            -3           -5             2

Hints and Guidelines
To find out if the point is in the figure, we will divide the figure into 2 rectangles:
![image](https://github.com/Sasho80/8.1.ExamPreparation-PartI/assets/7139995/ca208a30-4a77-49a2-8669-88f42baf869a)
A sufficient condition is the point to be located in one of them, in order to be in the figure.

05.Problem: Date After 5 Days
The next sample exam problem is about calculating the date 5 days after given date (day + month), 
having in mind that it might appear in the next month.
Problem Description
There are two numbers d (day) and m (month) that form a date. Write a program that prints the date 
that will be 5 days a particular date. For example, 5 days after 28.03 is the date 2.04. We assume that 
the months: April, June, September and November have 30 days, February has 28 days, and the rest 
have 31 days. Months to be printed with leading zero when they contain a single digit (e.g. 01, 08).
Input
The input is read from the console and consists of two lines:
• On the first line we read an integer d in the range [1 … 31] – day. The number of the day does 
not exceed the number of days in that month (e.g. 28 for February).
• On the second line we read an integer m in the range [1 … 12] – month. Month 1 is January, 
month 2 is February, …, month 12 is December. The month may contain a leading zero (e.g. 
April may be written as 4 or 04).
Output
Print a single line containing the date after 5 days in the format day.month. The month must be a 2-
digit number with a leading zero (if necessary). The day must be printed without leading zero.
Chapter 8.1. Practical Exam Preparation – Part I 305
Sample Input and Output
![image](https://github.com/Sasho80/8.1.ExamPreparation-PartI/assets/7139995/e92337d6-a7f4-4e44-b8b9-90a7df078efb)



