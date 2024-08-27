#pragma once

ULL RNG_64() {
    static uint64_t x_
        = uint64_t(chrono::duration_cast<chrono::nanoseconds>(
                       chrono::high_resolution_clock::now().time_since_epoch())
                       .count())
          * 10150724397891781847ULL;
    x_ ^= x_ << 7;
    return x_ ^= x_ >> 9;
}

ULL RNG(ULL lim) { return RNG_64() % lim; }

LL RNG(LL l, LL r) { return l + RNG_64() % (r - l); }