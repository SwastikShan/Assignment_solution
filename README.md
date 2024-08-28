# Word_Composition_Problem
Problem Statement:-
Write a program that:
1. Reads provided files (Input_01.txt and Input_02.txt) containing alphabetically sorted words list (one
word per line, no spaces, all lower case)
2. Identifies & display below given data in logs/console/output file
o longest compounded word
o second longest compounded word
o time taken to process the input file
Note: A compounded word is one that can be constructed by combining (concatenating) shorter words
also found in the same file
Input 01
Input_01.txt is a small word list, consisting following words
cat
cats
catsdogcats
catxdogcatsrat
dog
dogcatsdog
hippopotamuses
rat
ratcatdogcat
Answer:
1. Longest Compound Word: ratcatdogcat
2. Second Longest Compound Word: catsdogcats
Note:
Hippopotamuses is the longest word but that is not the answer as it is not a compounded word 
.
.
.
.
.
#Steps to Execute this code:
-first input number of strings user wants to insert
-then user input n number of strings in each new line by the help scanner class
-then output will be according to problem statement
.
.
.
.
.
.

#Approach of this program:
1-so we have sorted the array wrt to lenght of the string by the help of Comparator Interface
then we store each string of an array in hashmap as it helps us later in program to keep checking strings or whether this      particular string is compounded string or not
2-then we iterate for loop reversely as we have sort the string array and we have to o/p the longest & second longest compounded word/string
3-in 1st for loop  we initialize the stringbuffer so as to append the string characters in particular string of an String array, then by help of hashmap, user can checks the whether appended string from that particular matches to any of string in hashmap, if yes: continue, else: keep appending
4-when the one particular string of an string array completely traversed then checked by the help of "c" & "count" variable that it is longest/second longest compounding string or not
5-repeat the same process from step 2 with strings of an string array
-and finally o/p longest and second longest compounded word, then break from the main outter for loop and finish the program.
.
..
...
