// Conductor.hpp
// Maps real time (milliseconds) to musical beats and back, using BPM and an optional offset.
//
// Responsibilities:
// - Convert ms → beats and beats → ms with stable math.
// - Maintain BPM and global offset (latency, chart alignment).
// - (Future) Support BPM changes via a timeline for tempo maps.
//
// Usage:
//   Conductor c(120.0 /* bpm */, 80.0 /* offset ms */);
//   double beat = c.msToBeats(1234.0);
//   double time = c.beatsToMs(32.0);
//
// Design notes:
// Keep functions pure and deterministic to simplify unit testing.
//
// SPDX-License-Identifier: MIT
