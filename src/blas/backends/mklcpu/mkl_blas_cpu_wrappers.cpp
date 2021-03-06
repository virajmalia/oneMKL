/*******************************************************************************
* Copyright 2020 Intel Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing,
* software distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions
* and limitations under the License.
*
*
* SPDX-License-Identifier: Apache-2.0
*******************************************************************************/

#include "blas/function_table.hpp"
#include "oneapi/mkl/blas/detail/mklcpu/onemkl_blas_mklcpu.hpp"

#define WRAPPER_VERSION 1

extern "C" ONEMKL_EXPORT blas_function_table_t mkl_blas_table = {
    WRAPPER_VERSION,
    oneapi::mkl::mklcpu::column_major::asum,
    oneapi::mkl::mklcpu::column_major::asum,
    oneapi::mkl::mklcpu::column_major::asum,
    oneapi::mkl::mklcpu::column_major::asum,
    oneapi::mkl::mklcpu::column_major::axpy,
    oneapi::mkl::mklcpu::column_major::axpy,
    oneapi::mkl::mklcpu::column_major::axpy,
    oneapi::mkl::mklcpu::column_major::axpy,
    oneapi::mkl::mklcpu::column_major::copy,
    oneapi::mkl::mklcpu::column_major::copy,
    oneapi::mkl::mklcpu::column_major::copy,
    oneapi::mkl::mklcpu::column_major::copy,
    oneapi::mkl::mklcpu::column_major::dot,
    oneapi::mkl::mklcpu::column_major::dot,
    oneapi::mkl::mklcpu::column_major::dot,
    oneapi::mkl::mklcpu::column_major::dotc,
    oneapi::mkl::mklcpu::column_major::dotc,
    oneapi::mkl::mklcpu::column_major::dotu,
    oneapi::mkl::mklcpu::column_major::dotu,
    oneapi::mkl::mklcpu::column_major::iamin,
    oneapi::mkl::mklcpu::column_major::iamin,
    oneapi::mkl::mklcpu::column_major::iamin,
    oneapi::mkl::mklcpu::column_major::iamin,
    oneapi::mkl::mklcpu::column_major::iamax,
    oneapi::mkl::mklcpu::column_major::iamax,
    oneapi::mkl::mklcpu::column_major::iamax,
    oneapi::mkl::mklcpu::column_major::iamax,
    oneapi::mkl::mklcpu::column_major::nrm2,
    oneapi::mkl::mklcpu::column_major::nrm2,
    oneapi::mkl::mklcpu::column_major::nrm2,
    oneapi::mkl::mklcpu::column_major::nrm2,
    oneapi::mkl::mklcpu::column_major::rot,
    oneapi::mkl::mklcpu::column_major::rot,
    oneapi::mkl::mklcpu::column_major::rot,
    oneapi::mkl::mklcpu::column_major::rot,
    oneapi::mkl::mklcpu::column_major::rotg,
    oneapi::mkl::mklcpu::column_major::rotg,
    oneapi::mkl::mklcpu::column_major::rotg,
    oneapi::mkl::mklcpu::column_major::rotg,
    oneapi::mkl::mklcpu::column_major::rotm,
    oneapi::mkl::mklcpu::column_major::rotm,
    oneapi::mkl::mklcpu::column_major::rotmg,
    oneapi::mkl::mklcpu::column_major::rotmg,
    oneapi::mkl::mklcpu::column_major::scal,
    oneapi::mkl::mklcpu::column_major::scal,
    oneapi::mkl::mklcpu::column_major::scal,
    oneapi::mkl::mklcpu::column_major::scal,
    oneapi::mkl::mklcpu::column_major::scal,
    oneapi::mkl::mklcpu::column_major::scal,
    oneapi::mkl::mklcpu::column_major::sdsdot,
    oneapi::mkl::mklcpu::column_major::swap,
    oneapi::mkl::mklcpu::column_major::swap,
    oneapi::mkl::mklcpu::column_major::swap,
    oneapi::mkl::mklcpu::column_major::swap,
    oneapi::mkl::mklcpu::column_major::gbmv,
    oneapi::mkl::mklcpu::column_major::gbmv,
    oneapi::mkl::mklcpu::column_major::gbmv,
    oneapi::mkl::mklcpu::column_major::gbmv,
    oneapi::mkl::mklcpu::column_major::gemv,
    oneapi::mkl::mklcpu::column_major::gemv,
    oneapi::mkl::mklcpu::column_major::gemv,
    oneapi::mkl::mklcpu::column_major::gemv,
    oneapi::mkl::mklcpu::column_major::ger,
    oneapi::mkl::mklcpu::column_major::ger,
    oneapi::mkl::mklcpu::column_major::gerc,
    oneapi::mkl::mklcpu::column_major::gerc,
    oneapi::mkl::mklcpu::column_major::geru,
    oneapi::mkl::mklcpu::column_major::geru,
    oneapi::mkl::mklcpu::column_major::hbmv,
    oneapi::mkl::mklcpu::column_major::hbmv,
    oneapi::mkl::mklcpu::column_major::hemv,
    oneapi::mkl::mklcpu::column_major::hemv,
    oneapi::mkl::mklcpu::column_major::her,
    oneapi::mkl::mklcpu::column_major::her,
    oneapi::mkl::mklcpu::column_major::her2,
    oneapi::mkl::mklcpu::column_major::her2,
    oneapi::mkl::mklcpu::column_major::hpmv,
    oneapi::mkl::mklcpu::column_major::hpmv,
    oneapi::mkl::mklcpu::column_major::hpr,
    oneapi::mkl::mklcpu::column_major::hpr,
    oneapi::mkl::mklcpu::column_major::hpr2,
    oneapi::mkl::mklcpu::column_major::hpr2,
    oneapi::mkl::mklcpu::column_major::sbmv,
    oneapi::mkl::mklcpu::column_major::sbmv,
    oneapi::mkl::mklcpu::column_major::spmv,
    oneapi::mkl::mklcpu::column_major::spmv,
    oneapi::mkl::mklcpu::column_major::spr,
    oneapi::mkl::mklcpu::column_major::spr,
    oneapi::mkl::mklcpu::column_major::spr2,
    oneapi::mkl::mklcpu::column_major::spr2,
    oneapi::mkl::mklcpu::column_major::symv,
    oneapi::mkl::mklcpu::column_major::symv,
    oneapi::mkl::mklcpu::column_major::syr,
    oneapi::mkl::mklcpu::column_major::syr,
    oneapi::mkl::mklcpu::column_major::syr2,
    oneapi::mkl::mklcpu::column_major::syr2,
    oneapi::mkl::mklcpu::column_major::tbmv,
    oneapi::mkl::mklcpu::column_major::tbmv,
    oneapi::mkl::mklcpu::column_major::tbmv,
    oneapi::mkl::mklcpu::column_major::tbmv,
    oneapi::mkl::mklcpu::column_major::tbsv,
    oneapi::mkl::mklcpu::column_major::tbsv,
    oneapi::mkl::mklcpu::column_major::tbsv,
    oneapi::mkl::mklcpu::column_major::tbsv,
    oneapi::mkl::mklcpu::column_major::tpmv,
    oneapi::mkl::mklcpu::column_major::tpmv,
    oneapi::mkl::mklcpu::column_major::tpmv,
    oneapi::mkl::mklcpu::column_major::tpmv,
    oneapi::mkl::mklcpu::column_major::tpsv,
    oneapi::mkl::mklcpu::column_major::tpsv,
    oneapi::mkl::mklcpu::column_major::tpsv,
    oneapi::mkl::mklcpu::column_major::tpsv,
    oneapi::mkl::mklcpu::column_major::trmv,
    oneapi::mkl::mklcpu::column_major::trmv,
    oneapi::mkl::mklcpu::column_major::trmv,
    oneapi::mkl::mklcpu::column_major::trmv,
    oneapi::mkl::mklcpu::column_major::trsv,
    oneapi::mkl::mklcpu::column_major::trsv,
    oneapi::mkl::mklcpu::column_major::trsv,
    oneapi::mkl::mklcpu::column_major::trsv,
    oneapi::mkl::mklcpu::column_major::gemm,
    oneapi::mkl::mklcpu::column_major::gemm,
    oneapi::mkl::mklcpu::column_major::gemm,
    oneapi::mkl::mklcpu::column_major::gemm,
    oneapi::mkl::mklcpu::column_major::gemm,
    oneapi::mkl::mklcpu::column_major::gemm,
    oneapi::mkl::mklcpu::column_major::hemm,
    oneapi::mkl::mklcpu::column_major::hemm,
    oneapi::mkl::mklcpu::column_major::herk,
    oneapi::mkl::mklcpu::column_major::herk,
    oneapi::mkl::mklcpu::column_major::her2k,
    oneapi::mkl::mklcpu::column_major::her2k,
    oneapi::mkl::mklcpu::column_major::symm,
    oneapi::mkl::mklcpu::column_major::symm,
    oneapi::mkl::mklcpu::column_major::symm,
    oneapi::mkl::mklcpu::column_major::symm,
    oneapi::mkl::mklcpu::column_major::syrk,
    oneapi::mkl::mklcpu::column_major::syrk,
    oneapi::mkl::mklcpu::column_major::syrk,
    oneapi::mkl::mklcpu::column_major::syrk,
    oneapi::mkl::mklcpu::column_major::syr2k,
    oneapi::mkl::mklcpu::column_major::syr2k,
    oneapi::mkl::mklcpu::column_major::syr2k,
    oneapi::mkl::mklcpu::column_major::syr2k,
    oneapi::mkl::mklcpu::column_major::trmm,
    oneapi::mkl::mklcpu::column_major::trmm,
    oneapi::mkl::mklcpu::column_major::trmm,
    oneapi::mkl::mklcpu::column_major::trmm,
    oneapi::mkl::mklcpu::column_major::trsm,
    oneapi::mkl::mklcpu::column_major::trsm,
    oneapi::mkl::mklcpu::column_major::trsm,
    oneapi::mkl::mklcpu::column_major::trsm,
    oneapi::mkl::mklcpu::column_major::gemm_batch,
    oneapi::mkl::mklcpu::column_major::gemm_batch,
    oneapi::mkl::mklcpu::column_major::gemm_batch,
    oneapi::mkl::mklcpu::column_major::gemm_batch,
    oneapi::mkl::mklcpu::column_major::trsm_batch,
    oneapi::mkl::mklcpu::column_major::trsm_batch,
    oneapi::mkl::mklcpu::column_major::trsm_batch,
    oneapi::mkl::mklcpu::column_major::trsm_batch,
    oneapi::mkl::mklcpu::column_major::gemmt,
    oneapi::mkl::mklcpu::column_major::gemmt,
    oneapi::mkl::mklcpu::column_major::gemmt,
    oneapi::mkl::mklcpu::column_major::gemmt,
    oneapi::mkl::mklcpu::column_major::gemm_bias,
    oneapi::mkl::mklcpu::column_major::asum,
    oneapi::mkl::mklcpu::column_major::asum,
    oneapi::mkl::mklcpu::column_major::asum,
    oneapi::mkl::mklcpu::column_major::asum,
    oneapi::mkl::mklcpu::column_major::axpy,
    oneapi::mkl::mklcpu::column_major::axpy,
    oneapi::mkl::mklcpu::column_major::axpy,
    oneapi::mkl::mklcpu::column_major::axpy,
    oneapi::mkl::mklcpu::column_major::axpy_batch,
    oneapi::mkl::mklcpu::column_major::axpy_batch,
    oneapi::mkl::mklcpu::column_major::axpy_batch,
    oneapi::mkl::mklcpu::column_major::axpy_batch,
    oneapi::mkl::mklcpu::column_major::copy,
    oneapi::mkl::mklcpu::column_major::copy,
    oneapi::mkl::mklcpu::column_major::copy,
    oneapi::mkl::mklcpu::column_major::copy,
    oneapi::mkl::mklcpu::column_major::dot,
    oneapi::mkl::mklcpu::column_major::dot,
    oneapi::mkl::mklcpu::column_major::dot,
    oneapi::mkl::mklcpu::column_major::dotc,
    oneapi::mkl::mklcpu::column_major::dotc,
    oneapi::mkl::mklcpu::column_major::dotu,
    oneapi::mkl::mklcpu::column_major::dotu,
    oneapi::mkl::mklcpu::column_major::iamin,
    oneapi::mkl::mklcpu::column_major::iamin,
    oneapi::mkl::mklcpu::column_major::iamin,
    oneapi::mkl::mklcpu::column_major::iamin,
    oneapi::mkl::mklcpu::column_major::iamax,
    oneapi::mkl::mklcpu::column_major::iamax,
    oneapi::mkl::mklcpu::column_major::iamax,
    oneapi::mkl::mklcpu::column_major::iamax,
    oneapi::mkl::mklcpu::column_major::nrm2,
    oneapi::mkl::mklcpu::column_major::nrm2,
    oneapi::mkl::mklcpu::column_major::nrm2,
    oneapi::mkl::mklcpu::column_major::nrm2,
    oneapi::mkl::mklcpu::column_major::rot,
    oneapi::mkl::mklcpu::column_major::rot,
    oneapi::mkl::mklcpu::column_major::rot,
    oneapi::mkl::mklcpu::column_major::rot,
    oneapi::mkl::mklcpu::column_major::rotg,
    oneapi::mkl::mklcpu::column_major::rotg,
    oneapi::mkl::mklcpu::column_major::rotg,
    oneapi::mkl::mklcpu::column_major::rotg,
    oneapi::mkl::mklcpu::column_major::rotm,
    oneapi::mkl::mklcpu::column_major::rotm,
    oneapi::mkl::mklcpu::column_major::rotmg,
    oneapi::mkl::mklcpu::column_major::rotmg,
    oneapi::mkl::mklcpu::column_major::scal,
    oneapi::mkl::mklcpu::column_major::scal,
    oneapi::mkl::mklcpu::column_major::scal,
    oneapi::mkl::mklcpu::column_major::scal,
    oneapi::mkl::mklcpu::column_major::scal,
    oneapi::mkl::mklcpu::column_major::scal,
    oneapi::mkl::mklcpu::column_major::sdsdot,
    oneapi::mkl::mklcpu::column_major::swap,
    oneapi::mkl::mklcpu::column_major::swap,
    oneapi::mkl::mklcpu::column_major::swap,
    oneapi::mkl::mklcpu::column_major::swap,
    oneapi::mkl::mklcpu::column_major::gbmv,
    oneapi::mkl::mklcpu::column_major::gbmv,
    oneapi::mkl::mklcpu::column_major::gbmv,
    oneapi::mkl::mklcpu::column_major::gbmv,
    oneapi::mkl::mklcpu::column_major::gemv,
    oneapi::mkl::mklcpu::column_major::gemv,
    oneapi::mkl::mklcpu::column_major::gemv,
    oneapi::mkl::mklcpu::column_major::gemv,
    oneapi::mkl::mklcpu::column_major::ger,
    oneapi::mkl::mklcpu::column_major::ger,
    oneapi::mkl::mklcpu::column_major::gerc,
    oneapi::mkl::mklcpu::column_major::gerc,
    oneapi::mkl::mklcpu::column_major::geru,
    oneapi::mkl::mklcpu::column_major::geru,
    oneapi::mkl::mklcpu::column_major::hbmv,
    oneapi::mkl::mklcpu::column_major::hbmv,
    oneapi::mkl::mklcpu::column_major::hemv,
    oneapi::mkl::mklcpu::column_major::hemv,
    oneapi::mkl::mklcpu::column_major::her,
    oneapi::mkl::mklcpu::column_major::her,
    oneapi::mkl::mklcpu::column_major::her2,
    oneapi::mkl::mklcpu::column_major::her2,
    oneapi::mkl::mklcpu::column_major::hpmv,
    oneapi::mkl::mklcpu::column_major::hpmv,
    oneapi::mkl::mklcpu::column_major::hpr,
    oneapi::mkl::mklcpu::column_major::hpr,
    oneapi::mkl::mklcpu::column_major::hpr2,
    oneapi::mkl::mklcpu::column_major::hpr2,
    oneapi::mkl::mklcpu::column_major::sbmv,
    oneapi::mkl::mklcpu::column_major::sbmv,
    oneapi::mkl::mklcpu::column_major::spmv,
    oneapi::mkl::mklcpu::column_major::spmv,
    oneapi::mkl::mklcpu::column_major::spr,
    oneapi::mkl::mklcpu::column_major::spr,
    oneapi::mkl::mklcpu::column_major::spr2,
    oneapi::mkl::mklcpu::column_major::spr2,
    oneapi::mkl::mklcpu::column_major::symv,
    oneapi::mkl::mklcpu::column_major::symv,
    oneapi::mkl::mklcpu::column_major::syr,
    oneapi::mkl::mklcpu::column_major::syr,
    oneapi::mkl::mklcpu::column_major::syr2,
    oneapi::mkl::mklcpu::column_major::syr2,
    oneapi::mkl::mklcpu::column_major::tbmv,
    oneapi::mkl::mklcpu::column_major::tbmv,
    oneapi::mkl::mklcpu::column_major::tbmv,
    oneapi::mkl::mklcpu::column_major::tbmv,
    oneapi::mkl::mklcpu::column_major::tbsv,
    oneapi::mkl::mklcpu::column_major::tbsv,
    oneapi::mkl::mklcpu::column_major::tbsv,
    oneapi::mkl::mklcpu::column_major::tbsv,
    oneapi::mkl::mklcpu::column_major::tpmv,
    oneapi::mkl::mklcpu::column_major::tpmv,
    oneapi::mkl::mklcpu::column_major::tpmv,
    oneapi::mkl::mklcpu::column_major::tpmv,
    oneapi::mkl::mklcpu::column_major::tpsv,
    oneapi::mkl::mklcpu::column_major::tpsv,
    oneapi::mkl::mklcpu::column_major::tpsv,
    oneapi::mkl::mklcpu::column_major::tpsv,
    oneapi::mkl::mklcpu::column_major::trmv,
    oneapi::mkl::mklcpu::column_major::trmv,
    oneapi::mkl::mklcpu::column_major::trmv,
    oneapi::mkl::mklcpu::column_major::trmv,
    oneapi::mkl::mklcpu::column_major::trsv,
    oneapi::mkl::mklcpu::column_major::trsv,
    oneapi::mkl::mklcpu::column_major::trsv,
    oneapi::mkl::mklcpu::column_major::trsv,
    oneapi::mkl::mklcpu::column_major::gemm,
    oneapi::mkl::mklcpu::column_major::gemm,
    oneapi::mkl::mklcpu::column_major::gemm,
    oneapi::mkl::mklcpu::column_major::gemm,
    oneapi::mkl::mklcpu::column_major::hemm,
    oneapi::mkl::mklcpu::column_major::hemm,
    oneapi::mkl::mklcpu::column_major::herk,
    oneapi::mkl::mklcpu::column_major::herk,
    oneapi::mkl::mklcpu::column_major::her2k,
    oneapi::mkl::mklcpu::column_major::her2k,
    oneapi::mkl::mklcpu::column_major::symm,
    oneapi::mkl::mklcpu::column_major::symm,
    oneapi::mkl::mklcpu::column_major::symm,
    oneapi::mkl::mklcpu::column_major::symm,
    oneapi::mkl::mklcpu::column_major::syrk,
    oneapi::mkl::mklcpu::column_major::syrk,
    oneapi::mkl::mklcpu::column_major::syrk,
    oneapi::mkl::mklcpu::column_major::syrk,
    oneapi::mkl::mklcpu::column_major::syr2k,
    oneapi::mkl::mklcpu::column_major::syr2k,
    oneapi::mkl::mklcpu::column_major::syr2k,
    oneapi::mkl::mklcpu::column_major::syr2k,
    oneapi::mkl::mklcpu::column_major::trmm,
    oneapi::mkl::mklcpu::column_major::trmm,
    oneapi::mkl::mklcpu::column_major::trmm,
    oneapi::mkl::mklcpu::column_major::trmm,
    oneapi::mkl::mklcpu::column_major::trsm,
    oneapi::mkl::mklcpu::column_major::trsm,
    oneapi::mkl::mklcpu::column_major::trsm,
    oneapi::mkl::mklcpu::column_major::trsm,
    oneapi::mkl::mklcpu::column_major::gemm_batch,
    oneapi::mkl::mklcpu::column_major::gemm_batch,
    oneapi::mkl::mklcpu::column_major::gemm_batch,
    oneapi::mkl::mklcpu::column_major::gemm_batch,
    oneapi::mkl::mklcpu::column_major::gemm_batch,
    oneapi::mkl::mklcpu::column_major::gemm_batch,
    oneapi::mkl::mklcpu::column_major::gemm_batch,
    oneapi::mkl::mklcpu::column_major::gemm_batch,
    oneapi::mkl::mklcpu::column_major::gemmt,
    oneapi::mkl::mklcpu::column_major::gemmt,
    oneapi::mkl::mklcpu::column_major::gemmt,
    oneapi::mkl::mklcpu::column_major::gemmt,
    oneapi::mkl::mklcpu::row_major::asum,
    oneapi::mkl::mklcpu::row_major::asum,
    oneapi::mkl::mklcpu::row_major::asum,
    oneapi::mkl::mklcpu::row_major::asum,
    oneapi::mkl::mklcpu::row_major::axpy,
    oneapi::mkl::mklcpu::row_major::axpy,
    oneapi::mkl::mklcpu::row_major::axpy,
    oneapi::mkl::mklcpu::row_major::axpy,
    oneapi::mkl::mklcpu::row_major::copy,
    oneapi::mkl::mklcpu::row_major::copy,
    oneapi::mkl::mklcpu::row_major::copy,
    oneapi::mkl::mklcpu::row_major::copy,
    oneapi::mkl::mklcpu::row_major::dot,
    oneapi::mkl::mklcpu::row_major::dot,
    oneapi::mkl::mklcpu::row_major::dot,
    oneapi::mkl::mklcpu::row_major::dotc,
    oneapi::mkl::mklcpu::row_major::dotc,
    oneapi::mkl::mklcpu::row_major::dotu,
    oneapi::mkl::mklcpu::row_major::dotu,
    oneapi::mkl::mklcpu::row_major::iamin,
    oneapi::mkl::mklcpu::row_major::iamin,
    oneapi::mkl::mklcpu::row_major::iamin,
    oneapi::mkl::mklcpu::row_major::iamin,
    oneapi::mkl::mklcpu::row_major::iamax,
    oneapi::mkl::mklcpu::row_major::iamax,
    oneapi::mkl::mklcpu::row_major::iamax,
    oneapi::mkl::mklcpu::row_major::iamax,
    oneapi::mkl::mklcpu::row_major::nrm2,
    oneapi::mkl::mklcpu::row_major::nrm2,
    oneapi::mkl::mklcpu::row_major::nrm2,
    oneapi::mkl::mklcpu::row_major::nrm2,
    oneapi::mkl::mklcpu::row_major::rot,
    oneapi::mkl::mklcpu::row_major::rot,
    oneapi::mkl::mklcpu::row_major::rot,
    oneapi::mkl::mklcpu::row_major::rot,
    oneapi::mkl::mklcpu::row_major::rotg,
    oneapi::mkl::mklcpu::row_major::rotg,
    oneapi::mkl::mklcpu::row_major::rotg,
    oneapi::mkl::mklcpu::row_major::rotg,
    oneapi::mkl::mklcpu::row_major::rotm,
    oneapi::mkl::mklcpu::row_major::rotm,
    oneapi::mkl::mklcpu::row_major::rotmg,
    oneapi::mkl::mklcpu::row_major::rotmg,
    oneapi::mkl::mklcpu::row_major::scal,
    oneapi::mkl::mklcpu::row_major::scal,
    oneapi::mkl::mklcpu::row_major::scal,
    oneapi::mkl::mklcpu::row_major::scal,
    oneapi::mkl::mklcpu::row_major::scal,
    oneapi::mkl::mklcpu::row_major::scal,
    oneapi::mkl::mklcpu::row_major::sdsdot,
    oneapi::mkl::mklcpu::row_major::swap,
    oneapi::mkl::mklcpu::row_major::swap,
    oneapi::mkl::mklcpu::row_major::swap,
    oneapi::mkl::mklcpu::row_major::swap,
    oneapi::mkl::mklcpu::row_major::gbmv,
    oneapi::mkl::mklcpu::row_major::gbmv,
    oneapi::mkl::mklcpu::row_major::gbmv,
    oneapi::mkl::mklcpu::row_major::gbmv,
    oneapi::mkl::mklcpu::row_major::gemv,
    oneapi::mkl::mklcpu::row_major::gemv,
    oneapi::mkl::mklcpu::row_major::gemv,
    oneapi::mkl::mklcpu::row_major::gemv,
    oneapi::mkl::mklcpu::row_major::ger,
    oneapi::mkl::mklcpu::row_major::ger,
    oneapi::mkl::mklcpu::row_major::gerc,
    oneapi::mkl::mklcpu::row_major::gerc,
    oneapi::mkl::mklcpu::row_major::geru,
    oneapi::mkl::mklcpu::row_major::geru,
    oneapi::mkl::mklcpu::row_major::hbmv,
    oneapi::mkl::mklcpu::row_major::hbmv,
    oneapi::mkl::mklcpu::row_major::hemv,
    oneapi::mkl::mklcpu::row_major::hemv,
    oneapi::mkl::mklcpu::row_major::her,
    oneapi::mkl::mklcpu::row_major::her,
    oneapi::mkl::mklcpu::row_major::her2,
    oneapi::mkl::mklcpu::row_major::her2,
    oneapi::mkl::mklcpu::row_major::hpmv,
    oneapi::mkl::mklcpu::row_major::hpmv,
    oneapi::mkl::mklcpu::row_major::hpr,
    oneapi::mkl::mklcpu::row_major::hpr,
    oneapi::mkl::mklcpu::row_major::hpr2,
    oneapi::mkl::mklcpu::row_major::hpr2,
    oneapi::mkl::mklcpu::row_major::sbmv,
    oneapi::mkl::mklcpu::row_major::sbmv,
    oneapi::mkl::mklcpu::row_major::spmv,
    oneapi::mkl::mklcpu::row_major::spmv,
    oneapi::mkl::mklcpu::row_major::spr,
    oneapi::mkl::mklcpu::row_major::spr,
    oneapi::mkl::mklcpu::row_major::spr2,
    oneapi::mkl::mklcpu::row_major::spr2,
    oneapi::mkl::mklcpu::row_major::symv,
    oneapi::mkl::mklcpu::row_major::symv,
    oneapi::mkl::mklcpu::row_major::syr,
    oneapi::mkl::mklcpu::row_major::syr,
    oneapi::mkl::mklcpu::row_major::syr2,
    oneapi::mkl::mklcpu::row_major::syr2,
    oneapi::mkl::mklcpu::row_major::tbmv,
    oneapi::mkl::mklcpu::row_major::tbmv,
    oneapi::mkl::mklcpu::row_major::tbmv,
    oneapi::mkl::mklcpu::row_major::tbmv,
    oneapi::mkl::mklcpu::row_major::tbsv,
    oneapi::mkl::mklcpu::row_major::tbsv,
    oneapi::mkl::mklcpu::row_major::tbsv,
    oneapi::mkl::mklcpu::row_major::tbsv,
    oneapi::mkl::mklcpu::row_major::tpmv,
    oneapi::mkl::mklcpu::row_major::tpmv,
    oneapi::mkl::mklcpu::row_major::tpmv,
    oneapi::mkl::mklcpu::row_major::tpmv,
    oneapi::mkl::mklcpu::row_major::tpsv,
    oneapi::mkl::mklcpu::row_major::tpsv,
    oneapi::mkl::mklcpu::row_major::tpsv,
    oneapi::mkl::mklcpu::row_major::tpsv,
    oneapi::mkl::mklcpu::row_major::trmv,
    oneapi::mkl::mklcpu::row_major::trmv,
    oneapi::mkl::mklcpu::row_major::trmv,
    oneapi::mkl::mklcpu::row_major::trmv,
    oneapi::mkl::mklcpu::row_major::trsv,
    oneapi::mkl::mklcpu::row_major::trsv,
    oneapi::mkl::mklcpu::row_major::trsv,
    oneapi::mkl::mklcpu::row_major::trsv,
    oneapi::mkl::mklcpu::row_major::gemm,
    oneapi::mkl::mklcpu::row_major::gemm,
    oneapi::mkl::mklcpu::row_major::gemm,
    oneapi::mkl::mklcpu::row_major::gemm,
    oneapi::mkl::mklcpu::row_major::gemm,
    oneapi::mkl::mklcpu::row_major::gemm,
    oneapi::mkl::mklcpu::row_major::hemm,
    oneapi::mkl::mklcpu::row_major::hemm,
    oneapi::mkl::mklcpu::row_major::herk,
    oneapi::mkl::mklcpu::row_major::herk,
    oneapi::mkl::mklcpu::row_major::her2k,
    oneapi::mkl::mklcpu::row_major::her2k,
    oneapi::mkl::mklcpu::row_major::symm,
    oneapi::mkl::mklcpu::row_major::symm,
    oneapi::mkl::mklcpu::row_major::symm,
    oneapi::mkl::mklcpu::row_major::symm,
    oneapi::mkl::mklcpu::row_major::syrk,
    oneapi::mkl::mklcpu::row_major::syrk,
    oneapi::mkl::mklcpu::row_major::syrk,
    oneapi::mkl::mklcpu::row_major::syrk,
    oneapi::mkl::mklcpu::row_major::syr2k,
    oneapi::mkl::mklcpu::row_major::syr2k,
    oneapi::mkl::mklcpu::row_major::syr2k,
    oneapi::mkl::mklcpu::row_major::syr2k,
    oneapi::mkl::mklcpu::row_major::trmm,
    oneapi::mkl::mklcpu::row_major::trmm,
    oneapi::mkl::mklcpu::row_major::trmm,
    oneapi::mkl::mklcpu::row_major::trmm,
    oneapi::mkl::mklcpu::row_major::trsm,
    oneapi::mkl::mklcpu::row_major::trsm,
    oneapi::mkl::mklcpu::row_major::trsm,
    oneapi::mkl::mklcpu::row_major::trsm,
    oneapi::mkl::mklcpu::row_major::gemm_batch,
    oneapi::mkl::mklcpu::row_major::gemm_batch,
    oneapi::mkl::mklcpu::row_major::gemm_batch,
    oneapi::mkl::mklcpu::row_major::gemm_batch,
    oneapi::mkl::mklcpu::row_major::trsm_batch,
    oneapi::mkl::mklcpu::row_major::trsm_batch,
    oneapi::mkl::mklcpu::row_major::trsm_batch,
    oneapi::mkl::mklcpu::row_major::trsm_batch,
    oneapi::mkl::mklcpu::row_major::gemmt,
    oneapi::mkl::mklcpu::row_major::gemmt,
    oneapi::mkl::mklcpu::row_major::gemmt,
    oneapi::mkl::mklcpu::row_major::gemmt,
    oneapi::mkl::mklcpu::row_major::gemm_bias,
    oneapi::mkl::mklcpu::row_major::asum,
    oneapi::mkl::mklcpu::row_major::asum,
    oneapi::mkl::mklcpu::row_major::asum,
    oneapi::mkl::mklcpu::row_major::asum,
    oneapi::mkl::mklcpu::row_major::axpy,
    oneapi::mkl::mklcpu::row_major::axpy,
    oneapi::mkl::mklcpu::row_major::axpy,
    oneapi::mkl::mklcpu::row_major::axpy,
    oneapi::mkl::mklcpu::row_major::axpy_batch,
    oneapi::mkl::mklcpu::row_major::axpy_batch,
    oneapi::mkl::mklcpu::row_major::axpy_batch,
    oneapi::mkl::mklcpu::row_major::axpy_batch,
    oneapi::mkl::mklcpu::row_major::copy,
    oneapi::mkl::mklcpu::row_major::copy,
    oneapi::mkl::mklcpu::row_major::copy,
    oneapi::mkl::mklcpu::row_major::copy,
    oneapi::mkl::mklcpu::row_major::dot,
    oneapi::mkl::mklcpu::row_major::dot,
    oneapi::mkl::mklcpu::row_major::dot,
    oneapi::mkl::mklcpu::row_major::dotc,
    oneapi::mkl::mklcpu::row_major::dotc,
    oneapi::mkl::mklcpu::row_major::dotu,
    oneapi::mkl::mklcpu::row_major::dotu,
    oneapi::mkl::mklcpu::row_major::iamin,
    oneapi::mkl::mklcpu::row_major::iamin,
    oneapi::mkl::mklcpu::row_major::iamin,
    oneapi::mkl::mklcpu::row_major::iamin,
    oneapi::mkl::mklcpu::row_major::iamax,
    oneapi::mkl::mklcpu::row_major::iamax,
    oneapi::mkl::mklcpu::row_major::iamax,
    oneapi::mkl::mklcpu::row_major::iamax,
    oneapi::mkl::mklcpu::row_major::nrm2,
    oneapi::mkl::mklcpu::row_major::nrm2,
    oneapi::mkl::mklcpu::row_major::nrm2,
    oneapi::mkl::mklcpu::row_major::nrm2,
    oneapi::mkl::mklcpu::row_major::rot,
    oneapi::mkl::mklcpu::row_major::rot,
    oneapi::mkl::mklcpu::row_major::rot,
    oneapi::mkl::mklcpu::row_major::rot,
    oneapi::mkl::mklcpu::row_major::rotg,
    oneapi::mkl::mklcpu::row_major::rotg,
    oneapi::mkl::mklcpu::row_major::rotg,
    oneapi::mkl::mklcpu::row_major::rotg,
    oneapi::mkl::mklcpu::row_major::rotm,
    oneapi::mkl::mklcpu::row_major::rotm,
    oneapi::mkl::mklcpu::row_major::rotmg,
    oneapi::mkl::mklcpu::row_major::rotmg,
    oneapi::mkl::mklcpu::row_major::scal,
    oneapi::mkl::mklcpu::row_major::scal,
    oneapi::mkl::mklcpu::row_major::scal,
    oneapi::mkl::mklcpu::row_major::scal,
    oneapi::mkl::mklcpu::row_major::scal,
    oneapi::mkl::mklcpu::row_major::scal,
    oneapi::mkl::mklcpu::row_major::sdsdot,
    oneapi::mkl::mklcpu::row_major::swap,
    oneapi::mkl::mklcpu::row_major::swap,
    oneapi::mkl::mklcpu::row_major::swap,
    oneapi::mkl::mklcpu::row_major::swap,
    oneapi::mkl::mklcpu::row_major::gbmv,
    oneapi::mkl::mklcpu::row_major::gbmv,
    oneapi::mkl::mklcpu::row_major::gbmv,
    oneapi::mkl::mklcpu::row_major::gbmv,
    oneapi::mkl::mklcpu::row_major::gemv,
    oneapi::mkl::mklcpu::row_major::gemv,
    oneapi::mkl::mklcpu::row_major::gemv,
    oneapi::mkl::mklcpu::row_major::gemv,
    oneapi::mkl::mklcpu::row_major::ger,
    oneapi::mkl::mklcpu::row_major::ger,
    oneapi::mkl::mklcpu::row_major::gerc,
    oneapi::mkl::mklcpu::row_major::gerc,
    oneapi::mkl::mklcpu::row_major::geru,
    oneapi::mkl::mklcpu::row_major::geru,
    oneapi::mkl::mklcpu::row_major::hbmv,
    oneapi::mkl::mklcpu::row_major::hbmv,
    oneapi::mkl::mklcpu::row_major::hemv,
    oneapi::mkl::mklcpu::row_major::hemv,
    oneapi::mkl::mklcpu::row_major::her,
    oneapi::mkl::mklcpu::row_major::her,
    oneapi::mkl::mklcpu::row_major::her2,
    oneapi::mkl::mklcpu::row_major::her2,
    oneapi::mkl::mklcpu::row_major::hpmv,
    oneapi::mkl::mklcpu::row_major::hpmv,
    oneapi::mkl::mklcpu::row_major::hpr,
    oneapi::mkl::mklcpu::row_major::hpr,
    oneapi::mkl::mklcpu::row_major::hpr2,
    oneapi::mkl::mklcpu::row_major::hpr2,
    oneapi::mkl::mklcpu::row_major::sbmv,
    oneapi::mkl::mklcpu::row_major::sbmv,
    oneapi::mkl::mklcpu::row_major::spmv,
    oneapi::mkl::mklcpu::row_major::spmv,
    oneapi::mkl::mklcpu::row_major::spr,
    oneapi::mkl::mklcpu::row_major::spr,
    oneapi::mkl::mklcpu::row_major::spr2,
    oneapi::mkl::mklcpu::row_major::spr2,
    oneapi::mkl::mklcpu::row_major::symv,
    oneapi::mkl::mklcpu::row_major::symv,
    oneapi::mkl::mklcpu::row_major::syr,
    oneapi::mkl::mklcpu::row_major::syr,
    oneapi::mkl::mklcpu::row_major::syr2,
    oneapi::mkl::mklcpu::row_major::syr2,
    oneapi::mkl::mklcpu::row_major::tbmv,
    oneapi::mkl::mklcpu::row_major::tbmv,
    oneapi::mkl::mklcpu::row_major::tbmv,
    oneapi::mkl::mklcpu::row_major::tbmv,
    oneapi::mkl::mklcpu::row_major::tbsv,
    oneapi::mkl::mklcpu::row_major::tbsv,
    oneapi::mkl::mklcpu::row_major::tbsv,
    oneapi::mkl::mklcpu::row_major::tbsv,
    oneapi::mkl::mklcpu::row_major::tpmv,
    oneapi::mkl::mklcpu::row_major::tpmv,
    oneapi::mkl::mklcpu::row_major::tpmv,
    oneapi::mkl::mklcpu::row_major::tpmv,
    oneapi::mkl::mklcpu::row_major::tpsv,
    oneapi::mkl::mklcpu::row_major::tpsv,
    oneapi::mkl::mklcpu::row_major::tpsv,
    oneapi::mkl::mklcpu::row_major::tpsv,
    oneapi::mkl::mklcpu::row_major::trmv,
    oneapi::mkl::mklcpu::row_major::trmv,
    oneapi::mkl::mklcpu::row_major::trmv,
    oneapi::mkl::mklcpu::row_major::trmv,
    oneapi::mkl::mklcpu::row_major::trsv,
    oneapi::mkl::mklcpu::row_major::trsv,
    oneapi::mkl::mklcpu::row_major::trsv,
    oneapi::mkl::mklcpu::row_major::trsv,
    oneapi::mkl::mklcpu::row_major::gemm,
    oneapi::mkl::mklcpu::row_major::gemm,
    oneapi::mkl::mklcpu::row_major::gemm,
    oneapi::mkl::mklcpu::row_major::gemm,
    oneapi::mkl::mklcpu::row_major::hemm,
    oneapi::mkl::mklcpu::row_major::hemm,
    oneapi::mkl::mklcpu::row_major::herk,
    oneapi::mkl::mklcpu::row_major::herk,
    oneapi::mkl::mklcpu::row_major::her2k,
    oneapi::mkl::mklcpu::row_major::her2k,
    oneapi::mkl::mklcpu::row_major::symm,
    oneapi::mkl::mklcpu::row_major::symm,
    oneapi::mkl::mklcpu::row_major::symm,
    oneapi::mkl::mklcpu::row_major::symm,
    oneapi::mkl::mklcpu::row_major::syrk,
    oneapi::mkl::mklcpu::row_major::syrk,
    oneapi::mkl::mklcpu::row_major::syrk,
    oneapi::mkl::mklcpu::row_major::syrk,
    oneapi::mkl::mklcpu::row_major::syr2k,
    oneapi::mkl::mklcpu::row_major::syr2k,
    oneapi::mkl::mklcpu::row_major::syr2k,
    oneapi::mkl::mklcpu::row_major::syr2k,
    oneapi::mkl::mklcpu::row_major::trmm,
    oneapi::mkl::mklcpu::row_major::trmm,
    oneapi::mkl::mklcpu::row_major::trmm,
    oneapi::mkl::mklcpu::row_major::trmm,
    oneapi::mkl::mklcpu::row_major::trsm,
    oneapi::mkl::mklcpu::row_major::trsm,
    oneapi::mkl::mklcpu::row_major::trsm,
    oneapi::mkl::mklcpu::row_major::trsm,
    oneapi::mkl::mklcpu::row_major::gemm_batch,
    oneapi::mkl::mklcpu::row_major::gemm_batch,
    oneapi::mkl::mklcpu::row_major::gemm_batch,
    oneapi::mkl::mklcpu::row_major::gemm_batch,
    oneapi::mkl::mklcpu::row_major::gemm_batch,
    oneapi::mkl::mklcpu::row_major::gemm_batch,
    oneapi::mkl::mklcpu::row_major::gemm_batch,
    oneapi::mkl::mklcpu::row_major::gemm_batch,
    oneapi::mkl::mklcpu::row_major::gemmt,
    oneapi::mkl::mklcpu::row_major::gemmt,
    oneapi::mkl::mklcpu::row_major::gemmt,
    oneapi::mkl::mklcpu::row_major::gemmt,
};
