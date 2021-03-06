// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from audio_mixer.djinni

#include "audio_mixer_api.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class PYAAudioMixerApi;

namespace djinni_generated {

class AudioMixerApi
{
public:
    using CppType = std::shared_ptr<::audio_mixer::AudioMixerApi>;
    using CppOptType = std::shared_ptr<::audio_mixer::AudioMixerApi>;
    using ObjcType = PYAAudioMixerApi*;

    using Boxed = AudioMixerApi;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

