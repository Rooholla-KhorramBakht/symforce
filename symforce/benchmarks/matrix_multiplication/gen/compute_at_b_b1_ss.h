// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once


#include <Eigen/Dense>



namespace sym {


/**
* This function was autogenerated. Do not modify by hand.
*
* Args:
*     x0: Scalar
*     x1: Scalar
*     x2: Scalar
*     x3: Scalar
*     x4: Scalar
*
* Outputs:
*     result: Matrix77
*/
template <typename Scalar>
__attribute__((noinline))
Eigen::Matrix<Scalar, 7, 7> ComputeAtBB1Ss(const Scalar x0, const Scalar x1, const Scalar x2, const Scalar x3, const Scalar x4) {

    // Total ops: 114

    // Input arrays

    // Intermediate terms (31)
    const Scalar _tmp0 = std::pow(x2, Scalar(2));
    const Scalar _tmp1 = x2 - 2;
    const Scalar _tmp2 = x2 + 3;
    const Scalar _tmp3 = _tmp2 + x4;
    const Scalar _tmp4 = (x0 - 2)*(x1 + 1);
    const Scalar _tmp5 = _tmp0 + x1;
    const Scalar _tmp6 = x2/x3 - x3*x4 + 2;
    const Scalar _tmp7 = 2*x0;
    const Scalar _tmp8 = x2*x4;
    const Scalar _tmp9 = -x3;
    const Scalar _tmp10 = Scalar(1.0) / (_tmp9 + x2);
    const Scalar _tmp11 = _tmp7*x3;
    const Scalar _tmp12 = x4 - 4;
    const Scalar _tmp13 = 1 + x2/x0;
    const Scalar _tmp14 = x0 + 2;
    const Scalar _tmp15 = _tmp14 + _tmp9;
    const Scalar _tmp16 = 2*x3;
    const Scalar _tmp17 = _tmp16*(x3 - 2) + 2;
    const Scalar _tmp18 = Scalar(1.0) / (x4 + 2);
    const Scalar _tmp19 = 2*_tmp18;
    const Scalar _tmp20 = _tmp14*_tmp16*x1 + _tmp9;
    const Scalar _tmp21 = _tmp2*x0;
    const Scalar _tmp22 = _tmp11 + x3 + 2;
    const Scalar _tmp23 = x0 - x1*(x3 - 3);
    const Scalar _tmp24 = x2 + x4;
    const Scalar _tmp25 = _tmp14 + x2;
    const Scalar _tmp26 = x1*(x2 + 2);
    const Scalar _tmp27 = (x2 + 4)*(x4 + 1);
    const Scalar _tmp28 = Scalar(1.0) / (x3 + 4);
    const Scalar _tmp29 = x1/x4;
    const Scalar _tmp30 = _tmp7 + 2;

    // Output terms (1)
    Eigen::Matrix<Scalar, 7, 7> _result;

    _result.setZero();

    _result(0, 0) = -_tmp0*_tmp1*x0 + 2*_tmp3*_tmp4 + _tmp5*_tmp6;
    _result(4, 0) = -_tmp7*_tmp8*std::pow(x3, Scalar(2));
    _result(5, 0) = _tmp10*_tmp5;
    _result(6, 0) = _tmp11*_tmp4/x1;
    _result(1, 1) = _tmp1*_tmp15 - _tmp12*_tmp13;
    _result(2, 1) = -_tmp13*_tmp17;
    _result(3, 1) = _tmp13*_tmp19;
    _result(4, 1) = -_tmp15*_tmp20;
    _result(1, 2) = -_tmp12*_tmp21;
    _result(2, 2) = -_tmp17*_tmp21 + _tmp22;
    _result(3, 2) = _tmp18*_tmp2*_tmp7;
    _result(5, 2) = -_tmp22*_tmp23;
    _result(1, 3) = -_tmp12*_tmp24;
    _result(2, 3) = -_tmp17*_tmp24;
    _result(3, 3) = _tmp19*_tmp24 + _tmp25*_tmp26*x0*x4;
    _result(6, 3) = -_tmp25*_tmp27*x2;
    _result(1, 4) = -_tmp1*_tmp28;
    _result(4, 4) = _tmp20*_tmp28;
    _result(0, 5) = -_tmp29*_tmp6;
    _result(2, 5) = -_tmp30;
    _result(5, 5) = -_tmp10*_tmp29 + _tmp23*_tmp30;
    _result(0, 6) = _tmp3*[&]() { const Scalar base = x1; return base * base * base; }();
    _result(3, 6) = -_tmp26*_tmp8*[&]() { const Scalar base = x0; return base * base * base; }();
    _result(6, 6) = _tmp0*_tmp27*std::pow(x0, Scalar(2)) + x0*std::pow(x1, Scalar(2))*x3;

    return _result;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
