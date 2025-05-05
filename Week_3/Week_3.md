上周主要对Google C++ style Guide 进行了学习，Google 上style Guide 的目的主要是使C++文档更加规范，还补充了C++的基本知识，同时对git的使用进行了深入的了解。
- .cpp 文件include顺序
    - 关联头文件
    - C库文件
    - C++库文件
    - 其他项目头文件
    - 本项目中其他头文件
- 命名规则
    - 文件命名*my_file.h*
    - 类型命名*MyFile*
    - 变量命名*var_name*
    - 类成员命名*var_name_*
    - 函数命名*MyFile：MyFunc()*
    - 宏命名*MY_DEFINE_NAME*
- 函数重载（重载使函数接收不同的参数）
    - 使用const限定参数类型进行重载使函数更高效
- 类型后置函数声明
    `auto MyFunc(int i)-> int`

本周目标：
- 完成Linux环境下的C++文件编译
- 完成gtest测试
- 了解Docker容器的基本操作