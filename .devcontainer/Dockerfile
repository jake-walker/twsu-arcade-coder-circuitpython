FROM mcr.microsoft.com/devcontainers/base:bullseye

ARG DEBIAN_FRONTEND=noninteractive

RUN apt-get update \
  && apt-get install -y \
  apt-utils \
  bison \
  build-essential \
  bzip2 \
  ca-certificates \
  ccache \
  cmake \
  check \
  curl \
  flex \
  git \
  git-lfs \
  gperf \
  lcov \
  libbsd-dev \
  libffi-dev \
  libglib2.0-0 \
  libncurses-dev \
  libpixman-1-0 \
  libsdl2-2.0-0 \
  libslirp0 \
  libusb-1.0-0-dev \
  make \
  ninja-build \
  python3 \
  python3-venv \
  python-is-python3 \
  ruby \
  unzip \
  wget \
  xz-utils \
  zip \
  && apt-get autoremove -y \
  && rm -rf /var/lib/apt/lists/* \
  && update-alternatives --install /usr/bin/python python /usr/bin/python3 10
