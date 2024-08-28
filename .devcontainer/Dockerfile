FROM ubuntu:noble

# Install C/C++ dev tools and basic tools (git, cmake, ripgrep, etc.)
RUN apt-get update -y && \
    apt-get install -y --no-install-recommends \
        build-essential llvm-18 clang-18 libclang-18-dev llvm-18-dev \
        libstdc++-static ncurses-compat-libs \
        python3-pip python3-dev  \
        cmake git gnupg2 ripgrep  && \
    apt-get clean

# Install python packages
RUN python3 -m pip install --break-system-packages uv
ADD pyproject.toml .
ADD uv.lock .
RUN uv venv && uv sync --all-extras --no-install-project