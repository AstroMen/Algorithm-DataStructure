# BFS 广度优先搜索

## Word ladder (单词变换)
* 给定字典和一个起点单词、一个终点单词，每次只能变换一个字母，问从起点单词是否可以到达终点单词？最短多少步？  
* 如:  
　start= "hit"  
　end = "cog"  
　dict = ["hot","dot","dog","lot","log"]  
　"hit" -> "hot" -> "dot" -> "dog" -> "cog"  
   
　　![image](https://github.com/AstroMen/Algorithm-DataStructure/blob/master/BFS/img/WordLadder-ChangeOneChar.jpg)  
  
## Surrounded Regions (周围区域)  
Given a 2D board containing 'X' and 'O' (the letter O), capture all regions surrounded by 'X'.  
A region is captured by flipping all 'O's into 'X's in that surrounded region.  
  
* For example,  
`X X X X`  
`X O O X`  
`X X O X`  
`X O X X`  
* After running your function, the board should be:  
`X X X X`  
`X X X X`  
`X X X X`  
`X O X X`  
* Method:  
　对于每一个边界上的‘O’作为起点，做若干次广度优先搜索，对于碰到的‘O’，标记为其他某字符Y；  
　最后遍历一遍整个地图，把所有的Y恢复成‘O’，把所有现有的‘O’都改成‘X’。  

