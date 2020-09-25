load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "hello_world",
    srcs = ["hello_world.cc"],
)

cc_binary(
    name = "test_map",
    srcs = ["test_map.cc"],
)

cc_binary(
    name = "test_string_view",
    srcs = ["test_string_view.cc"],
    deps = ["@com_google_absl//absl/strings"],
)
