// ChartLoader.hpp
// Loads note/tempo data from a JSON chart file into structured events.
//
// Responsibilities:
// - Parse chart JSON into vector<NoteEvent> with validation.
// - (Future) Support metadata (title/artist/bpm/offset) and tempo maps.
// - (Future) Importers for other formats (osu!/mania, custom CSV).
//
// JSON shape (basic):
// [
//   {"time_ms": 1000, "lane": 0, "type": "tap"},
//   {"time_ms": 1250, "lane": 1, "type": "hold_start", "duration_ms": 500}
// ]
//
// Error handling:
// - Throw or assert on missing/invalid fields; log helpful messages.
//
// SPDX-License-Identifier: MIT
