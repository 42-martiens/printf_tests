# printf_tests
printf_tests

## Authors:
ndemont ([Github](https://github.com/ndemont)) && nboisde ([Github](https://github.com/nboisde)) && l-aurelie ([Github](https://github.com/l-aurelie))

### Description:
:wrench: (building in process)

Printf_tests is a tester for the 42 printf project. 
It will test your function through the same steps as the 42 correction of the projets requires.
1. Simple Conversion
2. Simple Flags
3. Complex Flags
4. Let's get crazy
5. Are you ready for bonus ?

### Requirements:
:warning: Developed on macOS: (10.15.7 Catalina and first version of BigSur)

Your libft **must have all the function** to make the test run proprerly. You will face compilation issues if it's not the case.

### Installation:

Git clone this link at the root of your printf project.
```
https://github.com/42-martiens/printf_tests.git
```

### Running tests:
```
make
./a.out
```
Both of the outputs will be displayed, just take a look to find differences.
You will have [OK] if the return of your function is the same as printf, [KO] if it's different.

You can run the tests part by part by passing an argument to a.out :

1 : Simple Conversion ```./a.out 1```

2 : Simple Flags ```./a.out 2```

3 : Complex Flags ```./a.out 3```

4 : Let's get crazy ```./a.out 4```

5 : Are you ready for bonus ? ```./a.out 5```

If you want to compile again: `make re`

If their are warnings during compilation, no worries it is on purpose :smirk:
