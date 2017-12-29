/*
 * Arguments / return type option tables for automatic value display
 *
 * This file is auto-generated by "gen-autoargs.py" based on prototypes.h
 */

static char *auto_enum_list =
	"enum uft_mmap_prot { PROT_NONE, PROT_READ, PROT_WRITE, PROT_EXEC = 4, };"
	"enum uft_mmap_flag {MAP_SHARED = 0x1,MAP_PRIVATE = 0x2,MAP_FIXED = 0x10,MAP_ANON = 0x20,MAP_GROWSDOWN = 0x100,MAP_DENYWRITE = 0x800,MAP_EXECUTABLE = 0x1000,MAP_LOCKED = 0x2000,MAP_NORESERVE = 0x4000,MAP_POPULATE = 0x8000,MAP_NONBLOCK = 0x10000,MAP_STACK = 0x20000,MAP_HUGETLB = 0x40000,};"
	"enum uft_open_flag {O_RDONLY = 00,O_WRONLY = 01,O_RDWR = 02,O_CREAT = 0100,O_EXCL = 0200,O_NOCTTY = 0400,O_TRUNC = 01000,O_APPEND = 02000,O_NONBLOCK = 04000,O_DSYNC = 010000,O_ASYNC = 020000,O_DIRECT = 040000,O_LARGEFILE = 0100000,O_DIRECTORY = 0200000,O_NOATIME = 01000000,O_CLOEXEC = 02000000,O_SYNC = 04010000,O_PATH = 010000000,};"
	"enum uft_seek_whence { SEEK_SET, SEEK_CUR, SEEK_END, SEEK_DATA, SEEK_HOLE, };"
	"enum uft_access_flag {F_OK = 0, X_OK = 1, W_OK = 2, R_OK = 4,};"
	"enum uft_dlopen_flag {RTLD_LOCAL = 0,RTLD_LAZY = 1,RTLD_NOW = 2,RTLD_NOLOAD = 4,RTLD_DEEPBIND = 8,RTLD_GLOBAL = 0x100,RTLD_NODELETE = 0x1000,};"
	"enum uft_socket_domain {AF_UNSPEC = 0, AF_UNIX, AF_INET, AF_AX25, AF_IPX, AF_APPLETALK, AF_NETROM, AF_BRIDGE,AF_ATMPVC = 8, AF_X25, AF_INET6, AF_ROSE, AF_DECnet, AF_NETBEUI, AF_SECURITY, AF_KEY,AF_NETLINK = 16, AF_PACKET, AF_ASH, AF_ECONET, AF_ATMSVC, AF_RDS, AF_SNA, AF_IRDA,AF_PPPOX = 24, AF_WANPIPE, AF_LLC, AF_IB, AF_MPLS, AF_CAN, AF_TPIC, AF_BLUETOOTH,AF_IUCV = 32, AF_RXRPC, AF_ISDN, AF_PHONET, AF_IEEE802154, AF_CAIF, AF_ALG, AF_NFC,AF_VSOCK = 40, AF_KCM, AF_QIPCRTR, AF_SMC,};"
	"enum uft_socket_type {SOCK_STREAM = 1, SOCK_DGRAM, SOCK_RAW, SOCK_RDM, SOCK_SEQPACKET, SOCK_DCCP,SOCK_PACKET = 10,};"
	"enum uft_socket_flag {SOCK_NONBLOCK = 04000, SOCK_CLOEXEC = 02000000,};"
	"enum uft_signal {SIGHUP = 1, SIGINT, SIGQUIT, SIGILL, SIGTRAP, SIGABRT, SIGBUS, SIGFPE,SIGKILL = 9, SIGUSR1, SIGSEGV, SIGUSR2, SIGPIPE, SIGALRM, SIGTERM, SIGSTKFLT,SIGCHLD = 17, SIGCONT, SIGSTOP, SIGTSTP, SIGTTIN, SIGTTOU, SIGURG, SIGXCPU,SIGXFSZ = 25, SIGVTALRM, SIGPROF, SIGWINCH, SIGPOLL, SIGPWR, SIGSYS,SIGRTMIN = 32, SIGRTMAX = 64,};"
	"enum uft_prctl_op {PR_SET_PDEATHSIG = 1, PR_GET_PDEATHSIG, PR_GET_DUMPABLE, PR_SET_DUMPABLE,PR_GET_UNALIGN = 5, PR_SET_UNALIGN, PR_GET_KEEPCAPS, PR_SET_KEEPCAPS,PR_GET_FPEMU = 9, PR_SET_FPEMU, PR_GET_FPEXC, PR_SET_FPEXC,PR_GET_TIMING = 13, PR_SET_TIMING, PR_SET_NAME, PR_GET_NAME,PR_GET_ENDIAN = 19, PR_SET_ENDIAN, PR_GET_SECCOMP, PR_SET_SECCOMP,PR_CAPBSET_READ = 23, PR_CAPBSET_DROP, PR_GET_TSC, PR_SET_TSC,PR_GET_SECUREBITS = 27, PR_SET_SECUREBITS, PR_SET_TIMERSLACK, PR_GET_TIMERSLACK,PR_TASK_PERF_EVENTS_DISABLE = 31, PR_TASK_PERF_EVENTS_ENABLE,PR_MCE_KILL = 33, PR_MCE_KILL_GET, PR_SET_MM,PR_SET_CHILD_SUBREAPER = 36, PR_GET_CHILD_SUBREAPER,PR_SET_NO_NEW_PRIVS = 38, PR_GET_NO_NEW_PRIVS, PR_GET_TID_ADDRESS,PR_SET_THP_DISABLE = 41, PR_GET_THP_DISABLE,PR_MPX_ENABLE_MANAGEMENT = 43, PR_MPX_DISABLE_MANAGEMENT,PR_SET_FP_MODE = 45, PR_GET_FP_MODE, PR_CAP_AMBIENT,};"
