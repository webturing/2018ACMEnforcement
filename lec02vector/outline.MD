#STL 线性容器 Vector/List/Stack/Queue
## STL:
C++ STL 提供给程序员以下三类数据结构的实现:

###顺序结构 
- C++ Vectors 
- C++ Lists 
- C++ Double-Ended Queues 
###容器适配器 
- C++ Stacks 
- C++ Queues 
- C++ Priority Queues 
###联合容器 
- C++ Bitsets 
- C++ Maps 
- C++ Multimaps 
- C++ Sets 
- C++ Multisets 

## Vector
```asm
C++ Vectors
Vectors 包含着一系列连续存储的元素,其行为和数组类似。访问Vector中的任意元素或从末尾添加元素都可以在常量级时间复杂度内完成，而查找特定值的元素所处的位置或是在Vector中插入元素则是线性时间复杂度。
Constructors 构造函数 
Operators 对vector进行赋值或比较 
assign() 对Vector中的元素赋值 
at() 返回指定位置的元素 
back() 返回最末一个元素 
begin() 返回第一个元素的迭代器 
capacity() 返回vector所能容纳的元素数量(在不重新分配内存的情况下） 
clear() 清空所有元素 
empty() 判断Vector是否为空（返回true时为空） 
end() 返回最末元素的迭代器(译注:实指向最末元素的下一个位置) 
erase() 删除指定元素 
front() 返回第一个元素 
get_allocator() 返回vector的内存分配器 
insert() 插入元素到Vector中 
max_size() 返回Vector所能容纳元素的最大数量（上限） 
pop_back() 移除最后一个元素 
push_back() 在Vector最后添加一个元素 
rbegin() 返回Vector尾部的逆迭代器 
rend() 返回Vector起始的逆迭代器 
reserve() 设置Vector最小的元素容纳数量 
resize() 改变Vector元素数量的大小 
size() 返回Vector元素数量的大小 
swap() 交换两个Vector 

```
## Stack
```asm
C++ Stack（堆栈） 是一个容器类的改编，为程序员提供了堆栈的全部功能，——也就是说实现了一个先进后出（FILO）的数据结构。

操作 比较和分配堆栈 
empty() 堆栈为空则返回真 
pop() 移除栈顶元素 
push() 在栈顶增加元素 
size() 返回栈中元素数目 
top() 返回栈顶元素 

```
## List
```asm
Lists将元素按顺序储存在链表中. 与 向量(vectors)相比, 它允许快速的插入和删除，但是随机访问却比较慢. 

assign() 给list赋值 
back() 返回最后一个元素 
begin() 返回指向第一个元素的迭代器 
clear() 删除所有元素 
empty() 如果list是空的则返回true 
end() 返回末尾的迭代器 
erase() 删除一个元素 
front() 返回第一个元素 
get_allocator() 返回list的配置器 
insert() 插入一个元素到list中 
max_size() 返回list能容纳的最大元素数量 
merge() 合并两个list 
pop_back() 删除最后一个元素 
pop_front() 删除第一个元素 
push_back() 在list的末尾添加一个元素 
push_front() 在list的头部添加一个元素 
rbegin() 返回指向第一个元素的逆向迭代器 
remove() 从list删除元素 
remove_if() 按指定条件删除元素 
rend() 指向list末尾的逆向迭代器 
resize() 改变list的大小 
reverse() 把list的元素倒转 
size() 返回list中的元素个数 
sort() 给list排序 
splice() 合并两个list 
swap() 交换两个list 
unique() 删除list中重复的元素 

```
## Queue
```asm
C++ Queues(队列)
C++队列是一种容器适配器，它给予程序员一种先进先出(FIFO)的数据结构。 

back() 返回最后一个元素 
empty() 如果队列空则返回真 
front() 返回第一个元素 
pop() 删除第一个元素 
push() 在末尾加入一个元素 
size() 返回队列中元素的个数 

```
## Algorithm
### sort
- less<int>()
- greater<int>()
- bool cmp(int a,int b){}
### search
- find
- qsort
- binary_search
- lower_bound
- upper_bound


    
