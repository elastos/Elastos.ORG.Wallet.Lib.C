
#ifndef __CROSS_CHAIN_ASSET_H__
#define __CROSS_CHAIN_ASSET_H__

#include "../ByteStream.h"
#include "nlohmann/json.hpp"

class CrossChainAsset
{
public:
    CrossChainAsset(uint64_t index)
        : mAmount(0)
        , mIndex(index)
    {}

    CrossChainAsset(const std::string& address, uint64_t amount, uint64_t index)
        : mAddress(address)
        , mAmount(0)
        , mIndex(index)
    {}

    void Serialize(ByteStream& ostream);

    void Deserialize(ByteStream& ostream);

    void FromJson(const nlohmann::json &jsonData);

    nlohmann::json ToJson();

private:
    std::string mAddress;
    uint64_t mAmount;
    uint64_t mIndex;
};

#endif //__CROSS_CHAIN_ASSET_H__
