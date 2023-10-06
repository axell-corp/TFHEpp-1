#include "trlwe.hpp"

namespace TFHEpp {
#define INST(P) \
    template TRLWE<P> trlweSymEncryptZero<P>(const Key<P> &key)
TFHEPP_EXPLICIT_INSTANTIATION_TRLWE(INST)
#undef INST

#define INST(P)                                                   \
    template TRLWE<P> trlweSymEncrypt<P>(                         \
        const std::array<typename P::T, P::n> &p, \
        const Key<P> &key)
TFHEPP_EXPLICIT_INSTANTIATION_TRLWE(INST)
#undef INST

#define INST(P)                                                   \
    template TRLWE<P> trlweSymIntEncrypt<P>(                      \
        const std::array<typename P::T, P::n> &p,\
        const Key<P> &key)
TFHEPP_EXPLICIT_INSTANTIATION_TRLWE(INST)
#undef INST

#define INST(P)                                                           \
    template std::array<bool, P::n> trlweSymDecrypt<P>(const TRLWE<P> &c, \
                                                       const Key<P> &key)
TFHEPP_EXPLICIT_INSTANTIATION_TRLWE(INST)
#undef INST

#define INST(P)                                                     \
    template Polynomial<P> trlweSymIntDecrypt<P>(const TRLWE<P> &c, \
                                                 const Key<P> &key)
TFHEPP_EXPLICIT_INSTANTIATION_TRLWE(INST)
#undef INST

#define INST(P)                                                                \
    template void SampleExtractIndex<P>(TLWE<P> & tlwe, const TRLWE<P> &trlwe, \
                                        const int index)
TFHEPP_EXPLICIT_INSTANTIATION_TRLWE(INST)
#undef INST

#define INST(P)                             \
    template void InvSampleExtractIndex<P>( \
        TRLWE<P> & trlwe, const TLWE<P> &tlwe, const int index)
TFHEPP_EXPLICIT_INSTANTIATION_TRLWE(INST)
#undef INST
}  // namespace TFHEpp
