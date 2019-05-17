// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// AdaptiveInitialize
Rcpp::List AdaptiveInitialize(const arma::sp_mat& M, const int r);
RcppExport SEXP _fastadi_AdaptiveInitialize(SEXP MSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const int >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(AdaptiveInitialize(M, r));
    return rcpp_result_gen;
END_RCPP
}
// masked_svd_times_x_impl
arma::vec masked_svd_times_x_impl(const arma::mat& U, const arma::rowvec& d, const arma::mat& V, const arma::vec& row, const arma::vec& col, const arma::vec& x);
RcppExport SEXP _fastadi_masked_svd_times_x_impl(SEXP USEXP, SEXP dSEXP, SEXP VSEXP, SEXP rowSEXP, SEXP colSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type row(rowSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type col(colSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(masked_svd_times_x_impl(U, d, V, row, col, x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fastadi_AdaptiveInitialize", (DL_FUNC) &_fastadi_AdaptiveInitialize, 2},
    {"_fastadi_masked_svd_times_x_impl", (DL_FUNC) &_fastadi_masked_svd_times_x_impl, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_fastadi(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
