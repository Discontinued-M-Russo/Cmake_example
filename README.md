# Cmake_example
Simple example of a CLion project using CMake and Boost for testing and logging. Based on the material available [here](https://gernotklingler.com/blog/simple-customized-logger-based-boost-log-v2/) and on the Boost documentation.

---

## Boost
Boost provides portable C++ source libraries that cover a very wide span of applications, from Linear Algebra to Image Processing. The code in this repo is focused on making use of the Logging and Testing capabilities

### _Download and Install Boost_
The latest version of Boost can be downloaded from [here](https://www.boost.org/users/download/). The code in this repo has been tested up to ver. 1.72. The instructions on how to get started can be found [here](boost.org/doc/libs/1_72_0/more/getting_started/unix-variants.html) for Unix variants (Linux/MacOS) and [here](https://www.boost.org/doc/libs/1_72_0/more/getting_started/windows.html) for Windows systems.

Summarizing the main instructions _for Unix systems_ we have:

1. Download `boost_X_XX_0.tar.bz2`;
2. Create a durectory where to put the Boost installation;
3. From the directory where you want to put the Boost installation, execute:

```sh
  tar --bzip2 -xf /path/to/boost_X_XX_0.tar.bz2
```

4. In the same directory execute:

```sh
  ./bootstrap.sh --prefix=path/to/installation/prefix
```

5. Change directory to the `path/to/istallation` just defined and run:

```sh
  ./b2 install
```

This will leave Boost binaries in the lib/ subdirectory of your installation prefix. You will also find a copy of the Boost headers in the include/ subdirectory of the installation prefix, so you can henceforth use that directory as an #include path.
