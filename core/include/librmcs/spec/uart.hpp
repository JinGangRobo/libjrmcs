#pragma once

#include <librmcs/data/datas.hpp>

namespace librmcs::spec {

struct UartDescriptor {
    constexpr UartDescriptor(data::DataId data_id, data::DataId config_data_id) noexcept
        : data_id(data_id)
        , config_data_id(config_data_id) {}

    data::DataId data_id;
    data::DataId config_data_id;
};

} // namespace librmcs::spec
