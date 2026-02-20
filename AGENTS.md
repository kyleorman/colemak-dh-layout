# AGENTS.md

Repository guidance for AI coding agents working in this Colemak-DH keyboard layout repo.

## Project Overview

- This repo hosts a custom Colemak-DH layout optimized for SystemVerilog/HDL work.
- Primary hardware target: ZSA Moonlander keyboard.
- Planned scope: Moonlander QMK firmware, AutoHotKey configs, and software-level key remapping.
- The layout uses home-row mods (LSFT/LCTL/LALT/LGUI on ARST, mirrored on NEIO) and 8 layers.

## Repository Map

- `README.md`: project intent and scope.
- `zsa_moonlander_colemak-dh-moonlander_mEvzm_m5lErX/`: firmware artifact exported from Oryx.
  - `zsa_moonlander_colemak-dh-moonlander_mEvzm_m5lErX_source/`: QMK source files to build or modify.
    - `keymap.c`: layer definitions, home-row mod tapping terms, LED colour maps.
    - `config.h`: tapping term per-key, RGB startup speed, USB wakeup delay.
    - `rules.mk`: feature flags (CAPS_WORD, ORYX, RGB_MATRIX_CUSTOM_KB, etc.).
  - `*.bin`: compiled firmware binary.
  - `*.md5`: checksum for the binary.
  - `build.log`: last build output.

## Layer Summary (Layer 0 = Base)

| Layer | Purpose |
|-------|---------|
| 0 | Colemak-DH base (home-row mods) |
| 1 | QWERTY gaming overlay (TG(1) toggle) |
| 2 | Symbol layer (brackets, parens, operators) |
| 3 | Navigation (arrows, home/end, page up/down) |
| 4 | Function keys + media/brightness controls |
| 5 | Numpad + extended function keys |
| 6 | RGB / system (boot, power, sleep) |
| 7 | Mouse keys |

## Agent Roles

Preferred flow for non-trivial work:

1. `planner` → writes `.Claude/work/<slug>/plan.md`
2. `plan-reviewer` → writes `.Claude/work/<slug>/plan_review.md`; resolve blockers before coding
3. `build` (implementer) → executes plan and appends `.Claude/work/<slug>/implementation_log.md`
4. `code-reviewer` → writes `.Claude/work/<slug>/code_review.md`
5. `build` fix loop → addresses Blocker/Major findings and appends `.Claude/work/<slug>/fix_log.md`
6. `code-reviewer` release gate → writes `.Claude/work/<slug>/release_check.md`; require PASS before commit/push

Pipeline artifacts for each task live in `.Claude/work/<slug>/`:

- `plan.md`
- `plan_review.md`
- `implementation_log.md`
- `code_review.md`
- `fix_log.md` (if fixes are needed)
- `release_check.md`

## Core Working Rules

- Keep changes focused and minimal; avoid broad refactors unless requested.
- When modifying `keymap.c`, preserve the existing layer structure unless the task explicitly calls for layer reorganization.
- Home-row mod tapping terms in `get_tapping_term()` are intentionally tuned — do not change them without explicit instruction.
- Do not commit binary files (`*.bin`, `*.md5`) unless a full rebuild has been performed and verified.
- Do not commit secrets or machine-local credentials.
- Preserve unrelated local changes.

## Build and Validation Commands

These assume a working QMK environment (see `zsa_moonlander_.../README.md` for setup).

```sh
# Syntax-check keymap.c with gcc (quick, no toolchain needed)
gcc -fsyntax-only -x c zsa_moonlander_colemak-dh-moonlander_mEvzm_m5lErX/zsa_moonlander_colemak-dh-moonlander_mEvzm_m5lErX_source/keymap.c 2>&1 || true

# Compile against ZSA QMK fork (run from qmk_firmware root)
qmk compile -kb zsa/moonlander -km colemak-dh

# Flash (puts board into bootloader first)
qmk flash -kb zsa/moonlander -km colemak-dh

# Verify binary checksum after build
md5sum zsa_moonlander_colemak-dh-moonlander_mEvzm_m5lErX/zsa_moonlander_colemak-dh-moonlander_mEvzm_m5lErX.bin
```

If the QMK toolchain is not available locally, limit validation to static checks (syntax, layer key-count consistency).

## Definition of Done

- Requested behaviour is implemented with focused diffs.
- At minimum, `keymap.c` compiles without errors (syntax check or full QMK build).
- No secrets or sensitive material are introduced.
- Documentation is updated when layers, features, or workflow change.
- Final report includes what changed, validation run, and any follow-up actions.

## Severity Rules

- `Blocker`: potential firmware crash, key-count mismatch (breaks compile), or data loss.
- `Major`: wrong layer wiring, broken home-row mod behaviour, or requirement miss.
- `Minor`: style, clarity, LED colour tweaks, or non-critical maintainability issues.

Fix order is always `Blocker` → `Major` → `Minor`.

## Commit and Push Policy

- Stage only files relevant to the task.
- Do not commit secrets or machine-local credentials.
- Do not amend prior commits unless explicitly requested.
- Do not commit or push until `release_check.md` exists and says `PASS`.

## Log Entry Templates

### implementation_log.md entry

```markdown
## Step <n>
- Changed: <what changed>
- Commands:
  - `<command>` → <result>
```

### fix_log.md entry

```markdown
## Fix <n>
- Review item: <Blocker/Major/Minor + description>
- Changed: <what changed>
- Commands:
  - `<command>` → <result>
```

### release_check.md

```markdown
# Release Check

- Syntax/compile check: PASS/FAIL
- Layer key-count consistency: PASS/FAIL/NOT RUN
- Full QMK build: PASS/FAIL/NOT RUN

Decision: PASS/FAIL
```
