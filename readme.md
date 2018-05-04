# SpongeDown in R

[![Build Status](https://travis-ci.org/r-rust/spongedown.svg)](https://travis-ci.org/r-rust/spongedown)
[![AppVeyor Build Status](https://ci.appveyor.com/api/projects/status/github/r-rust/spongedown)](https://ci.appveyor.com/project/jeroen/spongedown)

> Spongedown converts markdown file to html with support for svgbob diagrams.
  
This R package wraps the [spongedown](https://crates.io/crates/spongedown) cargo crate.
  
## Examples

Spongedown converts markdown file to html with support for svgbob diagrams. To play with spongedown, try the [online demo](http://ivanceras.github.io/svgbob-editor/)!

To convert it in R:

```r
library(spongedown)
text <- readLines(system.file('examples/demo.bob', package = 'spongedown'))
html <- spongedown(text)
utils::browseURL(html)
```

## Installation in R

Please see the [hellorust readme](https://github.com/r-rust/hellorust#installation) for instructions how to compile this on Windows, MacOS or Linux. After that you can just do:

```r
devtools::install_github("r-rust/spongedown")
```
