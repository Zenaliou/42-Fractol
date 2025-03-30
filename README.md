<a name="readme-top"></a>
<div align="center">
  <!-- Logo -->
  <img src="README_files/logo.png" alt="Logo" width="80" height="80">
  </a>

  <!-- Project Name -->
  <h1>Fractol Project</h1>

  <!-- Short Description -->
  <p align="center">
	  <b>42 niclee Fractol</b><br>
  </p>

  <!-- Badges -->
  <p>
    <img src="https://img.shields.io/badge/score-125%20%2F%20100-success?style=for-the-badge" />
    <img src="https://img.shields.io/github/last-commit/dpetrosy/42-Fractol?style=for-the-badge" />
  </p>

  <h3>
      <a href="#-about-project">📜 About Project</a>
    <span> · </span>
      <a href="#-fractals-list">📑 Fractals List</a>
    <span> · </span>
	  <a href="#-controls">🎮 Controls</a>
    <span> · </span>
      <a href="#-usage">👨‍💻 Usage</a>
  </h3>
</div>

---

## 📜 About Project

> One of the first graphical projects at 42 School, fract-ol generates beautiful fractals from the complex numbers of \
> an iterative mathematical construct. A fractal is a fragmented geometrical figure that infinitely repeats itself at \
> smaller scales. This project uses the school's graphical library, MiniLibX.

	🚀 TLDR: The fract-ol project is one of the three "beginner" graphical projects of the 
 		 cursus. It teaches you about using graphic library, advanced math, and more.

> [!NOTE]  
> Because of 42 School norm requirements:
> * Each function can't have more than 25 lines of code.
> * All variables are declared and aligned at the top of each function.
> * Project should be created just with allowed functions otherwise it's cheating.

## 📑 Fractals List

The program supports these fractal sets:

| Name              | Formula                                                                                            |
|:-----------------:|:--------------------------------------------------------------------------------------------------:|
| Mandelbrot        | $z_{n+1} = z_n^2 + c, z_0 = 0$                                                                     |
| Julia             | $z_{n+1} = z_n^2 + c, z_0 = c$                                                                     |
| Burning Ship      | $z_{n+1} = abs(z_n^2) + c, z_0 = 0$                                                                |

## 🎮 Controls

The program supports the following controls:

| Key           | Description                             |
|:-------------:|:---------------------------------------:|
| ESC           | Close the program window                |
| Keys [1-6]    | Change the color of fractal             |
| Mouse Scroll  | Zoom in and out of the fractal          |
| ⬆️ ⬇️ ⬅️ ➡️     | Change the viewpoint                   |
| Keys [+-]     | Add or subtract iteration               |

## 👨‍💻 Usage
### Requirements

The program is written in C language and thus needs the **gcc compiler** and some standard **C libraries** to run.

### Instructions

**1. Cloning the folder**

```shell
git clone https://github.com/Zenaliou/Fract-ol42.git
```

**1. Compiling the program**

To compile the program, run:

```shell
$ cd fract-ol42 && make
```

**2. How to run the program**

Run the executable too see the help message:
```shell
./fractol <fractal_name>
```
