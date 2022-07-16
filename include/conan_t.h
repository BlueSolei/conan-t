#pragma once

#ifdef _WIN32
  #define conan_t_EXPORT __declspec(dllexport)
#else
  #define conan_t_EXPORT
#endif

conan_t_EXPORT void conan_t();
