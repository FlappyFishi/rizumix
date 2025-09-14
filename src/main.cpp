// main.cpp
// RIZU:MIX — program entry point.
// Initializes window and audio (raylib), sets up the game loop,
// and will orchestrate scene flow (menu → gameplay → results).
//
// Responsibilities:
// - Configure window (size, vsync), init/close subsystems (audio).
// - Load song/charts (future), create core game objects.
// - Drive per-frame update/draw calls; handle global input (e.g., quit).
//
// Notes:
// Keep gameplay logic out of main; delegate to Game/Scene objects.
//
// SPDX-License-Identifier: MIT
