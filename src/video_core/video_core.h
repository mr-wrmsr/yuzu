// Copyright 2014 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <atomic>
#include <memory>

class EmuWindow;
class RendererBase;

////////////////////////////////////////////////////////////////////////////////////////////////////
// Video Core namespace

namespace VideoCore {

enum class Renderer { Software, OpenGL };

extern std::unique_ptr<RendererBase> g_renderer; ///< Renderer plugin

// TODO: Wrap these in a user settings struct along with any other graphics settings (often set from
// qt ui)
extern std::atomic<bool> g_toggle_framelimit_enabled;

/// Start the video core
void Start();

/// Initialize the video core
bool Init(EmuWindow& emu_window);

/// Shutdown the video core
void Shutdown();

} // namespace VideoCore
