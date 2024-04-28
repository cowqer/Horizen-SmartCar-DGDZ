# CMake generated Testfile for 
# Source directory: /root/dev_ws/src/origincar/origincar_bringup
# Build directory: /root/dev_ws/build/origincar_bringup
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/usr/bin/python3" "-u" "/opt/tros/share/ament_cmake_test/cmake/run_test.py" "/root/dev_ws/build/origincar_bringup/test_results/origincar_bringup/copyright.xunit.xml" "--package-name" "origincar_bringup" "--output-file" "/root/dev_ws/build/origincar_bringup/ament_copyright/copyright.txt" "--command" "/opt/tros/bin/ament_copyright" "--xunit-file" "/root/dev_ws/build/origincar_bringup/test_results/origincar_bringup/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/root/dev_ws/src/origincar/origincar_bringup" _BACKTRACE_TRIPLES "/opt/tros/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/tros/share/ament_cmake_copyright/cmake/ament_copyright.cmake;41;ament_add_test;/opt/tros/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;18;ament_copyright;/opt/tros/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;0;;/opt/tros/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/tros/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/tros/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/tros/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/tros/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/root/dev_ws/src/origincar/origincar_bringup/CMakeLists.txt;39;ament_package;/root/dev_ws/src/origincar/origincar_bringup/CMakeLists.txt;0;")
add_test(flake8 "/usr/bin/python3" "-u" "/opt/tros/share/ament_cmake_test/cmake/run_test.py" "/root/dev_ws/build/origincar_bringup/test_results/origincar_bringup/flake8.xunit.xml" "--package-name" "origincar_bringup" "--output-file" "/root/dev_ws/build/origincar_bringup/ament_flake8/flake8.txt" "--command" "/opt/tros/bin/ament_flake8" "--xunit-file" "/root/dev_ws/build/origincar_bringup/test_results/origincar_bringup/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/root/dev_ws/src/origincar/origincar_bringup" _BACKTRACE_TRIPLES "/opt/tros/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/tros/share/ament_cmake_flake8/cmake/ament_flake8.cmake;48;ament_add_test;/opt/tros/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;18;ament_flake8;/opt/tros/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;0;;/opt/tros/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/tros/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/tros/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/tros/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/tros/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/root/dev_ws/src/origincar/origincar_bringup/CMakeLists.txt;39;ament_package;/root/dev_ws/src/origincar/origincar_bringup/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/tros/share/ament_cmake_test/cmake/run_test.py" "/root/dev_ws/build/origincar_bringup/test_results/origincar_bringup/lint_cmake.xunit.xml" "--package-name" "origincar_bringup" "--output-file" "/root/dev_ws/build/origincar_bringup/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/tros/bin/ament_lint_cmake" "--xunit-file" "/root/dev_ws/build/origincar_bringup/test_results/origincar_bringup/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/root/dev_ws/src/origincar/origincar_bringup" _BACKTRACE_TRIPLES "/opt/tros/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/tros/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;41;ament_add_test;/opt/tros/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/tros/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/tros/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/tros/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/tros/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/tros/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/tros/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/root/dev_ws/src/origincar/origincar_bringup/CMakeLists.txt;39;ament_package;/root/dev_ws/src/origincar/origincar_bringup/CMakeLists.txt;0;")
add_test(pep257 "/usr/bin/python3" "-u" "/opt/tros/share/ament_cmake_test/cmake/run_test.py" "/root/dev_ws/build/origincar_bringup/test_results/origincar_bringup/pep257.xunit.xml" "--package-name" "origincar_bringup" "--output-file" "/root/dev_ws/build/origincar_bringup/ament_pep257/pep257.txt" "--command" "/opt/tros/bin/ament_pep257" "--xunit-file" "/root/dev_ws/build/origincar_bringup/test_results/origincar_bringup/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/root/dev_ws/src/origincar/origincar_bringup" _BACKTRACE_TRIPLES "/opt/tros/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/tros/share/ament_cmake_pep257/cmake/ament_pep257.cmake;41;ament_add_test;/opt/tros/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;18;ament_pep257;/opt/tros/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;0;;/opt/tros/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/tros/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/tros/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/tros/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/tros/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/root/dev_ws/src/origincar/origincar_bringup/CMakeLists.txt;39;ament_package;/root/dev_ws/src/origincar/origincar_bringup/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/tros/share/ament_cmake_test/cmake/run_test.py" "/root/dev_ws/build/origincar_bringup/test_results/origincar_bringup/xmllint.xunit.xml" "--package-name" "origincar_bringup" "--output-file" "/root/dev_ws/build/origincar_bringup/ament_xmllint/xmllint.txt" "--command" "/opt/tros/bin/ament_xmllint" "--xunit-file" "/root/dev_ws/build/origincar_bringup/test_results/origincar_bringup/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  DISABLED "TRUE" LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/root/dev_ws/src/origincar/origincar_bringup" _BACKTRACE_TRIPLES "/opt/tros/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/tros/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/tros/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/tros/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/tros/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/tros/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/tros/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/tros/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/tros/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/root/dev_ws/src/origincar/origincar_bringup/CMakeLists.txt;39;ament_package;/root/dev_ws/src/origincar/origincar_bringup/CMakeLists.txt;0;")
