## 二. 线性表 Array
### Remove Duplicates from Sorted Array
双指针 一个指针指向新的尾元素，另一个一直往后移动 
每次比较两个指针指向的元素，不同则移动前一个指针
注意返回的是index+1和判空
### Remove Duplicates from Sorted Array II
双指针 一个指针指向新的尾元素，另一个一直往后移动 
每次比较第一个指针前指向的前一个内容和后一个指针指向的元素，不同则移动前一个指针  
  
## 五. 树
### 5.1 二叉树的遍历
#### Binary Tree Preorder Traversal
递归   
非递归栈（本身 右 左）/（Morris 前驱结点右孩子为空的时候加入ret）  
#### Binary Tree Inorder Traversal
递归   
非递归栈? /（Morris 前驱结点右孩子不为空的时候加入ret）  
#### Binary Tree Postorder Traversal
递归   
非递归栈? /（Morris较为复杂 reverse路径）
#### Binary Tree Level Order Traversal
queue非递归 / 递归?  
#### Binary Tree Level Order Traversal II
上一题reverse  
#### Binary Tree Zigzag Level Order Traversal
用一个bool每层翻转即可  
#### Recover Binary Search Tree
最左和最右 Morris最优解  
#### Same Tree
递归 非递归（一个队列 包括空指针）  
#### Symmetric Tree
转化为same tree判断  
#### Balanced Binary Tree
递归 树的高度在这个过程中算出来 注意剪枝  
#### Flatten Binary Tree to Linked List
迭代版（栈 右左） 递归版（链表头尾）  
#### Populating Next Right Pointers in Each Node II
迭代版 常数空间 不能用正常的层次遍历 但是可以利用next的性质  

## 六. 排序
### Merge Sorted Array
从大到小  
### Merge Two Sorted Lists
dummy  
### Merge k Sorted Lists
优先级队列（比较函数）  
### Insertion Sort List
dummy初始化时不要初始化next 注意指针操作的顺序  
### Sort List
归并排序 注意快慢指针更新的条件(fast->next && fast->next->next)  
### First Missing Positive
bucket sort 桶排序 注意交换的四个条件  
### Sort Colors
双指针 注意要保持i在red和blue的中间  
