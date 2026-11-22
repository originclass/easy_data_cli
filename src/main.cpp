#include <iostream>
#include <nlohmann/json.hpp>
#include <spdlog/spdlog.h>

using json = nlohmann::json;

int main() {

    // 使用 spdlog 输出日志
    spdlog::info("Application started");

    // 使用 nlohmann/json 创建 JSON 对象
    json user;

    user["name"] = "Alice";
    user["age"] = 25;
    user["skills"] = {"C++", "Python"};

    // 输出 JSON 内容
    std::cout << user.dump(4) << '\n';

    // 解析 JSON
    auto name = user["name"].get<std::string>();

    spdlog::info("User name: {}", name);

    spdlog::info("Application finished");

    return 0;
}