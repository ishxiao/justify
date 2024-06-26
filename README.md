justify
=======

[Xiao Shang](http://github.com/ishxiao)

[![Author](https://img.shields.io/badge/Author-ishxiao-blue.svg "Author")](https://github.com/ishxiao "Author")

Formats a file of text

Build status and test coverage
------------------------------

[![Build](https://github.com/ishxiao/justify/actions/workflows/Build.yml/badge.svg)](https://github.com/ishxiao/justify/actions/workflows/Build.yml)

Quick start
-----------

*Run with cmd:*

```
git clone git@github.com:ishxiao/justify.git
cd justify/justify
make
./justify ./test/quote.txt ./test/new_quote.txt

```

Preview
-------

*before justify*

<img alt="image" style="border-width:0" src="https://github.com/ishxiao/justify/blob/main/res/quote.png" />

or

<img alt="image" style="border-width:0" src="https://github.com/ishxiao/justify/blob/main/res/quote-vim.png" />

*after justify*

<img alt="image" style="border-width:0" src="https://github.com/ishxiao/justify/blob/main/res/new_quote.png" />

or

<img alt="image" style="border-width:0" src="https://github.com/ishxiao/justify/blob/main/res/new_quote-vim.png" />

What's included
---------------

```
justify/
├── LICENSE
├── README.md
├── justify
│     ├── justify
│     ├── justify.c
│     ├── line.c
│     ├── line.h
│     ├── makefile
│     ├── test
│     │     ├── new_quote.txt
│     │     └── quote.txt
│     ├── word.c
│     └── word.h
└── res
    ├── new_quote-vim.png
    ├── new_quote.png
    ├── quote-vim.png
    └── quote.png

4 directories, 15 files
```

## Contributing

You are most welcome to contribute to justify development by [forking this repository on GitHub](https://github.com/ishxiao/justify) and sending pull requests, or filing bug reports at the 
[issues page](http://github.com/ishxiao/justify/issues). If it is a big feature,
you might want to start an Issue first to make sure it's something that will
be accepted.  If it involves code, please also write tests for it.

## License

<a rel="license" href="http://creativecommons.org/licenses/by-nc/3.0/">
    <img alt="Creative Commons License" style="border-width:0" src="http://i.creativecommons.org/l/by-nc/3.0/88x31.png" />
</a>

The source code for the site is licensed under the MIT license, which you can find in
the [LICENSE](https://github.com/ishxiao/justify/blob/master/LICENSE) file.

All graphical assets are licensed under the
[Creative Commons Attribution 3.0 Unported License](https://creativecommons.org/licenses/by/3.0/).