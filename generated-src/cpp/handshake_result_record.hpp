// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from restclient.djinni

#pragma once

#include <string>
#include <utility>

namespace restclient {

struct HandshakeResultRecord final {
    std::string responseStatus;

    HandshakeResultRecord(std::string responseStatus_)
    : responseStatus(std::move(responseStatus_))
    {}
};

}  // namespace restclient
