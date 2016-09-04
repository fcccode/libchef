#ifndef _CHEF_BASE_THIS_PROC_OP_H_
#define _CHEF_BASE_THIS_PROC_OP_H_

#include <string>

namespace chef {

  class this_proc_op {
    public:
      /**
       * 进程启动时的linux时间戳，单位秒
       *
       */
      static int start_timestamp();

      /**
       * 进程至今运行时间，单位秒
       *
       */
      static int started_duration_seconds();

      /**
       * @return 成功返回进程当前线程数，失败返回0
       *
       */
      static int num_of_threads();

      /**
       * 内存管理的最小单位：物理页面
       *
       */
      static int page_size();

      /**
       * 进程当前虚拟内存大小，对应top中的VIRT列
       *
       */
      static int virt_kb();

      /**
       * 进程当前常驻内存大小，对应top中的RES列
       *
       */
      static int res_kb();

      /// @return e.g. /home/chef/starry-night/build/base_test/stuff_test
      static std::string exe_filepath();

      /// @return e.g. /home/chef/starry-night/build/base_test/
      static std::string exe_path();

      /// @return e.g. stuff_test
      static std::string exe_name();

      /// content of /proc/self/status
      static std::string status();

      /// content of /proc/self/stat
      static std::string stat();

      static int pid();

      static int ppid();

      static int uid();

      static int euid();

      /// user name of os
      static std::string user_name();
  };

} // namespace chef

#endif // _CHEF_BASE_THIS_PROC_OP_H_
