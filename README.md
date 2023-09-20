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


