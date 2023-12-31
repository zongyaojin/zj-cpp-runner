# -------------------------------------------------------- #
# Options affecting cmake-format formatting
# https://cmake-format.readthedocs.io/en/latest/configuration.html
# -------------------------------------------------------- #
with section("format"):
    # How wide to allow formatted cmake files
    line_width = 120

    # How many spaces to tab for indent
    tab_size = 4

    # If a candidate layout is wrapped horizontally but it exceeds this many lines, then reject the layout
    max_lines_hwrap = 4

    # If an argument group contains more than this many sub-groups (parg or kwarg groups) then force it to a vertical layout
    max_subgroups_hwrap = 4

    # If a positional argument group contains more than this many arguments, then force it to a vertical layout
    max_pargs_hwrap = 4

    # If true, separate flow control names from their parentheses with a space
    separate_ctrl_name_with_space = False

    # If true, separate function names from parentheses with a space
    separate_fn_name_with_space = False

    # If a statement is wrapped to more than one line, than dangle the closing parenthesis on its own line.
    dangle_parens = True

# ----------------------------
# Options affecting the linter
# https://github.com/cheshirekow/cmake_format/issues/197
# Code C0103 is for variable names linting
# ----------------------------
with section("lint"):
    # A list of lint codes to disable
    disabled_codes = ["C0103"]
