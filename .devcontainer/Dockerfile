FROM ubuntu:noble

# Install C/C++ dev tools and basic tools (git, cmake, ripgrep, etc.)
RUN apt-get update -y && \
    apt-get install -y --no-install-recommends \
        build-essential cmake git gnupg2 \
        python3-pip python3-dev  \
        ripgrep  && \
    apt-get clean

# Install python packages
RUN python3 -m pip install --break-system-packages uv
ADD pyproject.toml .
ADD uv.lock .
RUN uv sync --all-extras --no-install-project