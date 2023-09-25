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





