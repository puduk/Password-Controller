# Password Controller

A terminal-based password management system written in C++.  
This project is built using only **pointers** and memory is managed on the **heap** with care to avoid any memory leaks.

---



## ✅ Features

- 🔐 **Create Account**  
  Users can register with a unique username and password.  
  ➤ If a username is already in use, account creation is denied with a clear warning(⚠️has bug currently will be fixed after planned projects).

- 🔑 **Sign In**  
  Login functionality with secure credential verification.  
  ➤ If the username or password is incorrect, the program prompts:  
  **“Forgot your password?”** with **Yes/No** options.

- ❓ **Forgot Password**  
  If the user forgets their password, they can retrieve it using their username.

- 💡 **Help System**  
  Provides guidance to the user about how to use the application.

- 🚪 **Quit Option**  
  Allows the user to safely exit the program.

---

## ⚙️ Technical Highlights

- ✔️ **Pointer-Only Implementation**:  
  The entire project is written using pointers without any use of modern containers (e.g. vectors, maps).

- ✔️ **Heap-Allocated Structures**:  
  All major data structures are created and managed dynamically on the heap.

- ✔️ **No Memory Leaks**:  
  All memory is carefully deallocated. Tools like `valgrind` report no leaks.

---

## 🛠️ Built With

- **C++**
- **CMake**
- ✅ Cross-platform (tested on Linux)
---

## Main Menu

```
 1 :: for sign in:
 2 :: for create account 
 3 :: for forget password 
 4 :: for help
 5 :: for quit

```

## Craeate Account



