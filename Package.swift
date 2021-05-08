// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "CCTALib",
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(name: "SwiftCCTALib", targets: ["SwiftCCTALib"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        // .package(url: /* package url */, from: "1.0.0"),
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        .target(
            name: "SwiftCCTALib",
            path: "./ta-lib/c/",
            exclude: [
                "bin/",
                "ide/",
                "lib/",
                "make/",
                "temp/",
                "configure.in",
                "autogen.sh",
                "Makefile.am",
                "ta-lib.spec.in",
                "ta-lib-config.in",
                "CMakeLists.txt",
                "ta-lib.dpkg.in",
                "src/tools/",
                "src/ta_abstract/excel_glue.c",
            ],
            sources: [
                "include",
                "src",
            ],
            cSettings: [
                CSetting.headerSearchPath("include"),
                CSetting.headerSearchPath("src/ta_common/"),
                CSetting.headerSearchPath("src/ta_abstract/"),
                CSetting.headerSearchPath("src/ta_abstract/frames"),
            ]),
    ]
)
