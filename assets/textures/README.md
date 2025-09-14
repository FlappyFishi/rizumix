# assets/textures

This folder stores **all image-based assets** used by RIZU:MIX, including:

- **Note sprites** – the visuals for tap, hold, slide, or other note types.
- **Lane/background images** – graphics for lanes, backgrounds, and stage themes.
- **UI elements** – buttons, icons, menus, and HUD components.

## Guidelines

- **Format:** Use `.png`, `.jpg`, or `.jpeg`. Prefer **.png** for transparency.
- **Naming:** Use clear, lowercase, hyphen-separated names (e.g., `note-tap.png`, `menu-button.png`).
- **Resolution:** Optimize for performance. Avoid excessively large textures unless necessary.
- **Git LFS:** All image files are tracked by **Git LFS** (`.gitattributes` already includes patterns).  
  Confirm with:
  ```bash
  git lfs ls-files
