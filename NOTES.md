***Learnings***:

1) Other answers are completely accurate with regard to what a gch file is. However, context (in this case, a beginner using g++) is everything. In this context, there are two rules:
Never, ever, ever put a .h file on a g++ compile line. Only .cpp files. If a .h file is ever compiled accidentally, remove any *.gch files.
Never, ever, ever put a .cpp file in an #include statement. If rule one is broken, at some point the problem described in the question will occur.
If rule two is broken, at some point the linker will complain about multiply-defined symbols. ( [**Link**](https://stackoverflow.com/questions/1241399/what-is-a-h-gch-file) ) 
