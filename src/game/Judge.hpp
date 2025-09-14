// Judge.hpp
// Timing judgement for note hits: classifies input as Perfect/Great/Good/Miss
// based on configurable timing windows (in milliseconds).
//
// Responsibilities:
// - Provide judgeHit(hitTimeMs, noteTimeMs) → {label, scoreDelta}.
// - Expose tunable windows for difficulty (e.g., tighter on hard).
// - (Future) Return signed delta for accuracy graphs / hit error bar.
//
// Usage:
//   Judge j(22, 45, 90);
//   auto res = j.judgeHit(actualMs, scheduledMs); // res.label, res.scoreDelta
//
// Tuning tips:
// - Perfect ≈ ±20–25ms; Great ≈ ±45ms; Good ≈ ±90ms are common starting points.
// - Calibrate with playtesting and audio latency measurements.
//
// SPDX-License-Identifier: MIT
