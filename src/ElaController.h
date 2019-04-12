
#ifndef _ELA_CONTROLLER_H_
#define _ELA_CONTROLLER_H_

#include "Transaction/Transaction.h"

class ElaController
{

public:
    static std::string genRawTransaction(const std::string& json, const std::string& assertId);

    static CMBlock GenerateRedeemScript(std::vector<std::string> publicKeys, int requiredSignCount);

    static std::string SerializeTransaction(const std::string& json, const std::string& assertId);

    static std::string MultiSignTransaction(const std::string& privateKey,
            int requiredSignCount, std::vector<std::string> publicKeys, const std::string& json, const std::string& assertId);

    static std::vector<std::string> GetSignedSigners(const std::string& json, const std::string& assertId);

private:
    static Transaction* GenTransactionFromJson(const std::string& json, const std::string& assertId);

    static std::vector<std::string> GetCoSigners(char** publicKeys, int length);
};

#endif //_ELA_CONTROLLER_H_
