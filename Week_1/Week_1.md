### 周报(4.14-4.20)
#### 1. 本周完成情况
#### 1.1 现代C++的语法和特性
- 阅读了现代 C++ 教程：高速上手 C++ 11/14/17/20，现代C++并非C的一个超集，在编译过程中尽量使用`extern"C"`声明
C++11新增类型`std::forward_list`和`std::array`
#### 1.2 C++STL库常用数据结构和算法
STL有六大组件(容器(containers)、迭代器(iterators)、空间配置器(allocator)、配接器(adapters)、算法(algorithms)、仿函数(functors))
数据由容器管理，操作由算法执行，迭代器充当粘合剂，使算法可以和任何容器运作。
- sequence containers
    - `std::array`容器的大小固定，不需要手动释放内存,方便使用更多封装的操作函数
    - `std::vector`可变大小数组
    - `std::list`双向链表：任何位置插入/删除速度快
    - `std::forward_list`单向链表：单向顺序访问
    - `std::string`保存字符容器
    - `std::deque`双端队列：头尾位置插入/删除速度快
- associsative containers
    - `std::map`基于红黑树，关联数组/字典：保存键/值对
    - `std::set`
    - `std::multimap`多元素实例
    - `std::multiset`
- adaptor
    - `queue`队列，先进先出
    - `stack`栈，先进后出
    - `priority_queue`值最高的元素始终位于队列首位
#### 1.3 CMake
1. CMakeLists.txt文件语法
- `cmake_minimum_required`指定最低版本要求
- `project`定义项目名称和使用编程语言
- `set`设置变量值
- `option`
- `find_pacakge`自动检测和配置外部库的包
- `add_library`创建一个库及其源文件
- `add_executable`指定生成的可执行文件和源文件
- `target_include_directories`设置目标属性
- `target_link_libraries`连接目标文件与其他库
#### 1.4 git使用方法
1. 初始化
```
git init //在当前目录新建git代码库
git clone [url] //clone一个已存在的项目
git status //查看当前状态
```
2. 添加到暂存区
```
git add [filename] //添加指定文件到暂存区
git add [dir] //添加指定目录到暂存区，包括子目录
git add . //添加目录中全部文件
git rm [filename1] [filename2] //删除工作区文件，并将这次删除放入暂存区
```
3. 提交到本地仓库
```
git commit -m "message" //提交暂存区到仓库
git commit [filename1] [filename2] -m "message" //提交暂存区指定文件到仓库
git commit -a //提交变化的部分到仓库
git commit -v //提交时显示所有diff信息
```
4. 配置 Git
```
git config -list //显示当前git配置
git config [-global] user.name
git config [-global] user.email
```
5. 推送至远程仓库
```
git push [repositoryname] [filename] //推送至远程仓库
git pull --all //拉取仓库中所有更改
```
6. 远端分支合并和冲突解决
```
git branch [branchname] //创建新分支
git checkout [branchname] //检测目标分支并切换
git merge [branchname] //先切换回主分支，然后使用命令合并分支
git branch -d [branchname] //删除该分支
```

#### 2.本周计划
- 了解Google C++ Style Guide并写出符合Google C++ Style Guide的代码
- 更深入了解CMake的进阶使用方法
- 了解如何使用日志记录