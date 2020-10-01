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