# 💰**BILLING AND FINANCE MANAGEMENT SYSTEM (C Programming)**

## 📄 **ABSTRACT**

The **Billing and Finance Management System** is a terminal-based application written in C that helps businesses or shops manage financial transactions efficiently. It provides essential functionalities such as **adding bills**, **viewing all transactions**, **searching by invoice number**, **updating entries**, and **deleting financial records**.

All records are stored persistently in a binary file (`billing.dat`) ensuring that the financial data remains saved across program runs.

This project demonstrates core C programming concepts including **structures**, **file handling**, **loops**, **control flow**, and **modular programming**, making it ideal for **beginners**, **academic submissions**, and **practical system design**.

 ##✨ **FEATURES**
### **Core Functionalities**

-➕ **Add new billing entries (Invoice No, Customer Name, Amount, Date, Payment Method)
-📋**Display all financial records** in a formatted table
-🔍**Search transaction by Invoice Number**
-✏️ **Update existing bill details**
-❌ **Delete billing records**
-💾 Persistent data storage using binary file (billing.dat)
-🖥️ Fully terminal-based, menu-driven interface
-👨‍💻 Beginner-friendly modular code
-⚙️ Auto-creates the data file if missing
-⚠️ Includes basic input validation & error handling

##🛠️ **TECHNICAL REQUIREMENTS**
### **System Requirements**
-Operating System: **Windows / Linux / macOS**
-Terminal or Command Prompt
-At least **4 MB RAM**
-Very minimal disk space for `billing.dat`

### **Software Requirements**

-C Compiler: **GCC / MinGW / Clang / MSVC**
-Code Editor or IDE: VS Code, Code::Blocks, Dev-C++, etc.
-Optional: Make utility (if using Makefile)

### **Programming Requirements**

-Language: **C**

-Standard Supported: C89 / C99 / C11

-Header Files Required:

 -`stdio.h`

 -`stdlib.h`

 -`string.h`

### **File Handling**

-Requires read/write permissions

-Records stored in binary format (billing.dat)

-Automatically creates the file if not present
---
##📌 **FUNCTIONAL REQUIREMENTS**
## **User Interface**

-Terminal-based CLI
-Clean, menu-driven navigation
-Validates user input

##💳 **Billing & Finance Operations**
##➕ **Add Bill**

-Enter Invoice No, Customer Name, Date, Amount, Payment Method
-Saved into billing.dat

###📋 **Display Bills**
-Shows all recorded financial transactions in table format

###🔍 **Search Bill**
-Search using unique Invoice Number

###✏️ ***Update Bill**
-Modify Customer Name, Amount, Payment Method, Date, etc.

###❌ **Delete Bill**
-Permanently removes a billing record using the temporary-file method

###🔧 **DATA MANAGEMENT**
-Binary file storage → Fast and reliable
-Safe for updates and deletions
-Handles empty or missing files gracefully

###🔄 **PROGRAM FLOW**
-Menu runs continuously in a loop
-Includes an Exit option
-Displays clear success/error messages
---
##▶️ **Running the Program**
### 1️⃣ Compile
gcc billing.c -o billing

### 2️⃣ Run

**Linux / macOS:**

./billing


**Windows**
```bash
billing.exe
```

### 3️⃣ Data File
*Automatically creates billing.dat
*Stores all billing data in binary format
---
##📸 **Screenshots (Optional)**

*Add Bill

*<img width="412" height="384" alt="Screenshot 2025-11-26 135829" src="https://github.com/user-attachments/assets/42f78d6b-fe57-4498-a8b0-6e587c98ea2f" />


*Display Bills

*<img width="413" height="423" alt="Screenshot 2025-11-26 135936" src="https://github.com/user-attachments/assets/47b92bb9-c6df-457a-92ed-c00e168d076d" />


*Search Bill

*<img width="449" height="438" alt="Screenshot 2025-11-26 140001" src="https://github.com/user-attachments/assets/b3f596a3-e0df-42d1-ae87-a281d90286ad" />


*Exit

*<img width="467" height="208" alt="Screenshot 2025-11-26 140019" src="https://github.com/user-attachments/assets/7314dc6c-c36f-4545-8e7d-d845bceb855d" />


---
##📝 **Author**

**P. gowtham**
