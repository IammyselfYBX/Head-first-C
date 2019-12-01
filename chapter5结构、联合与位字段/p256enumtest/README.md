本实例演示结构体,联合体与枚举的中和应用
![enumtest](enumtest.png)
竟然可以这样初始化结构体
```
fruit_order apples = {"apples", "China", .amount.count = 144, COUNT};  //竟然可以使用 .amount.count 定义
```
![init.png](init.png)