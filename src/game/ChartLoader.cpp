// ChartLoader.cpp
// Implementation for loading charts from JSON using nlohmann::json.
//
// Implementation notes:
// - Validate fields (time_ms >= 0, lane in range, type known).
// - Gracefully handle optional fields (e.g., duration_ms for holds).
// - Consider locale issues only if parsing text-based numbers (JSON uses numeric types).
//
// Future:
// - Load metadata (SongInfo), BPM/offset maps, difficulty lists.
// - Add file/IO error handling with clear messages.
//
// SPDX-License-Identifier: MIT
