
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. It
// is auto-generated by the 'scripts/database/database.py' Python script.
//
// This file populates the database with best-found tuning parameters for the 'Xgemm_Direct64' kernels.
//
// =================================================================================================

namespace clblast {
namespace database {

const DatabaseEntry XgemmDirectDouble = {
  "XgemmDirect", Precision::kDouble, {"KWID", "MDIMAD", "MDIMCD", "NDIMBD", "NDIMCD", "PADA", "PADB", "VWMD", "VWND", "WGD"}, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "Ellesmere", {
          { Name{"AMD Radeon RX 480                                 "}, Params{ 8, 16, 16, 8, 16, 1, 1, 2, 1, 32, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 8, 16, 16, 8, 16, 1, 1, 2, 1, 32, 0, 0, 0, 0 } },
        } },
        { "Fiji", {
          { Name{"AMD Radeon R9 Fury X                              "}, Params{ 16, 8, 8, 8, 16, 1, 1, 1, 1, 16, 0, 0, 0, 0 } },
          { Name{"AMD Radeon R9 M370X Compute Engine                "}, Params{ 2, 16, 16, 8, 8, 1, 1, 1, 1, 16, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 16, 16, 8, 8, 1, 1, 1, 1, 16, 0, 0, 0, 0 } },
        } },
        { "Tonga", {
          { Name{"AMD Radeon R9 380                                 "}, Params{ 2, 16, 16, 16, 16, 1, 1, 1, 1, 32, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 16, 16, 16, 16, 1, 1, 1, 1, 32, 0, 0, 0, 0 } },
        } },
        { "default", {
          { Name{"AMD Radeon Pro 580 Compute Engine                 "}, Params{ 2, 16, 16, 16, 16, 1, 1, 2, 2, 32, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 16, 16, 16, 16, 1, 1, 1, 1, 32, 0, 0, 0, 0 } },
        } },
      }
    },
    { // ARM GPUs
      kDeviceTypeGPU, "ARM", {
        { "default", {
          { Name{"Mali-T760                                         "}, Params{ 2, 16, 16, 8, 8, 1, 1, 1, 2, 16, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 16, 16, 8, 8, 1, 1, 1, 2, 16, 0, 0, 0, 0 } },
        } },
      }
    },
    { // Intel CPUs
      kDeviceTypeCPU, "Intel", {
        { "default", {
          { Name{"Intel(R) Core(TM) i7-2670QM CPU @ 2.20GHz         "}, Params{ 2, 8, 8, 8, 8, 1, 1, 4, 4, 32, 0, 0, 0, 0 } },
          { Name{"Intel(R) Core(TM) i5-4570 CPU @ 3.20GHz           "}, Params{ 2, 8, 8, 8, 8, 1, 1, 4, 4, 32, 0, 0, 0, 0 } },
          { Name{"Intel(R) Core(TM) i5-6200U CPU @ 2.30GHz          "}, Params{ 2, 8, 8, 8, 8, 1, 1, 1, 1, 8, 0, 0, 0, 0 } },
          { Name{"Intel(R) Core(TM) i7 CPU         920  @ 2.67GHz   "}, Params{ 8, 8, 8, 8, 8, 0, 0, 1, 4, 32, 0, 0, 0, 0 } },
          { Name{"Intel(R) Core(TM) i7-4790K CPU @ 4.00GHz          "}, Params{ 2, 8, 8, 8, 8, 1, 1, 4, 4, 32, 0, 0, 0, 0 } },
          { Name{"Intel(R) Core(TM) i7-6770HQ CPU @ 2.60GHz         "}, Params{ 8, 8, 8, 8, 8, 0, 1, 1, 1, 8, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 8, 8, 8, 8, 1, 1, 4, 2, 32, 0, 0, 0, 0 } },
        } },
      }
    },
    { // Intel GPUs
      kDeviceTypeGPU, "Intel", {
        { "default", {
          { Name{"Intel(R) HD Graphics 620                          "}, Params{ 2, 16, 16, 8, 8, 1, 1, 2, 4, 32, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 16, 16, 8, 8, 1, 1, 2, 4, 32, 0, 0, 0, 0 } },
        } },
      }
    },
    { // NVIDIA GPUs
      kDeviceTypeGPU, "NVIDIA", {
        { "SM2.0", {
          { Name{"GeForce GTX 580                                   "}, Params{ 8, 16, 16, 16, 8, 1, 0, 2, 2, 32, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 8, 16, 16, 16, 8, 1, 0, 2, 2, 32, 0, 0, 0, 0 } },
        } },
        { "SM3.0", {
          { Name{"GeForce GTX 760 Ti OEM                            "}, Params{ 2, 8, 8, 16, 16, 1, 1, 2, 1, 16, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 8, 8, 16, 16, 1, 1, 2, 1, 16, 0, 0, 0, 0 } },
        } },
        { "SM3.5", {
          { Name{"GeForce GTX TITAN Black                           "}, Params{ 8, 16, 16, 16, 8, 1, 0, 1, 1, 16, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 8, 16, 16, 16, 8, 1, 0, 1, 1, 16, 0, 0, 0, 0 } },
        } },
        { "SM5.0", {
          { Name{"GeForce 920MX                                     "}, Params{ 2, 8, 8, 8, 8, 1, 1, 4, 4, 32, 0, 0, 0, 0 } },
          { Name{"GeForce GTX 750 Ti                                "}, Params{ 2, 8, 8, 8, 8, 1, 1, 2, 4, 32, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 8, 8, 8, 8, 1, 1, 2, 1, 32, 0, 0, 0, 0 } },
        } },
        { "SM6.1", {
          { Name{"GeForce GTX 1080                                  "}, Params{ 2, 16, 16, 8, 8, 1, 1, 1, 2, 16, 0, 0, 0, 0 } },
          { Name{"GeForce GTX 1080 Ti                               "}, Params{ 2, 16, 8, 8, 8, 1, 1, 1, 1, 16, 0, 0, 0, 0 } },
          { Name{"TITAN X (Pascal)                                  "}, Params{ 2, 8, 8, 8, 8, 1, 1, 1, 1, 16, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 8, 8, 8, 8, 1, 1, 1, 2, 16, 0, 0, 0, 0 } },
        } },
        { "default", {
          { kDeviceNameDefault                                        , Params{ 2, 8, 8, 8, 8, 1, 1, 1, 2, 16, 0, 0, 0, 0 } },
        } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default", {
          { kDeviceNameDefault                                        , Params{ 2, 8, 8, 8, 8, 1, 1, 2, 2, 16, 0, 0, 0, 0 } },
        } },
      }
    },
  }
};

} // namespace database
} // namespace clblast
