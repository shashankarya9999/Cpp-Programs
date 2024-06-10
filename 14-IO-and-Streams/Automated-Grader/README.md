//////////////////////// Automated Grader ////////////////////////

Write a program that reads a file named 'responses.txt" that contains the answer key for a quiz
as well as student responses for the quiz.

The answer key is the first item in the file.<br>
Student1 name<br>
Student1 responses<br>
Student2 name<br>
Student2 responses<br>
. . .<br>

Here is a sample file.

ABCDE                  
Frank                     
ABCDE                  
Larry<br>
ABCAC<br>
Moe<br>
BBCDE<br>
Curly<br>
BBAAE<br>
Michael<br>
BBCDE<br>

You should read the file and display:<br>
Each student's name and score (#correct out of 5)<br>
At the end, the class average should be displayed<br>
You may assume that the data in the file is properly formatted<br>

Program should output to the console the following:
```
Student                     Score 
---------------------------------
Frank                           5
Larry                           3
Moe                             4
Curly                           2
Michael                         4
---------------------------------
Average score                 3.6
```
