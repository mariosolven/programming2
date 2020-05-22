### Team:
+ Saul Alberto Barrera García - [GitHub](https://github.com/saulbg/Programming2)  
+ Mario Solórzano Ventura - [GitHub](https://github.com/mariosolven/programming2)

Structured Programming
======

## Programming Paradigms

It is a technological proposal that is adopted by a community of programmers whose central nucleus is questionable as to what it univocally tries to solve one or several clearly defined problems.  

## Classification of Programming Paradigms  

The declarative programming language always describe the desired end result, instead of showing all the steps of the work. 

Now imperative programming (instruction-oriented paradigm), in this case the developer determines with precisition in the source code the steps the computer must take to achieve the result. Is better described as "how" of the solution.  

### Declarative

+ Functional: 
 
 When we use this paradigm we will be working mainly on functions, as it is a declarative paradigm we will focus on what we are doing.

+ Data flow: 
 
 Define applications as "black box" process networks, which exchange data through predefined connections by message steps, where the connections are specified externally to the processes.

+ Logic: 
 
 Studies the use of logic for problem solving and control over the rules of inference to achieve automatic solution. Unifies terms, uses automatic inference mechanisms and has a logical vision of computing.

+ Templated: 

 This paradigm is based on solving a problem dividing it into smaller problems. By dividing into simpler problems, the aim is to obtain an easier solution.

+ Based: 
 
 It is aimed at improving the clarity, quality and development time of a computer program, using subroutines and three.

+ Structures: 

 Sequence, selection (if and switch) and iteration (for and while).  

### Imperative  

* Von Neumann: 
 
 Describes a design architecture for an electronic digital computer with parts consisting of a processing unit containing a logical arithmetic unit and processor registers, a control unit containing an instruction register and a program counter, a memory for storing both data and instructions, external mass storage, and input and output mechanisms.
 
 In summary is the programming which storage the data in a common memory, each memory cell of the machine is identified with a unique number and each program runs sequentually.  

* Interpreted: 
 
 In this programming paradigm, an interpreter is required and unlike other programming languages in the interpreted language, the source code is not compiled once, but every time an instruction is compiled.  

* Object-oriented:

 It is used to design applications and computer programs, it is based on various techniques including inheritance, abstraction, polymorphism and encapsulation.

 Some examples of object-oriented programming are *C++, C#, Java, Perl, Ruby... etc.*  

## Methods of Programming Paradigms

- Interpreted Programming: 
 
 Unlike compiling, it does not need to be preprocessed by a compiler, that is, it executes the sequence of instructions without the need to read and translate everything.  
   
- Compiled programming:
 
 It is a programming language whose implementations are normally compilers (translators that generate machine code from the source code). The keyword that describes a compiled pogramming is the compiled do like a step else (first you write te code and after that code is translated to bytecode and after a language that the machine can understand. 

## Source Code

It is a set of lines of text with the steps the computer must follow to run a program. Is wrote in a programming language but is not ready to execute, it needs to be translated by a compiler.  

## Data Representation in Structured Programming Language

It refers to the form in which data is stored, processed, and transmitted.

**Characteristics**

- Identifiers
 
 An identifier is a string of alphanumeric characters that begins with an alphabetic character or an underscore character that are used to represent various programming elements such as variables, functions, arrays, structures, unions and so on. Actually, an identifier is a user-defined word. Example: 

 ```c
 int money;
 double accountBalance;
 ```

- Variables
 
 Variables are the names you give to computer memory locations which are used to store values in a computer program. For example, assume you want to store two values 10 and 20 in your program and at a later stage, you want to use these two values. Example:

 ```c
 /* variable to store long value */
 long a;

 /* variable to store float value */
 float b;
 ```

- Constants

 Constants are a type of variable that don’t change. They should be used for anything that should not be allowed to change while the program is running. Example:

Language | Constant
--- | --- 
C++ | `#define PI 3.1415` or `const double PI = 3.14159;` 
C# | `const double PI = 3.14159`
Java | `const double PI = 3.14159;`
JavaScript | `const PI = 3.14159;`
Phyton | `PI = 3.14159`
Swift | `let pi = 3.14159`

- Reserved Words: 

 They are words that are reserved by a program because the word has a special meaning, it can be commands or parameters. Every programming language has a set of keywords that cannot be used as variable names.

- Types of Data:

 *Primitives*
 
 Are predefined types of data, which are supported by the programming language. Programmers can use these data types when creating variables in their programs. Primitive data types can hold text messages, numbers and so on, but they don't readily accommodate higher levels of complexity.  For example, a programmer may create a variable called "name" and define it as a string data type. The variable will then store data as a string of characters.

 The primitive data types are:

      1. Boolean (e.g. True or False)
      2. Character (e.g. abc)
      3. Date (e.g. 03/01/2017)
      4. Double (e.g. 1.87651234355743E308)
      5. Floating-point number (e.g. 1.23)
      6. Integer (e.g. 123)
      7. Long (e.g. 123456789)
      8. Short (e.g. 0)
      9. String (e.g. abc)
      10. Void (e.g. no data)

 *Composites*
 
 For more elaborate data handling—such as simulating the physics of a dozen bouncing balls or managing a quiz with 500 questions and answers—we turn to composite datatypes. Using composite data, we can manage multiple pieces of related data as a single datum. 
 
Some examples:

      1. Array
      2. Object
      3. Movie clip
      4. Functions
 
 Functions are technically a type of object and are therefore considered composite data, but we rarely manipulate them as such.

- Data type conversion:

 Type conversion or typecasting refers to changing an entity of one datatype into another. There are two types of conversion: 

  * Implicit: also known as coercion, is an automatic type conversion by the compiler. Some languages allow, or even require compilers to provide coercion.

  * Explicit: in some specific way is known as casting. Can also be achieved with separately defined conversion routines such as an overloaded object constructor.

## Operators of Structured Programming Language

**Conditional**
 
 Are used to evaluate a condition that's applied to one or two boolean expressions. The result of the evaluation is either true or false. Example:

 ```c
 if (Condition)
    First expression 
 else
    Second expression
```

**Logical**
 
 Is a symbol or word used to connect two or more expressions such that the value of the compound expression produced depends only on that of the original expressions and on the meaning of the operator. They are:
  
 * `&&` the logical AND operator.
 * `||`   the logical OR operator.
 * `?:`   the logical NOT operator.

 Only on Phyton the operators change: 

  * `and` the logical AND operator.
  * `or` the logical OR operator.
  * `not` the logical NOT operator.


**Relationship**

 A relational operator is a programming language construct or operator that tests or defines some kind of relation between two entities. These include numerical equality (e.g., 5 = 5) and inequalities (e.g., 4 ≥ 3). They are:
 
 
 * `<` Less than
 * `>` Greater than
 * `<=` Less than or equal
 * `>=` Greater than or equal
 * `==` Equal
 * `!=` Not equal


## Basic fuctions of input/output (I/O)

* `scanf` reads formatted input from stdin.
* `printf` sends formatted output to stdout.
* `getchar`and `putchar` are used to transfer single characters.
* `puts` is used to output strings.

## Distributed Version Control

A distributed version control system (DVCS) is a type of version control where the complete codebase — including its full version history — is mirrored on every developer's computer. It's abbreviated DVCS.

Changes to files are tracked between computers. For example, my workstation and yours. In the beginning, this required specific coordination strategies to maintain consistency in projects, so all the developers could keep track of what was happening to files at any given time.

Pro Git
======

# 2. Git Basics

## 2.1 GETTING A GIT REPOSITORY

You typically obtain a Git repository in one of two ways:

1. You can take a local directory that is currently not under version control, and turn it into a Git repository.
2. You can clone an existing Git repository from elsewhere.

### 2.1.1 Initializing a Repository in an Existing Directory

If you have a project directory that is currently not under version control with Git, to do it you must to be on that proyect's directory and type:

`git init`

This command creates an Git repository in format `.git` Basically now you have a repository skeleton. 

If you want to start version-controlling existing files, you should probably begin tracking those files and do an initial commit. In order to to it you must type this commands:

```
git add *.c
git add LICENSE
git commit -m 'Initial project version'
```
`git add` is used to begin tracking new files, to stage files, and to do other things like marking merge-conflicted files as resolved, and with `git commit` we record changes in the repository.

### 2.1.2 Cloning an Existing Repository

To create a copy of an existing Git repository you must use the `git clone`command.

Also, to  clone a repository you can use `git clone <url>`.

## 2.2 RECORDING CHANGES TO THE REPOSITORY

Typically, you’ll want to start making changes each time the project reaches a state you want to record.

*Each file in your working directory can be in one of two states: tracked or untracked.*

 * Tracked files: files that were in the last snapshot.
 * Untracked files: files that weren't in your last snapshot and aren't in your staging area.

### 2.2.1 Checking the Status of Your Files

To display paths in order to know which files are in which state you use `git status`.

### 2.2.2 Tracking New Files

To add a file content to the repository index and begin tracking it you use the command `git add`. Then we can corroborate it with the previous command `git status`.

A variation of The command `git status` it could be `git status -s` or  `git status --short` whose simplify the complete output changes of the original command. 

### 2.2.3 Staging Modified Files

Let’s change a file that was already tracked. If you change a previously tracked file and you run `git status` it will display that the file that is tracked has been modified in the working directory but not yet staged. To stage it we must run `git add` and then, you're ready to commit it git `git commit`. 

### 2.2.4 Ignoring Files

To ignore a class of files like log files or system files that you don’t want Git to automatically add or even show you as being untracked you can create a pattern to match them and ignore them:

+ Blank lines or lines starting with # are ignored.
+ You can start patterns with a forward slash (/) to avoid recursivity.
+ You can end patterns with a forward slash (/) to specify a directory.

### 2.2.5 Viewing Your Staged and Unstaged Changes

If you want to know exactly what you changed and not yet staged, you can use `git diff` command. Also, to compare your staged changes to your last commit you can use `git diff --staged`. 

There is another way to look at these diffs in different sowftwares, for this you use `git difftool`, but to see what system is avaliable on your software you can use `git difftool --tool-help`.

### 2.2.6 Commiting Your Changes

Now, if everything in your staging area is ok, you are able to commit your file's changes. To commit you just type `git commit`, instantly will launch an editor in order to enter a commit message to indentify your changes. To avoid opening the editor, you can use `git commit -m "your commit message"`, which let you to type your own commit message inline.

### 2.2.7 Skipping the Staging Area

If you want to skip the staging area, you can use `git commit -a`to stagging automatically every tracked file in background.

### 2.2.8 Removing Files

To remove a file from Git, instead of deleting on the website (which is also a longer way) you use `git rm`, which remove the file from your tracked files and  then commit. There are some other options for this command:

+ `git rm --cached`: to keep the file on your hard drive but not have Git track it anymore.
+ `git rm log/*.log`: removes all files in the log directory that have an .log extension.
+ `git rm * ~`: removes all files whose names end with a ~ .

### 2.2.9 Moving Files

Git doesn't explicitly track file movement. Thus, you must rename that file in Git, to do it you can use `git mv <file_from> <file_to>`. 

## 2.3 VIEWING THE COMMIT HISTORY

To look back to see what was happened between what commits and clones have you created, you can use a tool for that is the `git log`command. By default, it lists the commits made in that repository in reverse chronological order.

One of the more helpful options is `-p`or `--patch`, which shows the difference introduced in each commit.

There are some other options for this command:
+ `git log -2`: shows only the last two entries.
+ `git log --pretty`: changes the log output to formats other than the default. 
+ `git log --stat`: to see some abreviated stats for each commit.

### 2.3.1 Limiting Log Output

In addition to output-formatting options, `git log`takes a number of useful limiting options; that is, *options that let you show only a subset of commits*.

The time-limiting options such as `--since` and `--until`are very useful. For example, to get the list of commits made in the last two weeks we input: 
   git log --since=2.weeks

You can also filter the list to commits that match some criteria, as `--author`to filter an specific author or `--grep` to search for keywords in the commit messages.

## 2.4 UNDOING THINGS

At any stage, you may want to undo something, **but be careful,** you can't always undo some of these undos and you may lose some work if you do it wrong.

* If you want to redo a commit, make the additional changes you forgot, stage them, and commit again using the `--amend` option. This command takes your staging area and uses it for the commit.

 * If you commit and then realize you forgot to stage the changes in a file you wanted to add this commit, you can do this:

 ```
 git commit -m 'Initial commit'
 git add forgotten_file
 git commit --amend
 ```
 ### 2.4.1 Unstaging a Staged File

 The command that you use to determine the state of those two areas also reminds you how to undo changes to them. To unstage one of both you can use `git reset HEAD <file>...`.

 ### 2.4.2 Unmodifying a Modified File

 If you don't want to keep your changes to some file, you can revert it back to what it looked like when you last commited or initally cloned. The command `git status` tells you how to do that too, and it is with the command `git checkout -- <file>...`.

 **Remember, anything that is commited in Git can almost always be recovered. Even commits that were overwritten with an `--amend` commit can be recovered.**

 ## 2.5 WORKING WITH REMOTES

*Remote repositories* are versions of your project that are hosted on the Internet or network somewhere. You can have several of them, each of which generally is either read-only or read/write for you. Collaborating with others involves managing these remote repositories and pushing and pulling data to and from them when you need to share work.

### 2.5.1 Showing Your Remotes

To see which remote servers you have configured, you can run the `git remote` command, which lists the shortnames of each remote handle you've specified.

You can also specify `-v`, which shows you the URLs that Git has stored for the shortname to be used when reading and writing to that remote.

### 2.5.2 Adding Remote Repositories

To add a new remote Git repository as a shortname you can reference easily running `git remote add <shortname> <url>`. So then you can use the string `pb`on the command line in lieu of the whole URL.

### 2.5.3 Fetching and pulling from Your Remotes

To get data from tour remote projects you can run the `git fetch <remote>` command, which goes out to that remote project and pulls down all the data from that remote project that you don't have yet.

Another commands:

+ `git fetch origin`: fetches any new work that has been pushed to that server since you cloned (or last fetched from) it.
+ `git pull`: to automatically fetch and then merge a remote branch into your current branch.

### 2.5.4 Pushing to Your Remotes

To push a proyect upstream and share it, you can use `git push <remote> <branch>`. Also, to push your `master`branch to your `origin` server, you can run `git push origin master`and any commits you have done back up will be push to the server.

### 2.5.5 Inspecting a Remote

To see far more about an specific remote, you can use `git remote show <remote>`command. It lists the URL for the remote repository as well as the trancking branch information.

### 2.5.6 Renaming and Removing Remotes

You can run `git remote rename` to change a remote’s shortname, also this changes all your remote-tracking branch names too. Example: if you want to rename `pb` to `mario`, you write: 

`git remote rename pb mario`

To remove a remote you can either use `git remote remove`or `git remote rm`.

## 2.6 TAGGING

Git has the ability to tag specific points in a repository’s history as being important.

### 2.6.1 Listing Your Tags

To list the existing tags (in alphabetical order) you just type `git tag`with optional `-l`or `--list`.

### 2.6.2 Creating Tags

“Git supports two types of tags: *lightweight* (which is very much like a branch that doesn’t change) and *annotated* (that are stored as full objects in the Git database).

### 2.6.3 Annotated Tags

To create an annotated tag, you only need to specify `-a`when you run the `tag`command.

The `-m` specifies a tagging message, which is stored with the tag. If you don’t specify a message for an annotated tag, Git launches your editor so you can type it in (as the same when you `git commit` without the `-m`).

### 2.6.4 Lightweight Tags

Another way to tag commits is with a lightweight tag. This is basically the commit checksum stored in a file — no other information is kept. You just provide a tag name: `git tag <version_name>`.

### 2.6.5 Tagging Later

You can also tag commits after you’ve moved past them. To tag a commit, you specify the commit checksum (or part of it) at the end of the command:

`git tag -a v1.2 9fceb02`

### 2.6.6 Sharing Tags

To transfer tags to remote servers, you will have to explicitly push tags to a shared server after you have created them. This process is just like sharing remote branches — you can run `git push origin <tagname>`.

+ If you have a lot of tags that you want to push up at once, you can also use the `--tags` option to the `git push` command to transfer all your tags to the remote server.

### 2.6.7 Deleting Tags

To delete a tag *from your local repository*, you can use `git tag -d <tagname>`. 

To delete a tag *from a remote server*, there are two common variations: 

1. `git push <remote> :refs/tags/<tagname>:`
2. `git push origin --delete <tagname>` (the best one).

### 2.6.8 Checking out Tags

If you want to view the versions of files a tag is pointing to, you can do a `git checkout` of that tag, although this puts your repository in “detached HEAD” state.

In “detached HEAD” state, if you make changes and then create a commit, the tag will stay the same, but your new commit won’t belong to any branch and will be unreachable, except by the exact commit hash.

## 2.7 GIT ALISASES

Git doesn’t automatically infer your command if you type it in partially. If you don’t want to type the entire text of each of the Git commands, you can easily set up an alias for each command using `git config.`

Examples:

```
git config --global alias.co checkout
git config --global alias.br branch
git config --global alias.ci commit
git config --global alias.st status
```
This means that, for example, instead of typing `git commit`, you just need to type `git ci`.

As you can tell, Git simply replaces the new command with whatever you alias it for.


### References

+ https://www.ecured.cu/Paradigmas_de_programacion
+ https://www.ecured.cu/Paradigmas_de_programacion  
+ https://codigofacilito.com/articulos/programacion-funcional  
+ https://es.wikipedia.org/wiki/Programacion_basada_en_flujo  
+ https://ferestrepoca.github.io/paradigmas-de-programacion/proglogica/logica_teoria/lang.html  
+ https://www.ecured.cu/Programacion_Modular  
+ https://www.ecured.cu/Programacion_estructuradahttps://www.ecured.cu/Programacion_estructurada  
+ https://es.wikipedia.org/wiki/Arquitectura_de_Von_Neumann  
+ https://www.ecured.cu/Programacion_Orientada_a_Objetos
+ https://es.wikipedia.org/wiki/Lenguaje_de_programacion_compilado
+ https://www.ecured.cu/Lenguaje_interpretado
+ https://www.perforce.com/blog/vcs/what-dvcs-anyway
+ https://www.sitepoint.com/data-input-and-output-in-c-part-1/
+ http://archive.oreilly.com/oreillyschool/courses/csharp2/csharp204.html
+ http://aboutc.weebly.com/identifiers.html
+ https://www.tutorialspoint.com/computer_programming/computer_programming_variables.htm
+ https://www.bbc.co.uk/bitesize/guides/zc6s4wx/revision/5
+ Scott Chacon. “Pro Git.” Apple Books.
