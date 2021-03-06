// Copyright (c) 2012-2018 The Elastos Open Source Project
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef __BTCBASE58_H__
#define __BTCBASE58_H__

#include <string>

#include <CMemBlock.h>

class BTCBase58 {
public:
    static std::string EncodeBase58(unsigned char *pData, size_t pDataLen);
    static CMemBlock<unsigned char> DecodeBase58(const std::string &str);
};


#endif //__BTCBASE58_H__
