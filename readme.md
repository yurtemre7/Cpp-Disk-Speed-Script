# Cpp Disk Speed Script - CDSS

#### made possible thanks to [CStar](https://github.com/DeveloperX19/CStar)
---

## How to use:

create a big file:
```bash
fallocate -l 1G bigobject.txt
```

you need to have the CStar library installed on your system, more here: [CStar](https://github.com/DeveloperX19/CStar)

---

start the programm, but adjust file paths (and include paths for CStar) or names first:

```bash
g++ main.cpp -I /mnt/c/Tools/CStar/CStar/include -o main && ./main
```