;

static char *auto_args_list =
	"malloc@arg1/u;"
	"free@arg1/x;"
	"calloc@arg1/u,arg2/u;"
	"realloc@arg1/x,arg2/u;"
	"mmap@arg1/x,arg2/u,arg3/e:uft_mmap_prot,arg4/e:uft_mmap_flag,arg5,arg6;"
	"mmap64@arg1/x,arg2/u,arg3/e:uft_mmap_prot,arg4/e:uft_mmap_flag,arg5,arg6/d64;"
	"munmap@arg1/x,arg2/u;"
	"mprotect@arg1/x,arg2/u,arg3/e:uft_mmap_prot;"
	"brk@arg1/x;"
	"sbrk@arg1;"
	"memalign@arg1/u,arg2/u;"
	"pvalloc@arg1/u;"
	"posix_memalign@arg1/x,arg2/u,arg3/u;"
	"aligned_alloc@arg1/u,arg2/u;"
	"valloc@arg1/u;"
	"strcat@arg1/s,arg2/s;"
	"strncat@arg1/s,arg2/s,arg3/u;"
	"strcpy@arg1/x,arg2/s;"
	"strncpy@arg1/x,arg2/s,arg3/u;"
	"strlen@arg1/s;"
	"strnlen@arg1/s,arg2/u;"
	"strcmp@arg1/s,arg2/s;"
	"strncmp@arg1/s,arg2/s,arg3/u;"
	"strcasecmp@arg1/s,arg2/s;"
	"strncasecmp@arg1/s,arg2/s,arg3/u;"
	"strdup@arg1/s;"
	"strndup@arg1/s,arg2/u;"
	"strdupa@arg1/s;"
	"strndupa@arg1/s,arg2/u;"
	"strcoll@arg1/s,arg2/s;"
	"strstr@arg1/s,arg2/s;"
	"strcasestr@arg1/s,arg2/s;"
	"strchr@arg1/s,arg2/c;"
	"strrchr@arg1/s,arg2/c;"
	"strchrnul@arg1/s,arg2/c;"
	"strtok@arg1/s,arg2/s;"
	"strtok_r@arg1/s,arg2/s,arg3/x;"
	"strpbrk@arg1/s,arg2/s;"
	"strspn@arg1/s,arg2/s;"
	"strcspn@arg1/s,arg2/s;"
	"strsep@arg1/x,arg2/s;"
	"memcpy@arg1/x,arg2/x,arg3/u;"
	"memset@arg1/x,arg2,arg3/u;"
	"memcmp@arg1/x,arg2/x,arg3/u;"
	"memmove@arg1/x,arg2/x,arg3/u;"
	"memchr@arg1/x,arg2,arg3/u;"
	"memrchr@arg1/x,arg2,arg3/u;"
	"rawmemchr@arg1/x,arg2;"
	"printf@arg1/s;"
	"fprintf@arg1/x,arg2/s;"
	"dprintf@arg1,arg2/s;"
	"sprintf@arg1/s,arg2/s;"
	"snprintf@arg1/s,arg2/u,arg3/s;"
	"fputc@arg1/c,arg2/x;"
	"fputs@arg1/s,arg2/x;"
	"putc@arg1/c,arg2/x;"
	"putchar@arg1/c;"
	"puts@arg1/s;"
	"fgetc@arg1/x;"
	"fgets@arg1/s,arg2,arg3/x;"
	"getc@arg1/x;"
	"ungetc@arg1/c,arg2/x;"
	"getenv@arg1/s;"
	"setenv@arg1/s,arg2/s,arg3;"
	"unsetenv@arg1/s;"
	"open@arg1/s,arg2/e:uft_open_flag;"
	"open64@arg1/s,arg2/e:uft_open_flag;"
	"close@arg1;"
	"lseek@arg1,arg2,arg3/e:uft_seek_whence;"
	"fopen@arg1/s,arg2/s;"
	"fopen64@arg1/s,arg2/s;"
	"fdopen@arg1,arg2/s;"
	"freopen@arg1/s,arg2/s,arg3/x;"
	"fclose@arg1/x;"
	"fseek@arg1/x,arg2,arg3;"
	"ftell@arg1/x;"
	"read@arg1,arg2/x,arg3/u;"
	"write@arg1,arg2/x,arg3/u;"
	"fread@arg1/x,arg2/u,arg3/u,arg4/x;"
	"fwrite@arg1/x,arg2/u,arg3/u,arg4/x;"
	"access@arg1/s,arg2/e:uft_access_flag;"
	"execl@arg1/s,arg2/s;"
	"execlp@arg1/s,arg2/s;"
	"execle@arg1/s,arg2/s;"
	"execv@arg1/s;"
	"execvp@arg1/s;"
	"execvpe@arg1/s;"
	"wait@arg1/x;"
	"waitpid@arg1/u,arg2/x,arg3;"
	"dlopen@arg1/s,arg2/e:uft_dlopen_flag;"
	"pthread_create@arg1/x,arg2/x,arg3/p,arg4/x;"
	"pthread_once@arg1/x,arg2/p;"
	"pthread_join@arg1,arg2/x;"
	"pthread_detach@arg1;"
	"pthread_kill@arg1,arg2;"
	"pthread_cancel@arg1;"
	"pthread_exit@arg1/x;"
	"pthread_mutex_lock@arg1/x;"
	"pthread_mutex_trylock@arg1/x;"
	"pthread_mutex_unlock@arg1/x;"
	"pthread_mutex_destroy@arg1/x;"
	"pthread_mutex_init@arg1/x,arg2/x;"
	"socket@arg1/e:uft_socket_domain,arg2/e:eft_socket_type,arg3;"
	"connect@arg1,arg2/x,arg3;"
	"bind@arg1,arg2/x,arg3;"
	"accept@arg1,arg2/x,arg3/x;"
	"accept4@arg1,arg2/x,arg3/x,arg4/e:uft_socket_flag;"
	"gethostbyname@arg1/s;"
	"gethostbyaddr@arg1/x,arg2,arg3/e:uft_socket_domain;"
	"getaddrinfo@arg1/s,arg2/s,arg3/x,arg4/x;"
	"freeaddrinfo@arg1/x;"
	"kill@arg1/u,arg2/e:uft_signal;"
	"signal@arg1/e:uft_signal,arg2/p;"
	"sigaction@arg1/e:uft_signal,arg2/x,arg3/x;"
	"sigemptyset@arg1/x;"
	"sigfillset@arg1/x;"
	"sigaddset@arg1/x,arg2/e:uft_signal;"
	"sigdelset@arg1/x,arg2/e:uft_signal;"
	"sigismember@arg1/x,arg2/e:uft_signal;"
	"prctl@arg1/e:uft_prctl_op,arg2/u,arg3,arg4/u,arg5,arg6/u,arg7,arg8/u,arg9;"
	"poll@arg1/x,arg2,arg3;"
	"syscall@arg1;"
	"ioctl@arg1,arg2/u,arg3;"
