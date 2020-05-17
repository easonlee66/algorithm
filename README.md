# algorithm

#### 介绍
集成常用算法

#### 安装教程

1.  下载.zip
2.  将头文件复制到你的项目里
3.  
```cpp
#include "xxx.h"
using namespace algorithm
```
**注意**使用前一定要`using namespace algorithm`，或者`algorithm::xxx`，否则编译会报错！！！

#### 使用说明

1. ucs.h:并查集union checking set,使用方法`union_checking_set ucs;`可以：`ucs.find(x)`找x的祖先，还可以`ucs.meghe(x,y)`合并x和y，使用前请`ucs.init(n)`初始化n个空间。
2. read.h:手写快读，刷题时可能用到，使用说明请见[这里](https://www.luogu.com.cn/blog/eason66-blog/shou-xie-kuai-du-c)
3. myvector.h:手写STL的vector，使用：`myvector <int/char/……> x;`，支持`x.insert(z,y);`在z处插入y，`x.erase(z);`删除位置为z的元素，或者`x.push_back(y);`、`x.pop_back();`、`x.push_front(y);`、`x.pop_front();`，还可以`x.clear();`清空，`x.empty();`判空，`x.find(y)`找值为y的元素，返回指针，`x.erasex(y);`删除值为y的元素，还可以`x.beigin()`、`x.end()`，方便遍历，或直接使用下标运算符，使用前请`x.init();`初始化。注：自定义数据类型需要重载==运算符
4. mydeque.h:基于myvector.h的手写STL的deque，使用：`mydeque <int/char/……> x;`，除了`x.push_back(y)`、`x.push_front(y)`、`x.pop_back()`、`x.pop_front()`这些基本操作外，还可以`x.clear()`清空、`x.front()`取队首，`x.back()`取队尾，`x.empty()`判空。使用前请`x.init()`初始化。注：自定义数据类型需要重载==运算符
5. mystack.h:基于mydeque.h的手写STLstack，使用:`mystack <int/char/……> x;`，除了`x.push(y);`、`x.pop()`、`x.top()`、`x.empty()`这些基本操作外，还新增了`x.clear()`清空操作。使用前请`x.init()`初始化。
6. myqueue.h:基于mydeque.h的手写STLqueue，使用`myqueue <int/char/……> x;`，除了`x.push(y);`、`x.pop()`、`x.front()`、`x.back()`、`x.empty()`这些基本操作外，也新增了`x.clear`清空操作。使用前请`x.init()`初始化。

#### 参与贡献

1.  新建 xxx 分支
2.  提交代码
3.  新建 Pull Request
