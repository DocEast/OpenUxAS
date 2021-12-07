// ===============================================================================
// Authors: AFRL/RQQA
// Organization: Air Force Research Laboratory, Aerospace Systems Directorate, Power and Control Division
// 
// Copyright (c) 2017 Government of the United State of America, as represented by
// the Secretary of the Air Force.  No copyright is claimed in the United States under
// Title 17, U.S. Code.  All Other Rights Reserved.
// ===============================================================================

#ifndef UXAS_I_CLIENT_LIST_H
#define UXAS_I_CLIENT_LIST_H

#include <set>

namespace uxas {
namespace communications {
namespace transport {

template<typename T, typename Container = std::set<T>>
class IClientList {
public:
    virtual ~IClientList() = default;

    // Get client list
    virtual const Container& getClients() const = 0;

    // Add to client list
    virtual bool addClient(T) = 0;

    // Remove a client from list
    virtual bool removeClient(T) = 0;
};

}
}
}

#endif