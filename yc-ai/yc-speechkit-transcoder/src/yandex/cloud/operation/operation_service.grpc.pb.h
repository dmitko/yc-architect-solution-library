// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: yandex/cloud/operation/operation_service.proto
#ifndef GRPC_yandex_2fcloud_2foperation_2foperation_5fservice_2eproto__INCLUDED
#define GRPC_yandex_2fcloud_2foperation_2foperation_5fservice_2eproto__INCLUDED

#include "yandex/cloud/operation/operation_service.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace yandex {
namespace cloud {
namespace operation {

// A set of methods for managing operations for asynchronous API requests.
class OperationService final {
 public:
  static constexpr char const* service_full_name() {
    return "yandex.cloud.operation.OperationService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Returns the specified Operation resource.
    virtual ::grpc::Status Get(::grpc::ClientContext* context, const ::yandex::cloud::operation::GetOperationRequest& request, ::yandex::cloud::operation::Operation* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::yandex::cloud::operation::Operation>> AsyncGet(::grpc::ClientContext* context, const ::yandex::cloud::operation::GetOperationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::yandex::cloud::operation::Operation>>(AsyncGetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::yandex::cloud::operation::Operation>> PrepareAsyncGet(::grpc::ClientContext* context, const ::yandex::cloud::operation::GetOperationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::yandex::cloud::operation::Operation>>(PrepareAsyncGetRaw(context, request, cq));
    }
    // Cancels the specified operation.
    virtual ::grpc::Status Cancel(::grpc::ClientContext* context, const ::yandex::cloud::operation::CancelOperationRequest& request, ::yandex::cloud::operation::Operation* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::yandex::cloud::operation::Operation>> AsyncCancel(::grpc::ClientContext* context, const ::yandex::cloud::operation::CancelOperationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::yandex::cloud::operation::Operation>>(AsyncCancelRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::yandex::cloud::operation::Operation>> PrepareAsyncCancel(::grpc::ClientContext* context, const ::yandex::cloud::operation::CancelOperationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::yandex::cloud::operation::Operation>>(PrepareAsyncCancelRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // Returns the specified Operation resource.
      virtual void Get(::grpc::ClientContext* context, const ::yandex::cloud::operation::GetOperationRequest* request, ::yandex::cloud::operation::Operation* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Get(::grpc::ClientContext* context, const ::yandex::cloud::operation::GetOperationRequest* request, ::yandex::cloud::operation::Operation* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      // Cancels the specified operation.
      virtual void Cancel(::grpc::ClientContext* context, const ::yandex::cloud::operation::CancelOperationRequest* request, ::yandex::cloud::operation::Operation* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Cancel(::grpc::ClientContext* context, const ::yandex::cloud::operation::CancelOperationRequest* request, ::yandex::cloud::operation::Operation* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::yandex::cloud::operation::Operation>* AsyncGetRaw(::grpc::ClientContext* context, const ::yandex::cloud::operation::GetOperationRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::yandex::cloud::operation::Operation>* PrepareAsyncGetRaw(::grpc::ClientContext* context, const ::yandex::cloud::operation::GetOperationRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::yandex::cloud::operation::Operation>* AsyncCancelRaw(::grpc::ClientContext* context, const ::yandex::cloud::operation::CancelOperationRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::yandex::cloud::operation::Operation>* PrepareAsyncCancelRaw(::grpc::ClientContext* context, const ::yandex::cloud::operation::CancelOperationRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status Get(::grpc::ClientContext* context, const ::yandex::cloud::operation::GetOperationRequest& request, ::yandex::cloud::operation::Operation* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::yandex::cloud::operation::Operation>> AsyncGet(::grpc::ClientContext* context, const ::yandex::cloud::operation::GetOperationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::yandex::cloud::operation::Operation>>(AsyncGetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::yandex::cloud::operation::Operation>> PrepareAsyncGet(::grpc::ClientContext* context, const ::yandex::cloud::operation::GetOperationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::yandex::cloud::operation::Operation>>(PrepareAsyncGetRaw(context, request, cq));
    }
    ::grpc::Status Cancel(::grpc::ClientContext* context, const ::yandex::cloud::operation::CancelOperationRequest& request, ::yandex::cloud::operation::Operation* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::yandex::cloud::operation::Operation>> AsyncCancel(::grpc::ClientContext* context, const ::yandex::cloud::operation::CancelOperationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::yandex::cloud::operation::Operation>>(AsyncCancelRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::yandex::cloud::operation::Operation>> PrepareAsyncCancel(::grpc::ClientContext* context, const ::yandex::cloud::operation::CancelOperationRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::yandex::cloud::operation::Operation>>(PrepareAsyncCancelRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void Get(::grpc::ClientContext* context, const ::yandex::cloud::operation::GetOperationRequest* request, ::yandex::cloud::operation::Operation* response, std::function<void(::grpc::Status)>) override;
      void Get(::grpc::ClientContext* context, const ::yandex::cloud::operation::GetOperationRequest* request, ::yandex::cloud::operation::Operation* response, ::grpc::ClientUnaryReactor* reactor) override;
      void Cancel(::grpc::ClientContext* context, const ::yandex::cloud::operation::CancelOperationRequest* request, ::yandex::cloud::operation::Operation* response, std::function<void(::grpc::Status)>) override;
      void Cancel(::grpc::ClientContext* context, const ::yandex::cloud::operation::CancelOperationRequest* request, ::yandex::cloud::operation::Operation* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::yandex::cloud::operation::Operation>* AsyncGetRaw(::grpc::ClientContext* context, const ::yandex::cloud::operation::GetOperationRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::yandex::cloud::operation::Operation>* PrepareAsyncGetRaw(::grpc::ClientContext* context, const ::yandex::cloud::operation::GetOperationRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::yandex::cloud::operation::Operation>* AsyncCancelRaw(::grpc::ClientContext* context, const ::yandex::cloud::operation::CancelOperationRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::yandex::cloud::operation::Operation>* PrepareAsyncCancelRaw(::grpc::ClientContext* context, const ::yandex::cloud::operation::CancelOperationRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Get_;
    const ::grpc::internal::RpcMethod rpcmethod_Cancel_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Returns the specified Operation resource.
    virtual ::grpc::Status Get(::grpc::ServerContext* context, const ::yandex::cloud::operation::GetOperationRequest* request, ::yandex::cloud::operation::Operation* response);
    // Cancels the specified operation.
    virtual ::grpc::Status Cancel(::grpc::ServerContext* context, const ::yandex::cloud::operation::CancelOperationRequest* request, ::yandex::cloud::operation::Operation* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Get() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Get(::grpc::ServerContext* /*context*/, const ::yandex::cloud::operation::GetOperationRequest* /*request*/, ::yandex::cloud::operation::Operation* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGet(::grpc::ServerContext* context, ::yandex::cloud::operation::GetOperationRequest* request, ::grpc::ServerAsyncResponseWriter< ::yandex::cloud::operation::Operation>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Cancel : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Cancel() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Cancel() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Cancel(::grpc::ServerContext* /*context*/, const ::yandex::cloud::operation::CancelOperationRequest* /*request*/, ::yandex::cloud::operation::Operation* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCancel(::grpc::ServerContext* context, ::yandex::cloud::operation::CancelOperationRequest* request, ::grpc::ServerAsyncResponseWriter< ::yandex::cloud::operation::Operation>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Get<WithAsyncMethod_Cancel<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Get() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::yandex::cloud::operation::GetOperationRequest, ::yandex::cloud::operation::Operation>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::yandex::cloud::operation::GetOperationRequest* request, ::yandex::cloud::operation::Operation* response) { return this->Get(context, request, response); }));}
    void SetMessageAllocatorFor_Get(
        ::grpc::MessageAllocator< ::yandex::cloud::operation::GetOperationRequest, ::yandex::cloud::operation::Operation>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::yandex::cloud::operation::GetOperationRequest, ::yandex::cloud::operation::Operation>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Get(::grpc::ServerContext* /*context*/, const ::yandex::cloud::operation::GetOperationRequest* /*request*/, ::yandex::cloud::operation::Operation* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Get(
      ::grpc::CallbackServerContext* /*context*/, const ::yandex::cloud::operation::GetOperationRequest* /*request*/, ::yandex::cloud::operation::Operation* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_Cancel : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Cancel() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::yandex::cloud::operation::CancelOperationRequest, ::yandex::cloud::operation::Operation>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::yandex::cloud::operation::CancelOperationRequest* request, ::yandex::cloud::operation::Operation* response) { return this->Cancel(context, request, response); }));}
    void SetMessageAllocatorFor_Cancel(
        ::grpc::MessageAllocator< ::yandex::cloud::operation::CancelOperationRequest, ::yandex::cloud::operation::Operation>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::yandex::cloud::operation::CancelOperationRequest, ::yandex::cloud::operation::Operation>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Cancel() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Cancel(::grpc::ServerContext* /*context*/, const ::yandex::cloud::operation::CancelOperationRequest* /*request*/, ::yandex::cloud::operation::Operation* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Cancel(
      ::grpc::CallbackServerContext* /*context*/, const ::yandex::cloud::operation::CancelOperationRequest* /*request*/, ::yandex::cloud::operation::Operation* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_Get<WithCallbackMethod_Cancel<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Get() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Get(::grpc::ServerContext* /*context*/, const ::yandex::cloud::operation::GetOperationRequest* /*request*/, ::yandex::cloud::operation::Operation* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Cancel : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Cancel() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Cancel() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Cancel(::grpc::ServerContext* /*context*/, const ::yandex::cloud::operation::CancelOperationRequest* /*request*/, ::yandex::cloud::operation::Operation* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Get() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Get(::grpc::ServerContext* /*context*/, const ::yandex::cloud::operation::GetOperationRequest* /*request*/, ::yandex::cloud::operation::Operation* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGet(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Cancel : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Cancel() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_Cancel() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Cancel(::grpc::ServerContext* /*context*/, const ::yandex::cloud::operation::CancelOperationRequest* /*request*/, ::yandex::cloud::operation::Operation* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCancel(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Get() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Get(context, request, response); }));
    }
    ~WithRawCallbackMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Get(::grpc::ServerContext* /*context*/, const ::yandex::cloud::operation::GetOperationRequest* /*request*/, ::yandex::cloud::operation::Operation* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Get(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Cancel : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Cancel() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Cancel(context, request, response); }));
    }
    ~WithRawCallbackMethod_Cancel() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Cancel(::grpc::ServerContext* /*context*/, const ::yandex::cloud::operation::CancelOperationRequest* /*request*/, ::yandex::cloud::operation::Operation* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Cancel(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Get() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::yandex::cloud::operation::GetOperationRequest, ::yandex::cloud::operation::Operation>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::yandex::cloud::operation::GetOperationRequest, ::yandex::cloud::operation::Operation>* streamer) {
                       return this->StreamedGet(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Get(::grpc::ServerContext* /*context*/, const ::yandex::cloud::operation::GetOperationRequest* /*request*/, ::yandex::cloud::operation::Operation* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGet(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::yandex::cloud::operation::GetOperationRequest,::yandex::cloud::operation::Operation>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Cancel : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Cancel() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::yandex::cloud::operation::CancelOperationRequest, ::yandex::cloud::operation::Operation>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::yandex::cloud::operation::CancelOperationRequest, ::yandex::cloud::operation::Operation>* streamer) {
                       return this->StreamedCancel(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Cancel() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Cancel(::grpc::ServerContext* /*context*/, const ::yandex::cloud::operation::CancelOperationRequest* /*request*/, ::yandex::cloud::operation::Operation* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCancel(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::yandex::cloud::operation::CancelOperationRequest,::yandex::cloud::operation::Operation>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Get<WithStreamedUnaryMethod_Cancel<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Get<WithStreamedUnaryMethod_Cancel<Service > > StreamedService;
};

}  // namespace operation
}  // namespace cloud
}  // namespace yandex


#endif  // GRPC_yandex_2fcloud_2foperation_2foperation_5fservice_2eproto__INCLUDED
