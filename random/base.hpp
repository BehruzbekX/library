#pragma once

unsigned long long rng_64() {
    static uint64_t x_
        = uint64_t(chrono::duration_cast<chrono::nanoseconds>(
                       chrono::high_resolution_clock::now().time_since_epoch())
                       .count())
          * 10150724397891781847ULL;
    x_ ^= x_ << 7;
    return x_ ^= x_ >> 9;
}

unsigned long long rng_64(unsigned long long lim) { return rng_64() % lim; }

ll rng(ll l, ll r) { return l + rng_64() % (r - l + 1); }