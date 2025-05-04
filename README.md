# 🔐 Password Controller

A terminal-based password management system written in **C++**.  
This project is built using only **⚙️ pointers**, and memory is managed on the **🧠 heap** with care to avoid any memory leaks.

---

## ✅ Features

- 🆕 **Create Account**  
  Users can register with a unique username and password.  
  ➤ ⚠️ If a username is already in use, account creation is denied with a clear warning.  
  ❗ *Note: This check has a known bug and will be fixed after planned updates.*

- 🔐 **Sign In**  
  Login functionality with secure credential verification.  
  ➤ ❓ If the username or password is incorrect, the program prompts:  
  _**“Forgot your password?”** with **Yes/No** options._

- 🔓 **Forgot Password**  
  Retrieve your password using only your username.

- 💬 **Help System**  
  Offers user-friendly guidance on how to use the app.

- 🚪 **Quit Option**  
  Allows users to exit the program safely and politely.

---

## ⚙️ Technical Highlights

- 🧩 **Pointer-Only Implementation**  
  The entire project is written using pointers, with **maximum-level usage** to deepen low-level C++ understanding. No STL containers used.

- 💾 **Heap-Allocated Structures**  
  All major data is dynamically managed on the heap (`new/delete` used carefully).

- ✅ **No Memory Leaks**  
  All heap allocations are properly cleaned up.  
  Verified with tools like `valgrind`.

---

## 🛠️ Built With

- 💻 **C++**
- 🏗️ **CMake**
- 🐧 **Cross-platform** (✅ Tested on Linux)
- 
## 🧭Main Menu

```
 1 :: for sign in:
 2 :: for create account 
 3 :: for forget password 
 4 :: for help
 5 :: for quit

```

## 🆕Craeate Account
```
Create username :: 
puduk
Create password :: 
123123
Account Successfully Created!

```
## 🔐Sign In
```
Username: puduk
Password: 123123
Welcome :: puduk
```
## ❓Forget Password
```
Enter your username :: 
puduk
Your password is: 123123
```
## 💬Help
```
1 :: for contact the AI 
2 :: for Customer Service 
3 :: for Communication Address
3
___ For Contact ___ 
Company Address :: 90210 Beverly Hills, Santa Monica Blvd, Los Angeles, CA
Email Address :: company00.mail.com
Phone Number :: 202 - 222 - 220
```
## 🚪Quit
```
Thank you for using this program.
Please dont forget to rate us (1-10)
5
Quiting... 
```



