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
Eigen::Matrix<Scalar, Eigen::Dynamic, Eigen::Dynamic> ComputeADenseDynamicB1Ss(const Scalar x0, const Scalar x1, const Scalar x2, const Scalar x3, const Scalar x4) {

    // Total ops: 45

    // Input arrays

    // Intermediate terms (3)
    const Scalar _tmp0 = x2 - 2;
    const Scalar _tmp1 = 2*x3;
    const Scalar _tmp2 = -x3;

    // Output terms (1)
    Eigen::Matrix<Scalar, Eigen::Dynamic, Eigen::Dynamic> _result(7, 7);

    _result.setZero();

    _result(4, 0) = -_tmp0*x2;
    _result(5, 0) = x2/x3 - x3*x4 + 2;
    _result(6, 0) = -x2 - x4 - 3;
    _result(0, 1) = 4 - x4;
    _result(1, 1) = _tmp0;
    _result(0, 2) = -_tmp1*(x3 - 2) - 2;
    _result(2, 2) = -1;
    _result(0, 3) = 2/(x4 + 2);
    _result(3, 3) = -x0*x1*x4*(x2 + 2);
    _result(1, 4) = -_tmp1*x1*(x0 + 2) - _tmp2;
    _result(4, 4) = -2*std::pow(x3, Scalar(2))*x4;
    _result(2, 5) = x0 - x1*(x3 - 3);
    _result(5, 5) = Scalar(1.0) / (_tmp2 + x2);
    _result(3, 6) = x2*(x2 + 4)*(x4 + 1);
    _result(6, 6) = -x0*x3/x1;

    return _result;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
