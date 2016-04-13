// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef __fourierin_RcppExports_h__
#define __fourierin_RcppExports_h__

#include <RcppArmadillo.h>
#include <Rcpp.h>

namespace fourierin {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("fourierin", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("fourierin", "fourierin_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in fourierin");
            }
        }
    }

    inline arma::cx_vec fourierin_1d_cpp(const arma::vec& f, double a, double b, double c, double d, double r, double s) {
        typedef SEXP(*Ptr_fourierin_1d_cpp)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_fourierin_1d_cpp p_fourierin_1d_cpp = NULL;
        if (p_fourierin_1d_cpp == NULL) {
            validateSignature("arma::cx_vec(*fourierin_1d_cpp)(const arma::vec&,double,double,double,double,double,double)");
            p_fourierin_1d_cpp = (Ptr_fourierin_1d_cpp)R_GetCCallable("fourierin", "fourierin_fourierin_1d_cpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_fourierin_1d_cpp(Rcpp::wrap(f), Rcpp::wrap(a), Rcpp::wrap(b), Rcpp::wrap(c), Rcpp::wrap(d), Rcpp::wrap(r), Rcpp::wrap(s));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::cx_vec >(__result);
    }

    inline arma::cx_mat fourierin_2d_cpp(const arma::mat& f, const arma::vec& a, const arma::vec& b, const arma::vec& c, const arma::vec& d, double r, double s) {
        typedef SEXP(*Ptr_fourierin_2d_cpp)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_fourierin_2d_cpp p_fourierin_2d_cpp = NULL;
        if (p_fourierin_2d_cpp == NULL) {
            validateSignature("arma::cx_mat(*fourierin_2d_cpp)(const arma::mat&,const arma::vec&,const arma::vec&,const arma::vec&,const arma::vec&,double,double)");
            p_fourierin_2d_cpp = (Ptr_fourierin_2d_cpp)R_GetCCallable("fourierin", "fourierin_fourierin_2d_cpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_fourierin_2d_cpp(Rcpp::wrap(f), Rcpp::wrap(a), Rcpp::wrap(b), Rcpp::wrap(c), Rcpp::wrap(d), Rcpp::wrap(r), Rcpp::wrap(s));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::cx_mat >(__result);
    }

    inline arma::cx_vec fourierin_cx_1d_cpp(const arma::cx_vec& f, double a, double b, double c, double d, double r, double s) {
        typedef SEXP(*Ptr_fourierin_cx_1d_cpp)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_fourierin_cx_1d_cpp p_fourierin_cx_1d_cpp = NULL;
        if (p_fourierin_cx_1d_cpp == NULL) {
            validateSignature("arma::cx_vec(*fourierin_cx_1d_cpp)(const arma::cx_vec&,double,double,double,double,double,double)");
            p_fourierin_cx_1d_cpp = (Ptr_fourierin_cx_1d_cpp)R_GetCCallable("fourierin", "fourierin_fourierin_cx_1d_cpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_fourierin_cx_1d_cpp(Rcpp::wrap(f), Rcpp::wrap(a), Rcpp::wrap(b), Rcpp::wrap(c), Rcpp::wrap(d), Rcpp::wrap(r), Rcpp::wrap(s));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::cx_vec >(__result);
    }

    inline arma::cx_mat fourierin_cx_2d_cpp(const arma::cx_mat& f, const arma::vec& a, const arma::vec& b, const arma::vec& c, const arma::vec& d, double r, double s) {
        typedef SEXP(*Ptr_fourierin_cx_2d_cpp)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_fourierin_cx_2d_cpp p_fourierin_cx_2d_cpp = NULL;
        if (p_fourierin_cx_2d_cpp == NULL) {
            validateSignature("arma::cx_mat(*fourierin_cx_2d_cpp)(const arma::cx_mat&,const arma::vec&,const arma::vec&,const arma::vec&,const arma::vec&,double,double)");
            p_fourierin_cx_2d_cpp = (Ptr_fourierin_cx_2d_cpp)R_GetCCallable("fourierin", "fourierin_fourierin_cx_2d_cpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_fourierin_cx_2d_cpp(Rcpp::wrap(f), Rcpp::wrap(a), Rcpp::wrap(b), Rcpp::wrap(c), Rcpp::wrap(d), Rcpp::wrap(r), Rcpp::wrap(s));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::cx_mat >(__result);
    }

    inline Rcpp::ComplexVector fft_rcpp(const Rcpp::NumericVector& real, const Rcpp::NumericVector& imag) {
        typedef SEXP(*Ptr_fft_rcpp)(SEXP,SEXP);
        static Ptr_fft_rcpp p_fft_rcpp = NULL;
        if (p_fft_rcpp == NULL) {
            validateSignature("Rcpp::ComplexVector(*fft_rcpp)(const Rcpp::NumericVector&,const Rcpp::NumericVector&)");
            p_fft_rcpp = (Ptr_fft_rcpp)R_GetCCallable("fourierin", "fourierin_fft_rcpp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_fft_rcpp(Rcpp::wrap(real), Rcpp::wrap(imag));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::ComplexVector >(__result);
    }

    inline Rcpp::ComplexVector fft_rcpp_2(const Rcpp::ComplexVector& v) {
        typedef SEXP(*Ptr_fft_rcpp_2)(SEXP);
        static Ptr_fft_rcpp_2 p_fft_rcpp_2 = NULL;
        if (p_fft_rcpp_2 == NULL) {
            validateSignature("Rcpp::ComplexVector(*fft_rcpp_2)(const Rcpp::ComplexVector&)");
            p_fft_rcpp_2 = (Ptr_fft_rcpp_2)R_GetCCallable("fourierin", "fourierin_fft_rcpp_2");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_fft_rcpp_2(Rcpp::wrap(v));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::ComplexVector >(__result);
    }

    inline Rcpp::ComplexVector fft_rcpp_3(const Rcpp::ComplexVector& v) {
        typedef SEXP(*Ptr_fft_rcpp_3)(SEXP);
        static Ptr_fft_rcpp_3 p_fft_rcpp_3 = NULL;
        if (p_fft_rcpp_3 == NULL) {
            validateSignature("Rcpp::ComplexVector(*fft_rcpp_3)(const Rcpp::ComplexVector&)");
            p_fft_rcpp_3 = (Ptr_fft_rcpp_3)R_GetCCallable("fourierin", "fourierin_fft_rcpp_3");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_fft_rcpp_3(Rcpp::wrap(v));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<Rcpp::ComplexVector >(__result);
    }

    inline arma::cx_vec fft_rcpp_4(const arma::cx_vec& v) {
        typedef SEXP(*Ptr_fft_rcpp_4)(SEXP);
        static Ptr_fft_rcpp_4 p_fft_rcpp_4 = NULL;
        if (p_fft_rcpp_4 == NULL) {
            validateSignature("arma::cx_vec(*fft_rcpp_4)(const arma::cx_vec&)");
            p_fft_rcpp_4 = (Ptr_fft_rcpp_4)R_GetCCallable("fourierin", "fourierin_fft_rcpp_4");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_fft_rcpp_4(Rcpp::wrap(v));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<arma::cx_vec >(__result);
    }

}

#endif // __fourierin_RcppExports_h__
