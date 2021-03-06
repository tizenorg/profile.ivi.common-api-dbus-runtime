/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.5.qualifier.
* Used org.franca.core 0.8.10.201309262002.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_TESTS_MANAGED_Second_Root_PROXY_BASE_H_
#define COMMONAPI_TESTS_MANAGED_Second_Root_PROXY_BASE_H_

#include "SecondRoot.h"


#include <commonapi/tests/managed/LeafInterfaceStub.h>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif


#include <CommonAPI/ProxyManager.h>
#include <CommonAPI/Proxy.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace commonapi {
namespace tests {
namespace managed {

class SecondRootProxyBase: virtual public CommonAPI::Proxy {
 public:




    virtual CommonAPI::ProxyManager& getProxyManagerLeafInterface() = 0;
};

} // namespace managed
} // namespace tests
} // namespace commonapi

#endif // COMMONAPI_TESTS_MANAGED_Second_Root_PROXY_BASE_H_
