# Container-TESTER 2022 |  Linux & Mac ✅
## 🛃 Auto TESTER for ft_containers project at 42.
###  📡 This tester is associated with Grademe.fr, you can launch it automatically with the grademe command.
####      ➡ Find the Grademe command in **Grademe.fr**

![hello](https://user-images.githubusercontent.com/55356071/160401398-6414388b-2204-4b37-b856-ac243078d3e7.gif)

## EXPLICATION:

- This tester is extremely easy to use, you can add the tests of your choice in the main folder. (You only need to include "../main.hpp")
- You can review any bugs or any error in your code in the folder logs_students/
- The tester compile your main with ft namespace, and re-compile using std namespace, then checking the diff between the two compilated files.

### 😎 Automatically find your .hpp files in your project, no configuration needed.


## LAUNCH :
 - Use Grademe.fr command  ```bash -c "$(curl grademe.fr)"```  in your repo, and select 1 (repo will be cloned named container_tester and launch)
 - Clone this repo into your ft_containers, and type **bash launch.sh**


## OPTIONS :

```
bash launch.sh                              <-- Launch all the test
bash launch.sh main/vec_capacity/           <-- Launch only tests in folder vec_capacity
bash launch.sh main/vec_capacity/empty.cpp  <-- Launch a specific test


bash launch.sh --verbose                    <-- Verbose OPTION

* Using --verbose, all .log file (to check by yourself the diff) will be written.
```

 - If there is an error during the test, you can find it in the folder logs_students, the .log file will be generated only if an error is detected. if you want to generate all .log file, you can add **--verbose** option.



#### 👋 If you have any problem with the test, it would be nice to create an "Issue", it will take 3 minutes of your time and it will help me to make the test accessible to more people. 
#### Remember that if you encounter an error, you are probably not the only one and your "Issue" will surely help other people.
