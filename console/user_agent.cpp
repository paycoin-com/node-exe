// Copyright (c) 2016-2020 Knuth Project developers.
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <kth/network/user_agent.hpp>
#include "version.hpp"

namespace kth {
namespace network {

std::string get_user_agent() {
    return "/kth:" KTH_NODE_EXE_VERSION "/";
}

} // namespace network
} // namespace kth