# printf_tests
printf_tests

## Authors:
ndemont ([Github](https://github.com/ndemont)) && nboisde ([Github](https://github.com/nboisde)) && l-aurelie ([Github](https://github.com/l-aurelie))

### Description:
:wrench: (building in process)

Printf_tests is a tester for the 42 libft project. It will test your function through the same steps as the correction of the projets requires it for 42.
1. Simple Conversion
2. Simple Flags
3. Complex Flags
4. Let's get crazy
5. Are you ready for bonus ?

### Requirements:
:warning: Developed on macOS: (10.15.7 Catalina and first version of BigSur)

Your libft **must have all the function** to make the test run proprerly. You will face compilation issues if it's not the case.

### Installation:
```
https://github.com/42-martiens/printf_tests.git
```

### Running tests:
```
make
./libft_tests
```
You will have [OK] if your function pass the test, [KO] if it doesn't.

If you want to compile again: `make re`

***If you want to see where you crash:***

Each function is tested in the main, using subfunctions in files `~/*/Libft_tests/tests/test_*.c`. Each file handle a particular function and [OK] are often displayed in the same order of tests.
