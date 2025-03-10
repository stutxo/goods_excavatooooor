#include <aws/lambda-runtime/runtime.h>
#include <iostream>

using namespace aws::lambda_runtime;

static invocation_response my_handler(invocation_request const& req)
{
    std::cout << "hey" << std::endl;

    return invocation_response::success("{}", "application/json"); 
}

int main()
{
    run_handler(my_handler);
    return 0;
}
