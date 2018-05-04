#define R_NO_REMAP
#define STRICT_R_HEADERS
#include <Rinternals.h>

// Import C headers for rust API
#include "myrustlib/api.h"

SEXP R_spongedown_to_html(SEXP text, SEXP htmlfile){
  if(!Rf_isString(text) || !Rf_isString(htmlfile))
    Rf_error("Both text and htmlfile must be strings");
  spongedown_to_html(CHAR(STRING_ELT(text, 0)), CHAR(STRING_ELT(htmlfile, 0)));
  return htmlfile;
}

// Standard R package stuff
static const R_CallMethodDef CallEntries[] = {
  {"R_spongedown_to_html", (DL_FUNC) &R_spongedown_to_html, 2},
  {NULL, NULL, 0}
};

void R_init_spongedown(DllInfo *dll) {
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
