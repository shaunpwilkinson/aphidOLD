// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// DNAprobC2
double DNAprobC2(int x, NumericVector probs);
RcppExport SEXP profile_DNAprobC2(SEXP xSEXP, SEXP probsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type probs(probsSEXP);
    rcpp_result_gen = Rcpp::wrap(DNAprobC2(x, probs));
    return rcpp_result_gen;
END_RCPP
}
// logsum
double logsum(NumericVector x);
RcppExport SEXP profile_logsum(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(logsum(x));
    return rcpp_result_gen;
END_RCPP
}
// whichmax
int whichmax(NumericVector x);
RcppExport SEXP profile_whichmax(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(whichmax(x));
    return rcpp_result_gen;
END_RCPP
}
// Viterbi_default
List Viterbi_default(IntegerVector x, IntegerVector y, int type, double d, double e, NumericMatrix S, IntegerVector windowspace, double offset);
RcppExport SEXP profile_Viterbi_default(SEXP xSEXP, SEXP ySEXP, SEXP typeSEXP, SEXP dSEXP, SEXP eSEXP, SEXP SSEXP, SEXP windowspaceSEXP, SEXP offsetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    Rcpp::traits::input_parameter< double >::type d(dSEXP);
    Rcpp::traits::input_parameter< double >::type e(eSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type S(SSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type windowspace(windowspaceSEXP);
    Rcpp::traits::input_parameter< double >::type offset(offsetSEXP);
    rcpp_result_gen = Rcpp::wrap(Viterbi_default(x, y, type, d, e, S, windowspace, offset));
    return rcpp_result_gen;
END_RCPP
}
// Viterbi_HMM
List Viterbi_HMM(IntegerVector y, NumericMatrix A, NumericMatrix E);
RcppExport SEXP profile_Viterbi_HMM(SEXP ySEXP, SEXP ASEXP, SEXP ESEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type E(ESEXP);
    rcpp_result_gen = Rcpp::wrap(Viterbi_HMM(y, A, E));
    return rcpp_result_gen;
END_RCPP
}
// Viterbi_PHMM
List Viterbi_PHMM(IntegerVector y, NumericMatrix A, NumericMatrix E, NumericVector qe, NumericVector qey, int type, IntegerVector windowspace, double offset, bool DI, bool ID, bool DNA);
RcppExport SEXP profile_Viterbi_PHMM(SEXP ySEXP, SEXP ASEXP, SEXP ESEXP, SEXP qeSEXP, SEXP qeySEXP, SEXP typeSEXP, SEXP windowspaceSEXP, SEXP offsetSEXP, SEXP DISEXP, SEXP IDSEXP, SEXP DNASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type E(ESEXP);
    Rcpp::traits::input_parameter< NumericVector >::type qe(qeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type qey(qeySEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type windowspace(windowspaceSEXP);
    Rcpp::traits::input_parameter< double >::type offset(offsetSEXP);
    Rcpp::traits::input_parameter< bool >::type DI(DISEXP);
    Rcpp::traits::input_parameter< bool >::type ID(IDSEXP);
    Rcpp::traits::input_parameter< bool >::type DNA(DNASEXP);
    rcpp_result_gen = Rcpp::wrap(Viterbi_PHMM(y, A, E, qe, qey, type, windowspace, offset, DI, ID, DNA));
    return rcpp_result_gen;
END_RCPP
}
// Viterbi_PP
List Viterbi_PP(NumericMatrix Ax, NumericMatrix Ay, NumericMatrix Ex, NumericMatrix Ey, NumericVector qe, int type, IntegerVector windowspace, double offset);
RcppExport SEXP profile_Viterbi_PP(SEXP AxSEXP, SEXP AySEXP, SEXP ExSEXP, SEXP EySEXP, SEXP qeSEXP, SEXP typeSEXP, SEXP windowspaceSEXP, SEXP offsetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Ax(AxSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Ay(AySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Ex(ExSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Ey(EySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type qe(qeSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type windowspace(windowspaceSEXP);
    Rcpp::traits::input_parameter< double >::type offset(offsetSEXP);
    rcpp_result_gen = Rcpp::wrap(Viterbi_PP(Ax, Ay, Ex, Ey, qe, type, windowspace, offset));
    return rcpp_result_gen;
END_RCPP
}
// forward_HMM
List forward_HMM(IntegerVector y, NumericMatrix A, NumericMatrix E);
RcppExport SEXP profile_forward_HMM(SEXP ySEXP, SEXP ASEXP, SEXP ESEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type E(ESEXP);
    rcpp_result_gen = Rcpp::wrap(forward_HMM(y, A, E));
    return rcpp_result_gen;
END_RCPP
}
// forward_PHMM
List forward_PHMM(IntegerVector y, NumericMatrix A, NumericMatrix E, NumericVector qe, NumericVector qey, int type, IntegerVector windowspace, bool DI, bool ID, bool DNA);
RcppExport SEXP profile_forward_PHMM(SEXP ySEXP, SEXP ASEXP, SEXP ESEXP, SEXP qeSEXP, SEXP qeySEXP, SEXP typeSEXP, SEXP windowspaceSEXP, SEXP DISEXP, SEXP IDSEXP, SEXP DNASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type E(ESEXP);
    Rcpp::traits::input_parameter< NumericVector >::type qe(qeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type qey(qeySEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type windowspace(windowspaceSEXP);
    Rcpp::traits::input_parameter< bool >::type DI(DISEXP);
    Rcpp::traits::input_parameter< bool >::type ID(IDSEXP);
    Rcpp::traits::input_parameter< bool >::type DNA(DNASEXP);
    rcpp_result_gen = Rcpp::wrap(forward_PHMM(y, A, E, qe, qey, type, windowspace, DI, ID, DNA));
    return rcpp_result_gen;
END_RCPP
}
// backward_HMM
List backward_HMM(IntegerVector y, NumericMatrix A, NumericMatrix E);
RcppExport SEXP profile_backward_HMM(SEXP ySEXP, SEXP ASEXP, SEXP ESEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type E(ESEXP);
    rcpp_result_gen = Rcpp::wrap(backward_HMM(y, A, E));
    return rcpp_result_gen;
END_RCPP
}
// backward_PHMM
List backward_PHMM(IntegerVector y, NumericMatrix A, NumericMatrix E, NumericVector qe, NumericVector qey, int type, IntegerVector windowspace, bool DI, bool ID, bool DNA);
RcppExport SEXP profile_backward_PHMM(SEXP ySEXP, SEXP ASEXP, SEXP ESEXP, SEXP qeSEXP, SEXP qeySEXP, SEXP typeSEXP, SEXP windowspaceSEXP, SEXP DISEXP, SEXP IDSEXP, SEXP DNASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type E(ESEXP);
    Rcpp::traits::input_parameter< NumericVector >::type qe(qeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type qey(qeySEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type windowspace(windowspaceSEXP);
    Rcpp::traits::input_parameter< bool >::type DI(DISEXP);
    Rcpp::traits::input_parameter< bool >::type ID(IDSEXP);
    Rcpp::traits::input_parameter< bool >::type DNA(DNASEXP);
    rcpp_result_gen = Rcpp::wrap(backward_PHMM(y, A, E, qe, qey, type, windowspace, DI, ID, DNA));
    return rcpp_result_gen;
END_RCPP
}
// kdist
NumericVector kdist(List x, int k, bool asmatrix);
RcppExport SEXP profile_kdist(SEXP xSEXP, SEXP kSEXP, SEXP asmatrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< bool >::type asmatrix(asmatrixSEXP);
    rcpp_result_gen = Rcpp::wrap(kdist(x, k, asmatrix));
    return rcpp_result_gen;
END_RCPP
}
// kdistDNA
NumericVector kdistDNA(List x, int k, bool asmatrix);
RcppExport SEXP profile_kdistDNA(SEXP xSEXP, SEXP kSEXP, SEXP asmatrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< bool >::type asmatrix(asmatrixSEXP);
    rcpp_result_gen = Rcpp::wrap(kdistDNA(x, k, asmatrix));
    return rcpp_result_gen;
END_RCPP
}
// mapC
LogicalVector mapC(NumericMatrix ecs, LogicalMatrix notgaps, List pseudocounts, NumericVector seqweights, NumericVector qe, double lambda);
RcppExport SEXP profile_mapC(SEXP ecsSEXP, SEXP notgapsSEXP, SEXP pseudocountsSEXP, SEXP seqweightsSEXP, SEXP qeSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type ecs(ecsSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type notgaps(notgapsSEXP);
    Rcpp::traits::input_parameter< List >::type pseudocounts(pseudocountsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type seqweights(seqweightsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type qe(qeSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(mapC(ecs, notgaps, pseudocounts, seqweights, qe, lambda));
    return rcpp_result_gen;
END_RCPP
}
// returnmod
List returnmod(List x);
RcppExport SEXP profile_returnmod(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(returnmod(x));
    return rcpp_result_gen;
END_RCPP
}
// progression
IntegerMatrix progression(IntegerVector path, IntegerVector start);
RcppExport SEXP profile_progression(SEXP pathSEXP, SEXP startSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type start(startSEXP);
    rcpp_result_gen = Rcpp::wrap(progression(path, start));
    return rcpp_result_gen;
END_RCPP
}
// progression2
IntegerMatrix progression2(IntegerVector path, IntegerVector start);
RcppExport SEXP profile_progression2(SEXP pathSEXP, SEXP startSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type start(startSEXP);
    rcpp_result_gen = Rcpp::wrap(progression2(path, start));
    return rcpp_result_gen;
END_RCPP
}
// transitioncount
IntegerVector transitioncount(IntegerVector x, int numbersystem);
RcppExport SEXP profile_transitioncount(SEXP xSEXP, SEXP numbersystemSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type numbersystem(numbersystemSEXP);
    rcpp_result_gen = Rcpp::wrap(transitioncount(x, numbersystem));
    return rcpp_result_gen;
END_RCPP
}
// emissioncount
IntegerVector emissioncount(IntegerVector states, int statenumbersystem, IntegerVector residues, int resnumbersystem);
RcppExport SEXP profile_emissioncount(SEXP statesSEXP, SEXP statenumbersystemSEXP, SEXP residuesSEXP, SEXP resnumbersystemSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type states(statesSEXP);
    Rcpp::traits::input_parameter< int >::type statenumbersystem(statenumbersystemSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type residues(residuesSEXP);
    Rcpp::traits::input_parameter< int >::type resnumbersystem(resnumbersystemSEXP);
    rcpp_result_gen = Rcpp::wrap(emissioncount(states, statenumbersystem, residues, resnumbersystem));
    return rcpp_result_gen;
END_RCPP
}
// tab9C
NumericMatrix tab9C(IntegerMatrix x, NumericVector seqweights);
RcppExport SEXP profile_tab9C(SEXP xSEXP, SEXP seqweightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type seqweights(seqweightsSEXP);
    rcpp_result_gen = Rcpp::wrap(tab9C(x, seqweights));
    return rcpp_result_gen;
END_RCPP
}
// DNA2pentadecimal
IntegerVector DNA2pentadecimal(RawVector x);
RcppExport SEXP profile_DNA2pentadecimal(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(DNA2pentadecimal(x));
    return rcpp_result_gen;
END_RCPP
}
// DNAprobC
double DNAprobC(RawVector a, NumericVector probs);
RcppExport SEXP profile_DNAprobC(SEXP aSEXP, SEXP probsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type probs(probsSEXP);
    rcpp_result_gen = Rcpp::wrap(DNAprobC(a, probs));
    return rcpp_result_gen;
END_RCPP
}
