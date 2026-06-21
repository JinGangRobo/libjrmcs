#pragma once

#include <librmcs/data/datas.hpp>

namespace librmcs::spec {

struct UartDescriptor {
    constexpr explicit UartDescriptor(data::DataId data_id) noexcept
        : data_id(data_id) {}

    data::DataId data_id;
};

} // namespace librmcs::spec
