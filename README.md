# c-mini-projects

Do assignments in [learning-C](https://github.com/h0mbre/Learning-C) repository

## Tips

### assignment-11

无限循环使用 `while (1)` 而不是 `while (true)`，后者会报错。

对于字符串的输入，不需要再添加 `&`

```c
char str[2];
scanf("%s", str);
```

`strcmp` 用来比较两个字符串，如果相等就返回0，第一个如果更小，返回小于0的值，更大就返回大于0的值。

`sizeof` 返回 `long long` 输出时使用 `%ld`，`double` 类型采用 `%lf`

### assignment-12

`time(time_t *tloc)` 返回当前时间距离 Epoch 的秒数，并存储在 `tloc` 的地方，`srand()` 用来生成随机种子，通常配合 `time` 使用：

```c
#include <stdlib.h>
#include <time.h>

time_t t;
srand(time(&t));
int i;
for (i = 0; i < 10; ++i) {
    printf("%d\n", rand() % 50); // 生成0到50的随机数
}
```

### assignment-13

输出指针地址使用格式是 `%p`。

