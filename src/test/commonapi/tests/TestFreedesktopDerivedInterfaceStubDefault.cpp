/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.5.qualifier.
* Used org.franca.core 0.8.10.201309262002.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <commonapi/tests/TestFreedesktopDerivedInterfaceStubDefault.h>

namespace commonapi {
namespace tests {

TestFreedesktopDerivedInterfaceStubDefault::TestFreedesktopDerivedInterfaceStubDefault():
        remoteEventHandler_(this),
        interfaceVersion_(TestFreedesktopDerivedInterface::getInterfaceVersion()) {
}

const CommonAPI::Version& TestFreedesktopDerivedInterfaceStubDefault::getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId) {
    return interfaceVersion_;
}

TestFreedesktopDerivedInterfaceStubRemoteEvent* TestFreedesktopDerivedInterfaceStubDefault::initStubAdapter(const std::shared_ptr<TestFreedesktopDerivedInterfaceStubAdapter>& stubAdapter) {
    TestFreedesktopInterfaceStubDefault::initStubAdapter(stubAdapter);
    CommonAPI::Stub<TestFreedesktopDerivedInterfaceStubAdapter, TestFreedesktopDerivedInterfaceStubRemoteEvent>::stubAdapter_ = stubAdapter;
    return &remoteEventHandler_;
}

const uint32_t& TestFreedesktopDerivedInterfaceStubDefault::getTestAttributedFromDerivedInterfaceAttribute() {
    return testAttributedFromDerivedInterfaceAttributeValue_;
}

const uint32_t& TestFreedesktopDerivedInterfaceStubDefault::getTestAttributedFromDerivedInterfaceAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getTestAttributedFromDerivedInterfaceAttribute();
}

void TestFreedesktopDerivedInterfaceStubDefault::setTestAttributedFromDerivedInterfaceAttribute(uint32_t value) {
    const bool valueChanged = trySetTestAttributedFromDerivedInterfaceAttribute(std::move(value));
    if (valueChanged) {
        CommonAPI::Stub<TestFreedesktopDerivedInterfaceStubAdapter, TestFreedesktopDerivedInterfaceStubRemoteEvent>::stubAdapter_->fireTestAttributedFromDerivedInterfaceAttributeChanged(testAttributedFromDerivedInterfaceAttributeValue_);
    }
}

bool TestFreedesktopDerivedInterfaceStubDefault::trySetTestAttributedFromDerivedInterfaceAttribute(uint32_t value) {
    if (!validateTestAttributedFromDerivedInterfaceAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (testAttributedFromDerivedInterfaceAttributeValue_ != value);
    testAttributedFromDerivedInterfaceAttributeValue_ = std::move(value);
    return valueChanged;
}

bool TestFreedesktopDerivedInterfaceStubDefault::validateTestAttributedFromDerivedInterfaceAttributeRequestedValue(const uint32_t& value) {
    return true;
}

void TestFreedesktopDerivedInterfaceStubDefault::setTestAttributedFromDerivedInterfaceAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, uint32_t value) {
    setTestAttributedFromDerivedInterfaceAttribute(value);
}

void TestFreedesktopDerivedInterfaceStubDefault::onRemoteTestAttributedFromDerivedInterfaceAttributeChanged() {
    // No operation in default
}

void TestFreedesktopDerivedInterfaceStubDefault::RemoteEventHandler::onRemoteTestAttributedFromDerivedInterfaceAttributeChanged() {
    defaultStub_->onRemoteTestAttributedFromDerivedInterfaceAttributeChanged();
}

bool TestFreedesktopDerivedInterfaceStubDefault::RemoteEventHandler::onRemoteSetTestAttributedFromDerivedInterfaceAttribute(uint32_t value) {
    return defaultStub_->trySetTestAttributedFromDerivedInterfaceAttribute(std::move(value));
}

bool TestFreedesktopDerivedInterfaceStubDefault::RemoteEventHandler::onRemoteSetTestAttributedFromDerivedInterfaceAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, uint32_t value) {
    return onRemoteSetTestAttributedFromDerivedInterfaceAttribute(value);
}





TestFreedesktopDerivedInterfaceStubDefault::RemoteEventHandler::RemoteEventHandler(TestFreedesktopDerivedInterfaceStubDefault* defaultStub):
        TestFreedesktopInterfaceStubDefault::RemoteEventHandler(defaultStub),
        defaultStub_(defaultStub) {
}

} // namespace tests
} // namespace commonapi