;

static char *auto_retvals_list =
	"malloc@retval/x;"
	"calloc@retval/x;"
	"realloc@retval/x;"
	"mmap@retval/x;"
	"mmap64@retval/x;"
	"munmap@retval;"
	"mprotect@retval;"
	"brk@retval;"
	"sbrk@retval/x;"
	"memalign@retval/x;"
	"pvalloc@retval/x;"
	"posix_memalign@retval;"
	"aligned_alloc@retval/x;"
	"valloc@retval/x;"
	"strcat@retval/s;"
	"strncat@retval/s;"
	"strlen@retval/u;"
	"strnlen@retval/u;"
	"strcmp@retval;"
	"strncmp@retval;"
	"strcasecmp@retval;"
	"strncasecmp@retval;"
	"strdup@retval/s;"
	"strndup@retval/s;"
	"strdupa@retval/s;"
	"strndupa@retval/s;"
	"strcoll@retval;"
	"strstr@retval/s;"
	"strcasestr@retval/s;"
	"strchr@retval/s;"
	"strrchr@retval/s;"
	"strchrnul@retval/s;"
	"strtok@retval/s;"
	"strtok_r@retval/s;"
	"strpbrk@retval/s;"
	"strspn@retval/u;"
	"strcspn@retval/u;"
	"strsep@retval/s;"
	"memcpy@retval/x;"
	"memset@retval/x;"
	"memcmp@retval;"
	"memmove@retval/x;"
	"memchr@retval/x;"
	"memrchr@retval/x;"
	"rawmemchr@retval/x;"
	"printf@retval;"
	"fprintf@retval;"
	"dprintf@retval;"
	"sprintf@retval;"
	"snprintf@retval;"
	"fputc@retval;"
	"fputs@retval;"
	"putc@retval;"
	"putchar@retval;"
	"puts@retval;"
	"fgetc@retval/c;"
	"fgets@retval/s;"
	"getc@retval/c;"
	"getchar@retval/c;"
	"ungetc@retval/c;"
	"getenv@retval/s;"
	"setenv@retval;"
	"unsetenv@retval;"
	"open@retval;"
	"open64@retval;"
	"close@retval;"
	"lseek@retval;"
	"fopen@retval/x;"
	"fopen64@retval/x;"
	"fdopen@retval/x;"
	"freopen@retval/x;"
	"fclose@retval;"
	"fseek@retval;"
	"ftell@retval;"
	"read@retval;"
	"write@retval;"
	"fread@retval/u;"
	"fwrite@retval/u;"
	"access@retval;"
	"fork@retval/u;"
	"vfork@retval/u;"
	"execl@retval;"
	"execlp@retval;"
	"execle@retval;"
	"execv@retval;"
	"execvp@retval;"
	"execvpe@retval;"
	"wait@retval/u;"
	"waitpid@retval/u;"
	"getpid@retval/u;"
	"getppid@retval/u;"
	"gettid@retval/u;"
	"dlopen@retval/x;"
	"pthread_create@retval;"
	"pthread_once@retval;"
	"pthread_join@retval;"
	"pthread_detach@retval;"
	"pthread_kill@retval;"
	"pthread_cancel@retval;"
	"pthread_mutex_lock@retval;"
	"pthread_mutex_trylock@retval;"
	"pthread_mutex_unlock@retval;"
	"pthread_mutex_destroy@retval;"
	"pthread_mutex_init@retval;"
	"socket@retval;"
	"connect@retval;"
	"bind@retval;"
	"accept@retval;"
	"accept4@retval;"
	"gethostbyname@retval/x;"
	"gethostbyaddr@retval/x;"
	"getaddrinfo@retval;"
	"kill@retval;"
	"signal@retval;"
	"sigaction@retval;"
	"sigemptyset@retval;"
	"sigfillset@retval;"
	"sigaddset@retval;"
	"sigdelset@retval;"
	"sigismember@retval;"
	"prctl@retval;"
	"poll@retval;"
	"syscall@retval;"
	"ioctl@retval;"
;

