### 对于gcc来说到哪里寻找头文件 .h
![include](include.png)
## 共享代码
### 一、共享.h
![find_include.png](find_include.png)
### 二、共享.o
#### 方式一
![find_o1.png](find_o1.png)

#### 方式二
##### 1制作静态链接库
![find_o2.png](find_o2.png)
![find_o3.png](find_o3.png)
使用
![find_o4.png](find_o4.png)

> 总结一下
> -I<.h文件目录>
> -L<指定寻找的目录>
> -l<库文件>    可以直接写中间的部分

![蠢问题.png](蠢问题.png)

##### 2制作动态链接库
###### 1)生成目标文件
![find_so.png](find_so.png)
![find_so2.png](find_so2.png)
###### 2)制作动态链接库
![find_so3.png](find_so3.png)
###### 3)编译
![find_so4.png](find_so4.png)
###### 4)运行
![find_so4.png](find_so5.png)

### 总结
![sum](sum.png)