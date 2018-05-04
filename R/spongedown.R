#' SpongeDown
#'
#' Render Markdown with support for svgbob ascii drawings.
#'
#' @export
#' @rdname spongedown
#' @useDynLib spongedown R_spongedown_to_html
#' @param text input ascii text
#' @param htmlfile output file to write html
#' @references Live demo: \url{http://ivanceras.github.io/svgbob-editor/}
#' @examples text <- readLines(system.file('examples/demo.bob', package = 'spongedown'))
#' html <- spongedown(text)
#' utils::browseURL(html)
spongedown <- function(text, htmlfile = tempfile(fileext = '.html')){
  text <- paste(enc2utf8(text), collapse = "\n")
  .Call(R_spongedown_to_html, text, htmlfile)
}
