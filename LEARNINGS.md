**Learnings**:

1) A beginner using g++. There are two rules:
Never, ever, ever put a .h file on a g++ compile line. Only .cpp files. If a .h file is ever compiled accidentally, remove any *.gch files.
Never, ever, ever put a .cpp file in an #include statement. If rule one is broken, at some point the problem described in the question will occur. 
If rule two is broken, at some point the linker will complain about multiply-defined symbols.
   - [**Link**](https://stackoverflow.com/questions/1241399/what-is-a-h-gch-file)

2) Keyboard shortcuts - VS Code
   | Shortcut | Description |
   |---|---|
   | Ctrl + / | Toggle comment and uncomment | 
   | Ctrl + f | Find and Replace |
   | Ctrl + j or Ctrl + `| Toggle terminal |
     
4) To compile multiple cpp files in the same directory,
   ``` g++ -o a.out *.cpp ``` 
   - [**Link**](https://stackoverflow.com/questions/33662375/how-can-you-compile-all-cpp-files-in-a-directory)

5) Information about g++ commands,
```g++ --help``` or ```g++ gcc```
