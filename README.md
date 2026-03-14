*This project has been created as part of the 42 curriculum by cycolonn.*

# 📚 Libft - Technical Documentation

## 1. Description
**Libft** is the foundational project of the 42 curriculum. It consists of recoding a set of standard C library (libc) functions as well as additional utility functions. The goal is to deeply understand memory manipulation, strings, and data structures to build a personal library that will be reused in all future C projects at the school.

---

<br />

## 2. Technical Instructions & Features
The library is divided into several mandatory sections, all written in accordance with the school's Norm:

---

<br />

* **Libc Functions**: Reimplementation of essential functions such as `ft_strlen`, `ft_memcpy`, `ft_strchr`, and `ft_atoi`.
* **Additional Functions**: String manipulation functions not found in the standard libc, such as `ft_substr`, `ft_strjoin`, `ft_strtrim`, and `ft_split`.
* **Conversion & I/O**: Functions for converting integers to strings (`ft_itoa`) and writing to file descriptors (`ft_putchar_fd`, `ft_putstr_fd`).
* **Linked List Management**: A series of functions to manipulate dynamic lists using the `t_list` structure.

---

<br />

## 3. Resources & Technical Choices
The implementation of Libft relies on technical choices focused on efficiency and robustness:

---

<br />

### 🧠 Memory Management & Allocation
* **Use of Malloc**: Dynamic allocation is strictly reserved for functions that require it, such as `strdup`, `calloc`, and `ft_split`.
* **Safety Checks**: Every allocation is followed by a pointer check to prevent crashes.
* **Memory Leak Prevention**: All heap-allocated memory must be properly freed; leaks are not tolerated.
* **No Global Variables**: Declaring global variables is strictly forbidden to ensure function reentrancy.

---

<br />

### 🏗️ Architecture & Compilation
* **Modularity**: Each function is isolated in its own `.c` file to optimize the library's final size during linking.
* **Makefile Automation**: The Makefile compiles sources with `-Wall -Wextra -Werror` flags and generates the `libft.a` archive using `ar`.
* **Encapsulation**: Helper functions are defined as `static` to restrict their scope to their respective files.

---

<br />

### 🔗 Data Structures (Linked Lists)
* **Void Pointer Flexibility**: Using `void *content` in the `t_list` structure allows the library to store any type of data.
* **Functional Abstraction**: Functions like `ft_lstmap` and `ft_lstiter` use function pointers to apply custom logic to each node generically.

---

<br />

### 📜 Authorized Functions
This project is built using a very restricted set of external functions: `malloc`, `free`, and `write`.

---

<br />

## 💻 How to Compile and Run
To generate the library and use it in your projects, use the following commands:

---

<br />

```bash
# Clone the repository
git clone [https://github.com/cycolonn/libft.git](https://github.com/cycolonn/libft.git)

# Compile the library (generates libft.a)
cd libft
make

# Clean object files after compilation
make clean

# To compile a project using libft
cc main.c -L. -lft
