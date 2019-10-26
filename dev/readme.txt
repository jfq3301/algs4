

# how to compile
javac -d destdir srcFile, javac -d . Hello.java
javac -d . Insertion.java ../utility/*.java

# execute java
java java类名， java Hello.
java Selection < tiny.txt
java Selection < words3.txt

# 说1.8版本的java，不需要配置classpath
这篇博客提到了java 1.8遇到的这个问题。https://www.cnblogs.com/love-zf/p/6104382.html
说1.8版本的java，不需要配置classpath，把classpath去掉就可以了。我也存在这样的问题，但是去掉后，java Hello命令还是会报错。

# 编译时碰到如下警告，可以暂时忽略
注: Selection.java使用了未经检查或不安全的操作。
注: 有关详细信息, 请使用 -Xlint:unchecked 重新编译。


#
cd /home/jfq/33_git_algorithm/algs4/src/main/java/edu/princeton/cs/algs4



