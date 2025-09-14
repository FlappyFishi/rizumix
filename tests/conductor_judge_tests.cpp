// conductor_judge_tests.cpp
// Unit tests for Conductor (ms<->beats roundtrip) and Judge (timing windows).
//
// Goals:
// - Ensure timing math remains stable as features evolve.
// - Guard timing window boundaries (edge cases just inside/outside).
//
// Running:
//   ctest --test-dir build --output-on-failure --build-config Release
//
// SPDX-License-Identifier: MIT
