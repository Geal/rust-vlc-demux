# 1 "modules/demux/wav.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 325 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "modules/demux/wav.c" 2
# 32 "modules/demux/wav.c"
# 1 "./include/vlc_common.h" 1
# 38 "./include/vlc_common.h"
# 1 "./include/vlc_config.h" 1
# 39 "./include/vlc_common.h" 2




# 1 "/usr/include/stdlib.h" 1 3 4
# 61 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 153 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 154 "/usr/include/Availability.h" 2 3 4
# 62 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/_types.h" 1 3 4
# 27 "/usr/include/_types.h" 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 32 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 506 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 507 "/usr/include/sys/cdefs.h" 2 3 4
# 572 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 573 "/usr/include/sys/cdefs.h" 2 3 4
# 33 "/usr/include/sys/_types.h" 2 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 32 "/usr/include/machine/_types.h" 3 4
# 1 "/usr/include/i386/_types.h" 1 3 4
# 37 "/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 70 "/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 33 "/usr/include/machine/_types.h" 2 3 4
# 34 "/usr/include/sys/_types.h" 2 3 4
# 55 "/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];


# 1 "/usr/include/sys/_pthread/_pthread_types.h" 1 3 4
# 57 "/usr/include/sys/_pthread/_pthread_types.h" 3 4
struct __darwin_pthread_handler_rec {
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_cond_t {
 long __sig;
 char __opaque[40];
};

struct _opaque_pthread_condattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_mutex_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_once_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
 long __sig;
 char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
 long __sig;
 char __opaque[16];
};

struct _opaque_pthread_t {
 long __sig;
 struct __darwin_pthread_handler_rec *__cleanup_stack;
 char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
# 81 "/usr/include/sys/_types.h" 2 3 4
# 28 "/usr/include/_types.h" 2 3 4
# 39 "/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 64 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/sys/wait.h" 1 3 4
# 79 "/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;






# 1 "/usr/include/sys/_types/_pid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 90 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/_types/_id_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_id_t.h" 3 4
typedef __darwin_id_t id_t;
# 91 "/usr/include/sys/wait.h" 2 3 4
# 109 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/sys/signal.h" 1 3 4
# 73 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 74 "/usr/include/sys/signal.h" 2 3 4







# 1 "/usr/include/machine/signal.h" 1 3 4
# 32 "/usr/include/machine/signal.h" 3 4
# 1 "/usr/include/i386/signal.h" 1 3 4
# 39 "/usr/include/i386/signal.h" 3 4
typedef int sig_atomic_t;
# 33 "/usr/include/machine/signal.h" 2 3 4
# 82 "/usr/include/sys/signal.h" 2 3 4
# 145 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/machine/_mcontext.h" 1 3 4
# 29 "/usr/include/machine/_mcontext.h" 3 4
# 1 "/usr/include/i386/_mcontext.h" 1 3 4
# 33 "/usr/include/i386/_mcontext.h" 3 4
# 1 "/usr/include/mach/i386/_structs.h" 1 3 4
# 43 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_thread_state
{
    unsigned int __eax;
    unsigned int __ebx;
    unsigned int __ecx;
    unsigned int __edx;
    unsigned int __edi;
    unsigned int __esi;
    unsigned int __ebp;
    unsigned int __esp;
    unsigned int __ss;
    unsigned int __eflags;
    unsigned int __eip;
    unsigned int __cs;
    unsigned int __ds;
    unsigned int __es;
    unsigned int __fs;
    unsigned int __gs;
};
# 89 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_control
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
      :2,
    __pc :2,





    __rc :2,






             :1,
      :3;
};
typedef struct __darwin_fp_control __darwin_fp_control_t;
# 147 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_status
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
    __stkflt :1,
    __errsumm :1,
    __c0 :1,
    __c1 :1,
    __c2 :1,
    __tos :3,
    __c3 :1,
    __busy :1;
};
typedef struct __darwin_fp_status __darwin_fp_status_t;
# 191 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_mmst_reg
{
 char __mmst_reg[10];
 char __mmst_rsrv[6];
};
# 210 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_xmm_reg
{
 char __xmm_reg[16];
};
# 232 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_float_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
};


struct __darwin_i386_avx_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
};
# 402 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_exception_state
{
 __uint16_t __trapno;
 __uint16_t __cpu;
 __uint32_t __err;
 __uint32_t __faultvaddr;
};
# 422 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state32
{
 unsigned int __dr0;
 unsigned int __dr1;
 unsigned int __dr2;
 unsigned int __dr3;
 unsigned int __dr4;
 unsigned int __dr5;
 unsigned int __dr6;
 unsigned int __dr7;
};
# 454 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_thread_state64
{
 __uint64_t __rax;
 __uint64_t __rbx;
 __uint64_t __rcx;
 __uint64_t __rdx;
 __uint64_t __rdi;
 __uint64_t __rsi;
 __uint64_t __rbp;
 __uint64_t __rsp;
 __uint64_t __r8;
 __uint64_t __r9;
 __uint64_t __r10;
 __uint64_t __r11;
 __uint64_t __r12;
 __uint64_t __r13;
 __uint64_t __r14;
 __uint64_t __r15;
 __uint64_t __rip;
 __uint64_t __rflags;
 __uint64_t __cs;
 __uint64_t __fs;
 __uint64_t __gs;
};
# 509 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_float_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
};


struct __darwin_x86_avx_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
 struct __darwin_xmm_reg __fpu_ymmh8;
 struct __darwin_xmm_reg __fpu_ymmh9;
 struct __darwin_xmm_reg __fpu_ymmh10;
 struct __darwin_xmm_reg __fpu_ymmh11;
 struct __darwin_xmm_reg __fpu_ymmh12;
 struct __darwin_xmm_reg __fpu_ymmh13;
 struct __darwin_xmm_reg __fpu_ymmh14;
 struct __darwin_xmm_reg __fpu_ymmh15;
};
# 751 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_exception_state64
{
    __uint16_t __trapno;
    __uint16_t __cpu;
    __uint32_t __err;
    __uint64_t __faultvaddr;
};
# 771 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state64
{
 __uint64_t __dr0;
 __uint64_t __dr1;
 __uint64_t __dr2;
 __uint64_t __dr3;
 __uint64_t __dr4;
 __uint64_t __dr5;
 __uint64_t __dr6;
 __uint64_t __dr7;
};
# 34 "/usr/include/i386/_mcontext.h" 2 3 4




struct __darwin_mcontext32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_float_state __fs;
};


struct __darwin_mcontext_avx32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_avx_state __fs;
};
# 76 "/usr/include/i386/_mcontext.h" 3 4
struct __darwin_mcontext64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_float_state64 __fs;
};


struct __darwin_mcontext_avx64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_avx_state64 __fs;
};
# 115 "/usr/include/i386/_mcontext.h" 3 4
typedef struct __darwin_mcontext64 *mcontext_t;
# 30 "/usr/include/machine/_mcontext.h" 2 3 4
# 146 "/usr/include/sys/signal.h" 2 3 4

# 1 "/usr/include/sys/_pthread/_pthread_attr_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_attr_t.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;
# 148 "/usr/include/sys/signal.h" 2 3 4

# 1 "/usr/include/sys/_types/_sigaltstack.h" 1 3 4
# 36 "/usr/include/sys/_types/_sigaltstack.h" 3 4
struct __darwin_sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
# 150 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_ucontext.h" 1 3 4
# 34 "/usr/include/sys/_types/_ucontext.h" 3 4
struct __darwin_ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 struct __darwin_sigaltstack uc_stack;
 struct __darwin_ucontext *uc_link;
 __darwin_size_t uc_mcsize;
 struct __darwin_mcontext64 *uc_mcontext;



};


typedef struct __darwin_ucontext ucontext_t;
# 151 "/usr/include/sys/signal.h" 2 3 4


# 1 "/usr/include/sys/_types/_sigset_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_sigset_t.h" 3 4
typedef __darwin_sigset_t sigset_t;
# 154 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 155 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_uid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uid_t.h" 3 4
typedef __darwin_uid_t uid_t;
# 156 "/usr/include/sys/signal.h" 2 3 4

union sigval {

 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify;
 int sigev_signo;
 union sigval sigev_value;
 void (*sigev_notify_function)(union sigval);
 pthread_attr_t *sigev_notify_attributes;
};


typedef struct __siginfo {
 int si_signo;
 int si_errno;
 int si_code;
 pid_t si_pid;
 uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 unsigned long __pad[7];
} siginfo_t;
# 268 "/usr/include/sys/signal.h" 3 4
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
         void *);
};


struct __sigaction {
 union __sigaction_u __sigaction_u;
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask;
 int sa_flags;
};




struct sigaction {
 union __sigaction_u __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 330 "/usr/include/sys/signal.h" 3 4
typedef void (*sig_t)(int);
# 347 "/usr/include/sys/signal.h" 3 4
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 366 "/usr/include/sys/signal.h" 3 4
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
# 389 "/usr/include/sys/signal.h" 3 4
void (*signal(int, void (*)(int)))(int);
# 110 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/resource.h" 1 3 4
# 72 "/usr/include/sys/resource.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/7.0.2/include/stdint.h" 1 3 4
# 63 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/7.0.2/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 18 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int8_t.h" 3 4
typedef signed char int8_t;
# 19 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 20 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 21 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 22 "/usr/include/stdint.h" 2 3 4

# 1 "/usr/include/_types/_uint8_t.h" 1 3 4
# 31 "/usr/include/_types/_uint8_t.h" 3 4
typedef unsigned char uint8_t;
# 24 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint16_t.h" 1 3 4
# 31 "/usr/include/_types/_uint16_t.h" 3 4
typedef unsigned short uint16_t;
# 25 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint32_t.h" 1 3 4
# 31 "/usr/include/_types/_uint32_t.h" 3 4
typedef unsigned int uint32_t;
# 26 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint64_t.h" 1 3 4
# 31 "/usr/include/_types/_uint64_t.h" 3 4
typedef unsigned long long uint64_t;
# 27 "/usr/include/stdint.h" 2 3 4


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;






# 1 "/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_intptr_t.h" 3 4
typedef __darwin_intptr_t intptr_t;
# 54 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uintptr_t.h" 3 4
typedef unsigned long uintptr_t;
# 55 "/usr/include/stdint.h" 2 3 4



# 1 "/usr/include/_types/_intmax_t.h" 1 3 4
# 32 "/usr/include/_types/_intmax_t.h" 3 4
typedef long int intmax_t;
# 59 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uintmax_t.h" 1 3 4
# 32 "/usr/include/_types/_uintmax_t.h" 3 4
typedef long unsigned int uintmax_t;
# 60 "/usr/include/stdint.h" 2 3 4
# 64 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/7.0.2/include/stdint.h" 2 3 4
# 73 "/usr/include/sys/resource.h" 2 3 4







# 1 "/usr/include/sys/_types/_timeval.h" 1 3 4
# 30 "/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 81 "/usr/include/sys/resource.h" 2 3 4








typedef __uint64_t rlim_t;
# 152 "/usr/include/sys/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
# 163 "/usr/include/sys/resource.h" 3 4
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;


};
# 192 "/usr/include/sys/resource.h" 3 4
typedef void *rusage_info_t;

struct rusage_info_v0 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
};

struct rusage_info_v1 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
};

struct rusage_info_v2 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
};

struct rusage_info_v3 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
};

typedef struct rusage_info_v3 rusage_info_current;
# 325 "/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
# 353 "/usr/include/sys/resource.h" 3 4
struct proc_rlimit_control_wakeupmon {
 uint32_t wm_flags;
 int32_t wm_rate;
};
# 383 "/usr/include/sys/resource.h" 3 4
int getpriority(int, id_t);

int getiopolicy_np(int, int) __attribute__((availability(macosx,introduced=10.5)));

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit" );
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) __attribute__((availability(macosx,introduced=10.5)));

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit" );
# 111 "/usr/include/sys/wait.h" 2 3 4
# 186 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/machine/endian.h" 1 3 4
# 35 "/usr/include/machine/endian.h" 3 4
# 1 "/usr/include/i386/endian.h" 1 3 4
# 99 "/usr/include/i386/endian.h" 3 4
# 1 "/usr/include/sys/_endian.h" 1 3 4
# 130 "/usr/include/sys/_endian.h" 3 4
# 1 "/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 66 "/usr/include/libkern/_OSByteOrder.h" 3 4
# 1 "/usr/include/libkern/i386/_OSByteOrder.h" 1 3 4
# 44 "/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static inline
__uint16_t
_OSSwapInt16(
    __uint16_t _data
)
{
    return ((__uint16_t)((_data << 8) | (_data >> 8)));
}

static inline
__uint32_t
_OSSwapInt32(
    __uint32_t _data
)
{

    return __builtin_bswap32(_data);




}


static inline
__uint64_t
_OSSwapInt64(
    __uint64_t _data
)
{
    return __builtin_bswap64(_data);
}
# 67 "/usr/include/libkern/_OSByteOrder.h" 2 3 4
# 131 "/usr/include/sys/_endian.h" 2 3 4
# 100 "/usr/include/i386/endian.h" 2 3 4
# 36 "/usr/include/machine/endian.h" 2 3 4
# 187 "/usr/include/sys/wait.h" 2 3 4







union wait {
 int w_status;



 struct {

  unsigned int w_Termsig:7,
    w_Coredump:1,
    w_Retcode:8,
    w_Filler:16;







 } w_T;





 struct {

  unsigned int w_Stopval:8,
    w_Stopsig:8,
    w_Filler:16;






 } w_S;
};
# 248 "/usr/include/sys/wait.h" 3 4
pid_t wait(int *) __asm("_" "wait" );
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid" );

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid" );


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);
# 66 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/alloca.h" 1 3 4
# 32 "/usr/include/alloca.h" 3 4
void *alloca(size_t);
# 68 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/sys/_types/_ct_rune_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_ct_rune_t.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;
# 77 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_rune_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_rune_t.h" 3 4
typedef __darwin_rune_t rune_t;
# 78 "/usr/include/stdlib.h" 2 3 4


# 1 "/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 33 "/usr/include/sys/_types/_wchar_t.h" 3 4
typedef __darwin_wchar_t wchar_t;
# 81 "/usr/include/stdlib.h" 2 3 4

typedef struct {
 int quot;
 int rem;
} div_t;

typedef struct {
 long quot;
 long rem;
} ldiv_t;


typedef struct {
 long long quot;
 long long rem;
} lldiv_t;



# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 100 "/usr/include/stdlib.h" 2 3 4
# 117 "/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;
# 128 "/usr/include/stdlib.h" 3 4
void abort(void) __attribute__((noreturn));
int abs(int) __attribute__((const));
int atexit(void (*)(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void *, const void *, size_t,
     size_t, int (*)(const void *, const void *));
void *calloc(size_t, size_t);
div_t div(int, int) __attribute__((const));
void exit(int) __attribute__((noreturn));
void free(void *);
char *getenv(const char *);
long labs(long) __attribute__((const));
ldiv_t ldiv(long, long) __attribute__((const));

long long
  llabs(long long);
lldiv_t lldiv(long long, long long);

void *malloc(size_t);
int mblen(const char *, size_t);
size_t mbstowcs(wchar_t * restrict , const char * restrict, size_t);
int mbtowc(wchar_t * restrict, const char * restrict, size_t);
int posix_memalign(void **, size_t, size_t) __attribute__((availability(macosx,introduced=10.6)));
void qsort(void *, size_t, size_t,
     int (*)(const void *, const void *));
int rand(void);
void *realloc(void *, size_t);
void srand(unsigned);
double strtod(const char *, char **) __asm("_" "strtod" );
float strtof(const char *, char **) __asm("_" "strtof" );
long strtol(const char *, char **, int);
long double
  strtold(const char *, char **);

long long
  strtoll(const char *, char **, int);

unsigned long
  strtoul(const char *, char **, int);

unsigned long long
  strtoull(const char *, char **, int);

int system(const char *) __asm("_" "system" ) __attribute__((availability(macosx,introduced=10.0)));
size_t wcstombs(char * restrict, const wchar_t * restrict, size_t);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((noreturn));
long a64l(const char *);
double drand48(void);
char *ecvt(double, int, int *restrict, int *restrict);
double erand48(unsigned short[3]);
char *fcvt(double, int, int *restrict, int *restrict);
char *gcvt(double, int, char *);
int getsubopt(char **, char * const *, char **);
int grantpt(int);

char *initstate(unsigned, char *, size_t);



long jrand48(unsigned short[3]);
char *l64a(long);
void lcong48(unsigned short[7]);
long lrand48(void);
char *mktemp(char *);
int mkstemp(char *);
long mrand48(void);
long nrand48(unsigned short[3]);
int posix_openpt(int);
char *ptsname(int);
int putenv(char *) __asm("_" "putenv" );
long random(void);
int rand_r(unsigned *);

char *realpath(const char * restrict, char * restrict) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char *, const char *, int) __asm("_" "setenv" );

void setkey(const char *) __asm("_" "setkey" );



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv" );







# 1 "/usr/include/machine/types.h" 1 3 4
# 35 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/i386/types.h" 1 3 4
# 81 "/usr/include/i386/types.h" 3 4
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long long u_int64_t;


typedef int64_t register_t;
# 97 "/usr/include/i386/types.h" 3 4
typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;







typedef u_int64_t syscall_arg_t;
# 36 "/usr/include/machine/types.h" 2 3 4
# 239 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/sys/_types/_dev_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_dev_t.h" 3 4
typedef __darwin_dev_t dev_t;
# 241 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_mode_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 242 "/usr/include/stdlib.h" 2 3 4

u_int32_t arc4random(void);
void arc4random_addrandom(unsigned char * , int );
void arc4random_buf(void * , size_t ) __attribute__((availability(macosx,introduced=10.7)));
void arc4random_stir(void);
u_int32_t
  arc4random_uniform(u_int32_t ) __attribute__((availability(macosx,introduced=10.7)));

int atexit_b(void (^)(void)) __attribute__((availability(macosx,introduced=10.6)));
void *bsearch_b(const void *, const void *, size_t,
     size_t, int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));



char *cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char **, char **, const char *);
int cgetfirst(char **, char **);
int cgetmatch(const char *, const char *);
int cgetnext(char **, char **);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char **);
int cgetustr(char *, const char *, char **);

int daemon(int, int) __asm("_" "daemon" "$1050") __attribute__((availability(macosx,introduced=10.0,deprecated=10.5)));
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);

int heapsort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int heapsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

int mergesort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int mergesort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort(void *, size_t, size_t,
     int (*)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void qsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void qsort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *));
int radixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void setprogname(const char *);
int sradixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void sranddev(void);
void srandomdev(void);
void *reallocf(void *, size_t);

long long
  strtoq(const char *, char **, int);
unsigned long long
  strtouq(const char *, char **, int);

extern char *suboptarg;
void *valloc(size_t);
# 44 "./include/vlc_common.h" 2
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/7.0.2/include/stdarg.h" 1 3 4
# 30 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/7.0.2/include/stdarg.h" 3 4
typedef __builtin_va_list va_list;
# 50 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/7.0.2/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 45 "./include/vlc_common.h" 2

# 1 "/usr/include/string.h" 1 3 4
# 70 "/usr/include/string.h" 3 4
void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
void *memset(void *, int, size_t);
char *strcat(char *, const char *);
char *strchr(const char *, int);
int strcmp(const char *, const char *);
int strcoll(const char *, const char *);
char *strcpy(char *, const char *);
size_t strcspn(const char *, const char *);
char *strerror(int) __asm("_" "strerror" );
size_t strlen(const char *);
char *strncat(char *, const char *, size_t);
int strncmp(const char *, const char *, size_t);
char *strncpy(char *, const char *, size_t);
char *strpbrk(const char *, const char *);
char *strrchr(const char *, int);
size_t strspn(const char *, const char *);
char *strstr(const char *, const char *);
char *strtok(char *, const char *);
size_t strxfrm(char *, const char *, size_t);
# 104 "/usr/include/string.h" 3 4
char *strtok_r(char *, const char *, char **);
# 116 "/usr/include/string.h" 3 4
int strerror_r(int, char *, size_t);
char *strdup(const char *);
void *memccpy(void *, const void *, int, size_t);
# 130 "/usr/include/string.h" 3 4
char *stpcpy(char *, const char *);
char *stpncpy(char *, const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strndup(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
size_t strnlen(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strsignal(int sig);







# 1 "/usr/include/sys/_types/_rsize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_rsize_t.h" 3 4
typedef __darwin_size_t rsize_t;
# 142 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 143 "/usr/include/string.h" 2 3 4


errno_t memset_s(void *, rsize_t, int, rsize_t) __attribute__((availability(macosx,introduced=10.9)));







# 1 "/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 153 "/usr/include/string.h" 2 3 4


void *memmem(const void *, size_t, const void *, size_t) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));

char *strcasestr(const char *, const char *);
char *strnstr(const char *, const char *, size_t);
size_t strlcat(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
void strmode(int, char *);
char *strsep(char **, const char *);


void swab(const void * restrict, void * restrict, ssize_t);








# 1 "/usr/include/strings.h" 1 3 4
# 70 "/usr/include/strings.h" 3 4
int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);





int ffsl(long) __attribute__((availability(macosx,introduced=10.5)));
int ffsll(long long) __attribute__((availability(macosx,introduced=10.9)));
int fls(int) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long) __attribute__((availability(macosx,introduced=10.5)));
int flsll(long long) __attribute__((availability(macosx,introduced=10.9)));



# 1 "/usr/include/string.h" 1 3 4
# 93 "/usr/include/strings.h" 2 3 4
# 177 "/usr/include/string.h" 2 3 4
# 186 "/usr/include/string.h" 3 4
# 1 "/usr/include/secure/_string.h" 1 3 4
# 33 "/usr/include/secure/_string.h" 3 4
# 1 "/usr/include/secure/_common.h" 1 3 4
# 34 "/usr/include/secure/_string.h" 2 3 4
# 187 "/usr/include/string.h" 2 3 4
# 47 "./include/vlc_common.h" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 71 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_va_list.h" 1 3 4
# 31 "/usr/include/sys/_types/_va_list.h" 3 4
typedef __darwin_va_list va_list;
# 72 "/usr/include/stdio.h" 2 3 4



# 1 "/usr/include/sys/stdio.h" 1 3 4
# 39 "/usr/include/sys/stdio.h" 3 4
int renameat(int, const char *, int, const char *) __attribute__((availability(macosx,introduced=10.10)));
# 76 "/usr/include/stdio.h" 2 3 4

typedef __darwin_off_t fpos_t;
# 88 "/usr/include/stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 122 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (*_close)(void *);
 int (*_read) (void *, char *, int);
 fpos_t (*_seek) (void *, fpos_t, int);
 int (*_write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;


extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;
# 231 "/usr/include/stdio.h" 3 4
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * restrict, fpos_t *);
char *fgets(char * restrict, int, FILE *);



FILE *fopen(const char * restrict, const char * restrict) __asm("_" "fopen" );

int fprintf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * restrict, FILE * restrict) __asm("_" "fputs" );
size_t fread(void * restrict, size_t, size_t, FILE * restrict);
FILE *freopen(const char * restrict, const char * restrict,
                 FILE * restrict) __asm("_" "freopen" );
int fscanf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * restrict, size_t, size_t, FILE * restrict) __asm("_" "fwrite" );
int getc(FILE *);
int getchar(void);
char *gets(char *);
void perror(const char *);
int printf(const char * restrict, ...) __attribute__((__format__ (__printf__, 1, 2)));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *, const char *);
void rewind(FILE *);
int scanf(const char * restrict, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * restrict, char * restrict);
int setvbuf(FILE * restrict, char * restrict, int, size_t);
int sprintf(char * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int sscanf(const char * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);


__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * restrict, va_list) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
# 296 "/usr/include/stdio.h" 3 4
char *ctermid(char *);





FILE *fdopen(int, const char *) __asm("_" "fdopen" );

int fileno(FILE *);
# 315 "/usr/include/stdio.h" 3 4
int pclose(FILE *);



FILE *popen(const char *, const char *) __asm("_" "popen" );
# 337 "/usr/include/stdio.h" 3 4
int __srget(FILE *);
int __svfscanf(FILE *, const char *, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);
# 348 "/usr/include/stdio.h" 3 4
inline __attribute__ ((__always_inline__)) int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 374 "/usr/include/stdio.h" 3 4
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



int getw(FILE *);
int putw(int, FILE *);



__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tempnam(const char *, const char *) __asm("_" "tempnam" );
# 411 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_off_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 412 "/usr/include/stdio.h" 2 3 4


int fseeko(FILE *, off_t, int);
off_t ftello(FILE *);





int snprintf(char * restrict, size_t, const char * restrict, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * restrict, va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * restrict, size_t, const char * restrict, va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * restrict, const char * restrict, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
# 439 "/usr/include/stdio.h" 3 4
int dprintf(int, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((availability(macosx,introduced=10.7)));
int vdprintf(int, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getdelim(char ** restrict, size_t * restrict, int, FILE * restrict) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getline(char ** restrict, size_t * restrict, FILE * restrict) __attribute__((availability(macosx,introduced=10.7)));
# 452 "/usr/include/stdio.h" 3 4
extern const int sys_nerr;
extern const char *const sys_errlist[];

int asprintf(char ** restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
char *ctermid_r(char *);
char *fgetln(FILE *, size_t *);
const char *fmtcheck(const char *, const char *);
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char ** restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
FILE *zopen(const char *, const char *, int);





FILE *funopen(const void *,
                 int (*)(void *, char *, int),
                 int (*)(void *, const char *, int),
                 fpos_t (*)(void *, fpos_t, int),
                 int (*)(void *));
# 492 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/secure/_stdio.h" 1 3 4
# 42 "/usr/include/secure/_stdio.h" 3 4
extern int __sprintf_chk (char * restrict, int, size_t,
     const char * restrict, ...);
# 52 "/usr/include/secure/_stdio.h" 3 4
extern int __snprintf_chk (char * restrict, size_t, int, size_t,
      const char * restrict, ...);







extern int __vsprintf_chk (char * restrict, int, size_t,
      const char * restrict, va_list);







extern int __vsnprintf_chk (char * restrict, size_t, int, size_t,
       const char * restrict, va_list);
# 493 "/usr/include/stdio.h" 2 3 4
# 48 "./include/vlc_common.h" 2
# 1 "/usr/include/inttypes.h" 1 3 4
# 227 "/usr/include/inttypes.h" 3 4
# 1 "/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 228 "/usr/include/inttypes.h" 2 3 4






__attribute__((availability(macosx,introduced=10.4)))
extern intmax_t
imaxabs(intmax_t j);


typedef struct {
 intmax_t quot;
 intmax_t rem;
} imaxdiv_t;

__attribute__((availability(macosx,introduced=10.4)))
extern imaxdiv_t
imaxdiv(intmax_t __numer, intmax_t __denom);


__attribute__((availability(macosx,introduced=10.4)))
extern intmax_t
strtoimax(const char * restrict __nptr,
   char ** restrict __endptr,
   int __base);

__attribute__((availability(macosx,introduced=10.4)))
extern uintmax_t
strtoumax(const char * restrict __nptr,
   char ** restrict __endptr,
   int __base);


__attribute__((availability(macosx,introduced=10.4)))
extern intmax_t
wcstoimax(const wchar_t * restrict __nptr,
   wchar_t ** restrict __endptr,
   int __base);

__attribute__((availability(macosx,introduced=10.4)))
extern uintmax_t
wcstoumax(const wchar_t * restrict __nptr,
   wchar_t ** restrict __endptr,
   int __base);
# 49 "./include/vlc_common.h" 2
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/7.0.2/include/stddef.h" 1 3 4
# 51 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/7.0.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 118 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/7.0.2/include/stddef.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/7.0.2/include/__stddef_max_align_t.h" 1 3 4
# 32 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/7.0.2/include/__stddef_max_align_t.h" 3 4
typedef long double max_align_t;
# 119 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/7.0.2/include/stddef.h" 2 3 4
# 50 "./include/vlc_common.h" 2


# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/7.0.2/include/stdbool.h" 1 3 4
# 53 "./include/vlc_common.h" 2
# 157 "./include/vlc_common.h"
typedef int64_t mtime_t;






typedef uint32_t vlc_fourcc_t;
# 189 "./include/vlc_common.h"
static inline void vlc_fourcc_to_char( vlc_fourcc_t fcc, char *psz_fourcc )
{
    __builtin___memcpy_chk (psz_fourcc, &fcc, 4, __builtin_object_size (psz_fourcc, 0));
}






typedef struct vlc_list_t vlc_list_t;
typedef struct vlc_object_t vlc_object_t;
typedef struct libvlc_int_t libvlc_int_t;
typedef struct date_t date_t;



typedef struct playlist_t playlist_t;
typedef struct playlist_item_t playlist_item_t;
typedef struct services_discovery_t services_discovery_t;
typedef struct services_discovery_sys_t services_discovery_sys_t;
typedef struct playlist_add_t playlist_add_t;
typedef struct vlc_renderer_discovery vlc_renderer_discovery;
typedef struct vlc_renderer_item vlc_renderer_item;


typedef struct module_t module_t;
typedef struct module_config_t module_config_t;

typedef struct config_category_t config_category_t;


typedef struct input_thread_t input_thread_t;
typedef struct input_item_t input_item_t;
typedef struct input_item_node_t input_item_node_t;
typedef struct access_t access_t;
typedef struct access_sys_t access_sys_t;
typedef struct stream_t stream_t;
typedef struct stream_sys_t stream_sys_t;
typedef struct demux_t demux_t;
typedef struct demux_sys_t demux_sys_t;
typedef struct es_out_t es_out_t;
typedef struct es_out_id_t es_out_id_t;
typedef struct es_out_sys_t es_out_sys_t;
typedef struct seekpoint_t seekpoint_t;
typedef struct info_t info_t;
typedef struct info_category_t info_category_t;
typedef struct input_attachment_t input_attachment_t;


typedef struct audio_format_t audio_format_t;
typedef struct video_format_t video_format_t;
typedef struct subs_format_t subs_format_t;
typedef struct es_format_t es_format_t;
typedef struct video_palette_t video_palette_t;


typedef struct audio_output audio_output_t;
typedef struct aout_sys_t aout_sys_t;
typedef audio_format_t audio_sample_format_t;


typedef struct vout_thread_t vout_thread_t;

typedef video_format_t video_frame_format_t;
typedef struct picture_t picture_t;
typedef struct picture_sys_t picture_sys_t;


typedef struct spu_t spu_t;
typedef struct subpicture_t subpicture_t;
typedef struct subpicture_region_t subpicture_region_t;

typedef struct image_handler_t image_handler_t;


typedef struct sout_instance_t sout_instance_t;

typedef struct sout_input_t sout_input_t;
typedef struct sout_packetizer_input_t sout_packetizer_input_t;

typedef struct sout_access_out_t sout_access_out_t;
typedef struct sout_access_out_sys_t sout_access_out_sys_t;

typedef struct sout_mux_t sout_mux_t;
typedef struct sout_mux_sys_t sout_mux_sys_t;

typedef struct sout_stream_t sout_stream_t;
typedef struct sout_stream_sys_t sout_stream_sys_t;

typedef struct config_chain_t config_chain_t;
typedef struct session_descriptor_t session_descriptor_t;


typedef struct decoder_t decoder_t;
typedef struct decoder_sys_t decoder_sys_t;
typedef struct decoder_synchro_t decoder_synchro_t;


typedef struct encoder_t encoder_t;
typedef struct encoder_sys_t encoder_sys_t;


typedef struct filter_t filter_t;
typedef struct filter_sys_t filter_sys_t;


typedef struct vlc_url_t vlc_url_t;


typedef struct iso639_lang_t iso639_lang_t;


typedef struct block_t block_t;
typedef struct block_fifo_t block_fifo_t;


typedef struct md5_s md5_t;


typedef struct xml_t xml_t;
typedef struct xml_sys_t xml_sys_t;
typedef struct xml_reader_t xml_reader_t;
typedef struct xml_reader_sys_t xml_reader_sys_t;


typedef struct vod_t vod_t;
typedef struct vod_sys_t vod_sys_t;
typedef struct vod_media_t vod_media_t;


typedef struct vlm_t vlm_t;
typedef struct vlm_message_t vlm_message_t;


typedef struct vlc_meta_t vlc_meta_t;
typedef struct input_stats_t input_stats_t;
typedef struct addon_entry_t addon_entry_t;


typedef struct update_t update_t;




typedef union
{
    int64_t i_int;
    _Bool b_bool;
    float f_float;
    char * psz_string;
    void * p_address;
    vlc_list_t * p_list;
    struct { int32_t x; int32_t y; } coords;

} vlc_value_t;




struct vlc_list_t
{
    int i_type;
    int i_count;
    vlc_value_t *p_values;
};
# 372 "./include/vlc_common.h"
typedef int ( * vlc_callback_t ) ( vlc_object_t *,
                                   char const *,
                                   vlc_value_t,
                                   vlc_value_t,
                                   void * );




typedef int ( * vlc_list_callback_t ) ( vlc_object_t *,
                                        char const *,
                                        int,
                                        vlc_value_t *,
                                        void *);
# 399 "./include/vlc_common.h"
# 1 "/usr/include/sys/syslimits.h" 1 3 4
# 400 "./include/vlc_common.h" 2
# 1 "/usr/include/AvailabilityMacros.h" 1 3 4
# 401 "./include/vlc_common.h" 2
# 411 "./include/vlc_common.h"
# 1 "./include/vlc_mtime.h" 1
# 57 "./include/vlc_mtime.h"
 __attribute__((visibility("default"))) char * secstotimestr( char *psz_buffer, int32_t secs );




struct date_t
{
    mtime_t date;
    uint32_t i_divider_num;
    uint32_t i_divider_den;
    uint32_t i_remainder;
};

 __attribute__((visibility("default"))) void date_Init( date_t *, uint32_t, uint32_t );
 __attribute__((visibility("default"))) void date_Change( date_t *, uint32_t, uint32_t );
 __attribute__((visibility("default"))) void date_Set( date_t *, mtime_t );
 __attribute__((visibility("default"))) mtime_t date_Get( const date_t * );
 __attribute__((visibility("default"))) void date_Move( date_t *, mtime_t );
 __attribute__((visibility("default"))) mtime_t date_Increment( date_t *, uint32_t );
 __attribute__((visibility("default"))) mtime_t date_Decrement( date_t *, uint32_t );
 __attribute__((visibility("default"))) uint64_t NTPtime64( void );
# 412 "./include/vlc_common.h" 2
# 1 "./include/vlc_threads.h" 1
# 47 "./include/vlc_threads.h"
 __attribute__((visibility("default"))) void vlc_testcancel(void);
# 218 "./include/vlc_threads.h"
# 1 "/usr/include/unistd.h" 1 3 4
# 72 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/unistd.h" 1 3 4
# 84 "/usr/include/sys/unistd.h" 3 4
# 1 "/usr/include/sys/_types/_posix_vdisable.h" 1 3 4
# 85 "/usr/include/sys/unistd.h" 2 3 4
# 122 "/usr/include/sys/unistd.h" 3 4
# 1 "/usr/include/sys/_types/_seek_set.h" 1 3 4
# 123 "/usr/include/sys/unistd.h" 2 3 4
# 132 "/usr/include/sys/unistd.h" 3 4
struct accessx_descriptor {
 unsigned int ad_name_offset;
 int ad_flags;
 int ad_pad[2];
};
# 185 "/usr/include/sys/unistd.h" 3 4
int getattrlistbulk(int, void *, void *, size_t, uint64_t) __attribute__((availability(macosx,introduced=10.10)));
# 198 "/usr/include/sys/unistd.h" 3 4
# 1 "/usr/include/sys/_types/_gid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_gid_t.h" 3 4
typedef __darwin_gid_t gid_t;
# 199 "/usr/include/sys/unistd.h" 2 3 4




int faccessat(int, const char *, int, int) __attribute__((availability(macosx,introduced=10.10)));
int fchownat(int, const char *, uid_t, gid_t, int) __attribute__((availability(macosx,introduced=10.10)));
int linkat(int, const char *, int, const char *, int) __attribute__((availability(macosx,introduced=10.10)));
ssize_t readlinkat(int, const char *, char *, size_t) __attribute__((availability(macosx,introduced=10.10)));
int symlinkat(const char *, int, const char *) __attribute__((availability(macosx,introduced=10.10)));
int unlinkat(int, const char *, int) __attribute__((availability(macosx,introduced=10.10)));
int getattrlistat(int, const char *, void *, void *, size_t, unsigned long) __attribute__((availability(macosx,introduced=10.10)));
# 73 "/usr/include/unistd.h" 2 3 4
# 83 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/_types/_useconds_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_useconds_t.h" 3 4
typedef __darwin_useconds_t useconds_t;
# 84 "/usr/include/unistd.h" 2 3 4
# 424 "/usr/include/unistd.h" 3 4
void _exit(int) __attribute__((noreturn));
int access(const char *, int);
unsigned int
  alarm(unsigned int);
int chdir(const char *);
int chown(const char *, uid_t, gid_t);

int close(int) __asm("_" "close" );

int dup(int);
int dup2(int, int);
int execl(const char *, const char *, ...);
int execle(const char *, const char *, ...);
int execlp(const char *, const char *, ...);
int execv(const char *, char * const *);
int execve(const char *, char * const *, char * const *);
int execvp(const char *, char * const *);
pid_t fork(void);
long fpathconf(int, int);
char *getcwd(char *, size_t);
gid_t getegid(void);
uid_t geteuid(void);
gid_t getgid(void);



int getgroups(int, gid_t []);

char *getlogin(void);
pid_t getpgrp(void);
pid_t getpid(void);
pid_t getppid(void);
uid_t getuid(void);
int isatty(int);
int link(const char *, const char *);
off_t lseek(int, off_t, int);
long pathconf(const char *, int);

int pause(void) __asm("_" "pause" );

int pipe(int [2]);

ssize_t read(int, void *, size_t) __asm("_" "read" );

int rmdir(const char *);
int setgid(gid_t);
int setpgid(pid_t, pid_t);
pid_t setsid(void);
int setuid(uid_t);

unsigned int
  sleep(unsigned int) __asm("_" "sleep" );

long sysconf(int);
pid_t tcgetpgrp(int);
int tcsetpgrp(int, pid_t);
char *ttyname(int);


int ttyname_r(int, char *, size_t) __asm("_" "ttyname_r" );




int unlink(const char *);

ssize_t write(int, const void *, size_t) __asm("_" "write" );
# 501 "/usr/include/unistd.h" 3 4
size_t confstr(int, char *, size_t) __asm("_" "confstr" );

int getopt(int, char * const [], const char *) __asm("_" "getopt" );

extern char *optarg;
extern int optind, opterr, optopt;
# 531 "/usr/include/unistd.h" 3 4
__attribute__((deprecated))

void *brk(const void *);
int chroot(const char *) ;


char *crypt(const char *, const char *);






void encrypt(char *, int) __asm("_" "encrypt" );



int fchdir(int);
long gethostid(void);
pid_t getpgid(pid_t);
pid_t getsid(pid_t);



int getdtablesize(void) ;
int getpagesize(void) __attribute__((const)) ;
char *getpass(const char *) ;




char *getwd(char *) ;


int lchown(const char *, uid_t, gid_t) __asm("_" "lchown" );

int lockf(int, int, off_t) __asm("_" "lockf" );

int nice(int) __asm("_" "nice" );

ssize_t pread(int, void *, size_t, off_t) __asm("_" "pread" );

ssize_t pwrite(int, const void *, size_t, off_t) __asm("_" "pwrite" );






__attribute__((deprecated))

void *sbrk(int);



pid_t setpgrp(void) __asm("_" "setpgrp" );




int setregid(gid_t, gid_t) __asm("_" "setregid" );

int setreuid(uid_t, uid_t) __asm("_" "setreuid" );

void swab(const void * restrict, void * restrict, ssize_t);
void sync(void);
int truncate(const char *, off_t);
useconds_t ualarm(useconds_t, useconds_t);
int usleep(useconds_t) __asm("_" "usleep" );
pid_t vfork(void);


int fsync(int) __asm("_" "fsync" );

int ftruncate(int, off_t);
int getlogin_r(char *, size_t);
# 619 "/usr/include/unistd.h" 3 4
int fchown(int, uid_t, gid_t);
int gethostname(char *, size_t);
ssize_t readlink(const char * restrict, char * restrict, size_t);
int setegid(gid_t);
int seteuid(uid_t);
int symlink(const char *, const char *);
# 633 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 75 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/sys/_types/_fd_def.h" 1 3 4
# 46 "/usr/include/sys/_types/_fd_def.h" 3 4
typedef struct fd_set {
 __int32_t fds_bits[((((1024) % ((sizeof(__int32_t) * 8))) == 0) ? ((1024) / ((sizeof(__int32_t) * 8))) : (((1024) / ((sizeof(__int32_t) * 8))) + 1))];
} fd_set;



static __inline int
__darwin_fd_isset(int _n, const struct fd_set *_p)
{
 return (_p->fds_bits[(unsigned long)_n/(sizeof(__int32_t) * 8)] & ((__int32_t)(1<<((unsigned long)_n % (sizeof(__int32_t) * 8)))));
}
# 76 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_timespec.h" 1 3 4
# 30 "/usr/include/sys/_types/_timespec.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 77 "/usr/include/sys/select.h" 2 3 4







# 1 "/usr/include/sys/_types/_time_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 85 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_suseconds_t.h" 3 4
typedef __darwin_suseconds_t suseconds_t;
# 86 "/usr/include/sys/select.h" 2 3 4
# 100 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/sys/_types/_fd_setsize.h" 1 3 4
# 101 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_set.h" 1 3 4
# 102 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_clr.h" 1 3 4
# 103 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_isset.h" 1 3 4
# 104 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_zero.h" 1 3 4
# 105 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/sys/_types/_fd_copy.h" 1 3 4
# 108 "/usr/include/sys/select.h" 2 3 4






int pselect(int, fd_set * restrict, fd_set * restrict,
  fd_set * restrict, const struct timespec * restrict,
  const sigset_t * restrict)




  __asm("_" "pselect" "$1050")




  ;



# 1 "/usr/include/sys/_select.h" 1 3 4
# 39 "/usr/include/sys/_select.h" 3 4
int select(int, fd_set * restrict, fd_set * restrict,
  fd_set * restrict, struct timeval * restrict)




  __asm("_" "select" "$1050")




  ;
# 130 "/usr/include/sys/select.h" 2 3 4
# 634 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/sys/_types/_uuid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uuid_t.h" 3 4
typedef __darwin_uuid_t uuid_t;
# 638 "/usr/include/unistd.h" 2 3 4


void _Exit(int) __attribute__((noreturn));
int accessx_np(const struct accessx_descriptor *, size_t, int *, uid_t);
int acct(const char *);
int add_profil(char *, size_t, unsigned long, unsigned int);
void endusershell(void);
int execvP(const char *, const char *, char * const *);
char *fflagstostr(unsigned long);
int getdomainname(char *, int);
int getgrouplist(const char *, int, int *, int *);





# 1 "/usr/include/gethostuuid.h" 1 3 4
# 39 "/usr/include/gethostuuid.h" 3 4
int gethostuuid(uuid_t, const struct timespec *) __attribute__((availability(macosx,introduced=10.5)));
# 654 "/usr/include/unistd.h" 2 3 4




mode_t getmode(const void *, mode_t);
int getpeereid(int, uid_t *, gid_t *);
int getsgroups_np(int *, uuid_t);
char *getusershell(void);
int getwgroups_np(int *, uuid_t);
int initgroups(const char *, int);
int iruserok(unsigned long, int, const char *, const char *);
int iruserok_sa(const void *, int, int, const char *, const char *);
int issetugid(void);
char *mkdtemp(char *);
int mknod(const char *, mode_t, dev_t);
int mkpath_np(const char *path, mode_t omode) __attribute__((availability(macosx,introduced=10.8)));
int mkstemp(char *);
int mkstemps(char *, int);
char *mktemp(char *);
int nfssvc(int, void *);
int profil(char *, size_t, unsigned long, unsigned int);
int pthread_setugid_np(uid_t, gid_t);
int pthread_getugid_np( uid_t *, gid_t *);
int rcmd(char **, int, const char *, const char *, const char *, int *);
int rcmd_af(char **, int, const char *, const char *, const char *, int *,
  int);
int reboot(int);
int revoke(const char *);
int rresvport(int *);
int rresvport_af(int *, int);
int ruserok(const char *, int, const char *, const char *);
int setdomainname(const char *, int);
int setgroups(int, const gid_t *);
void sethostid(long);
int sethostname(const char *, int);

void setkey(const char *) __asm("_" "setkey" );



int setlogin(const char *);
void *setmode(const char *) __asm("_" "setmode" );
int setrgid(gid_t);
int setruid(uid_t);
int setsgroups_np(int, const uuid_t);
void setusershell(void);
int setwgroups_np(int, const uuid_t);
int strtofflags(char **, unsigned long *, unsigned long *);
int swapon(const char *);
int syscall(int, ...);
int ttyslot(void);
int undelete(const char *);
int unwhiteout(const char *);
void *valloc(size_t);

extern char *suboptarg;
int getsubopt(char **, char * const *, char **);



int fgetattrlist(int,void*,void*,size_t,unsigned int) __attribute__((availability(macosx,introduced=10.6)));
int fsetattrlist(int,void*,void*,size_t,unsigned int) __attribute__((availability(macosx,introduced=10.6)));
int getattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "getattrlist" );
int setattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "setattrlist" );
int exchangedata(const char*,const char*,unsigned int);
int getdirentriesattr(int,void*,void*,size_t,unsigned int*,unsigned int*,unsigned int*,unsigned int);
# 731 "/usr/include/unistd.h" 3 4
struct fssearchblock;
struct searchstate;

int searchfs(const char *, struct fssearchblock *, unsigned long *, unsigned int, unsigned int, struct searchstate *);
int fsctl(const char *,unsigned long,void*,unsigned int);
int ffsctl(int,unsigned long,void*,unsigned int) __attribute__((availability(macosx,introduced=10.6)));




int fsync_volume_np(int, int) __attribute__((availability(macosx,introduced=10.8)));
int sync_volume_np(const char *, int) __attribute__((availability(macosx,introduced=10.8)));

extern int optreset;
# 219 "./include/vlc_threads.h" 2
# 1 "/usr/include/pthread.h" 1 3 4
# 57 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/pthread/pthread_impl.h" 1 3 4
# 58 "/usr/include/pthread.h" 2 3 4

# 1 "/usr/include/pthread/sched.h" 1 3 4
# 35 "/usr/include/pthread/sched.h" 3 4
struct sched_param { int sched_priority; char __opaque[4]; };


extern int sched_yield(void);
extern int sched_get_priority_min(int);
extern int sched_get_priority_max(int);
# 60 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
# 67 "/usr/include/time.h" 3 4
# 1 "/usr/include/sys/_types/_clock_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_clock_t.h" 3 4
typedef __darwin_clock_t clock_t;
# 68 "/usr/include/time.h" 2 3 4





struct tm {
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
 long tm_gmtoff;
 char *tm_zone;
};
# 96 "/usr/include/time.h" 3 4
extern char *tzname[];


extern int getdate_err;

extern long timezone __asm("_" "timezone" );

extern int daylight;


char *asctime(const struct tm *);
clock_t clock(void) __asm("_" "clock" );
char *ctime(const time_t *);
double difftime(time_t, time_t);
struct tm *getdate(const char *);
struct tm *gmtime(const time_t *);
struct tm *localtime(const time_t *);
time_t mktime(struct tm *) __asm("_" "mktime" );
size_t strftime(char * restrict, size_t, const char * restrict, const struct tm * restrict) __asm("_" "strftime" );
char *strptime(const char * restrict, const char * restrict, struct tm * restrict) __asm("_" "strptime" );
time_t time(time_t *);


void tzset(void);



char *asctime_r(const struct tm * restrict, char * restrict);
char *ctime_r(const time_t *, char *);
struct tm *gmtime_r(const time_t * restrict, struct tm * restrict);
struct tm *localtime_r(const time_t * restrict, struct tm * restrict);


time_t posix2time(time_t);



void tzsetwall(void);
time_t time2posix(time_t);
time_t timelocal(struct tm * const);
time_t timegm(struct tm * const);



int nanosleep(const struct timespec *, struct timespec *) __asm("_" "nanosleep" );
# 61 "/usr/include/pthread.h" 2 3 4


# 1 "/usr/include/sys/_pthread/_pthread_cond_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_cond_t.h" 3 4
typedef __darwin_pthread_cond_t pthread_cond_t;
# 64 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_condattr_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_condattr_t.h" 3 4
typedef __darwin_pthread_condattr_t pthread_condattr_t;
# 65 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_key_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_key_t.h" 3 4
typedef __darwin_pthread_key_t pthread_key_t;
# 66 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_mutex_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_mutex_t.h" 3 4
typedef __darwin_pthread_mutex_t pthread_mutex_t;
# 67 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_mutexattr_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_mutexattr_t.h" 3 4
typedef __darwin_pthread_mutexattr_t pthread_mutexattr_t;
# 68 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_once_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_once_t.h" 3 4
typedef __darwin_pthread_once_t pthread_once_t;
# 69 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_rwlock_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_rwlock_t.h" 3 4
typedef __darwin_pthread_rwlock_t pthread_rwlock_t;
# 70 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_rwlockattr_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_rwlockattr_t.h" 3 4
typedef __darwin_pthread_rwlockattr_t pthread_rwlockattr_t;
# 71 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_t.h" 3 4
typedef __darwin_pthread_t pthread_t;
# 72 "/usr/include/pthread.h" 2 3 4

# 1 "/usr/include/pthread/qos.h" 1 3 4
# 32 "/usr/include/pthread/qos.h" 3 4
# 1 "/usr/include/sys/qos.h" 1 3 4
# 124 "/usr/include/sys/qos.h" 3 4
enum { QOS_CLASS_USER_INTERACTIVE __attribute__((availability(macosx,introduced=10.10))) = 0x21, QOS_CLASS_USER_INITIATED __attribute__((availability(macosx,introduced=10.10))) = 0x19, QOS_CLASS_DEFAULT __attribute__((availability(macosx,introduced=10.10))) = 0x15, QOS_CLASS_UTILITY __attribute__((availability(macosx,introduced=10.10))) = 0x11, QOS_CLASS_BACKGROUND __attribute__((availability(macosx,introduced=10.10))) = 0x09, QOS_CLASS_UNSPECIFIED __attribute__((availability(macosx,introduced=10.10))) = 0x00, }; typedef unsigned int qos_class_t;
# 164 "/usr/include/sys/qos.h" 3 4
__attribute__((availability(macosx,introduced=10.10)))
qos_class_t
qos_class_self(void);
# 186 "/usr/include/sys/qos.h" 3 4
__attribute__((availability(macosx,introduced=10.10)))
qos_class_t
qos_class_main(void);
# 33 "/usr/include/pthread/qos.h" 2 3 4
# 76 "/usr/include/pthread/qos.h" 3 4
__attribute__((availability(macosx,introduced=10.10)))
int
pthread_attr_set_qos_class_np(pthread_attr_t *__attr,
  qos_class_t __qos_class, int __relative_priority);
# 107 "/usr/include/pthread/qos.h" 3 4
__attribute__((availability(macosx,introduced=10.10)))
int
pthread_attr_get_qos_class_np(pthread_attr_t * restrict __attr,
  qos_class_t * restrict __qos_class,
  int * restrict __relative_priority);
# 148 "/usr/include/pthread/qos.h" 3 4
__attribute__((availability(macosx,introduced=10.10)))
int
pthread_set_qos_class_self_np(qos_class_t __qos_class,
  int __relative_priority);
# 179 "/usr/include/pthread/qos.h" 3 4
__attribute__((availability(macosx,introduced=10.10)))
int
pthread_get_qos_class_np(pthread_t __pthread,
  qos_class_t * restrict __qos_class,
  int * restrict __relative_priority);
# 206 "/usr/include/pthread/qos.h" 3 4
typedef struct pthread_override_s* pthread_override_t;
# 258 "/usr/include/pthread/qos.h" 3 4
__attribute__((availability(macosx,introduced=10.10)))
pthread_override_t
pthread_override_qos_class_start_np(pthread_t __pthread,
  qos_class_t __qos_class, int __relative_priority);
# 286 "/usr/include/pthread/qos.h" 3 4
__attribute__((availability(macosx,introduced=10.10)))
int
pthread_override_qos_class_end_np(pthread_override_t __override);
# 74 "/usr/include/pthread.h" 2 3 4



# 1 "/usr/include/sys/_types/_mach_port_t.h" 1 3 4
# 49 "/usr/include/sys/_types/_mach_port_t.h" 3 4
typedef __darwin_mach_port_t mach_port_t;
# 78 "/usr/include/pthread.h" 2 3 4
# 209 "/usr/include/pthread.h" 3 4
__attribute__((availability(macosx,introduced=10.4)))
int pthread_atfork(void (*)(void), void (*)(void), void (*)(void));

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_destroy(pthread_attr_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_getdetachstate(const pthread_attr_t *, int *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_getguardsize(const pthread_attr_t * restrict, size_t * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_getinheritsched(const pthread_attr_t * restrict, int * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_getschedparam(const pthread_attr_t * restrict,
  struct sched_param * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_getschedpolicy(const pthread_attr_t * restrict, int * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_getscope(const pthread_attr_t * restrict, int * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_getstack(const pthread_attr_t * restrict, void ** restrict,
  size_t * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_getstackaddr(const pthread_attr_t * restrict, void ** restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_getstacksize(const pthread_attr_t * restrict, size_t * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_init(pthread_attr_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_setdetachstate(pthread_attr_t *, int);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_setguardsize(pthread_attr_t *, size_t);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_setinheritsched(pthread_attr_t *, int);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_setschedparam(pthread_attr_t * restrict,
  const struct sched_param * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_setschedpolicy(pthread_attr_t *, int);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_setscope(pthread_attr_t *, int);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_setstack(pthread_attr_t *, void *, size_t);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_setstackaddr(pthread_attr_t *, void *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_setstacksize(pthread_attr_t *, size_t);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_cancel(pthread_t) __asm("_" "pthread_cancel" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_cond_broadcast(pthread_cond_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_cond_destroy(pthread_cond_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_cond_init(pthread_cond_t * restrict,
  const pthread_condattr_t * restrict) __asm("_" "pthread_cond_init" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_cond_signal(pthread_cond_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_cond_timedwait(pthread_cond_t * restrict, pthread_mutex_t * restrict,
  const struct timespec * restrict) __asm("_" "pthread_cond_timedwait" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_cond_wait(pthread_cond_t * restrict,
  pthread_mutex_t * restrict) __asm("_" "pthread_cond_wait" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_condattr_destroy(pthread_condattr_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_condattr_init(pthread_condattr_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_condattr_getpshared(const pthread_condattr_t * restrict,
  int * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_condattr_setpshared(pthread_condattr_t *, int);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_create(pthread_t * restrict, const pthread_attr_t * restrict,
  void *(*)(void *), void * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_detach(pthread_t);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_equal(pthread_t, pthread_t);

__attribute__((availability(macosx,introduced=10.4)))
void pthread_exit(void *) __attribute__((noreturn));

__attribute__((availability(macosx,introduced=10.4)))
int pthread_getconcurrency(void);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_getschedparam(pthread_t , int * restrict,
  struct sched_param * restrict);

__attribute__((availability(macosx,introduced=10.4)))
void* pthread_getspecific(pthread_key_t);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_join(pthread_t , void **) __asm("_" "pthread_join" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_key_create(pthread_key_t *, void (*)(void *));

__attribute__((availability(macosx,introduced=10.4)))
int pthread_key_delete(pthread_key_t);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutex_destroy(pthread_mutex_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutex_getprioceiling(const pthread_mutex_t * restrict,
  int * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutex_init(pthread_mutex_t * restrict,
  const pthread_mutexattr_t * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutex_lock(pthread_mutex_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutex_setprioceiling(pthread_mutex_t * restrict, int,
  int * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutex_trylock(pthread_mutex_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutex_unlock(pthread_mutex_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutexattr_destroy(pthread_mutexattr_t *) __asm("_" "pthread_mutexattr_destroy" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutexattr_getprioceiling(const pthread_mutexattr_t * restrict,
  int * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutexattr_getprotocol(const pthread_mutexattr_t * restrict,
  int * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutexattr_getpshared(const pthread_mutexattr_t * restrict,
  int * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutexattr_gettype(const pthread_mutexattr_t * restrict,
  int * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutexattr_init(pthread_mutexattr_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutexattr_setprioceiling(pthread_mutexattr_t *, int);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutexattr_setprotocol(pthread_mutexattr_t *, int);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutexattr_setpshared(pthread_mutexattr_t *, int);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutexattr_settype(pthread_mutexattr_t *, int);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_once(pthread_once_t *, void (*)(void));

__attribute__((availability(macosx,introduced=10.4)))
int pthread_rwlock_destroy(pthread_rwlock_t * ) __asm("_" "pthread_rwlock_destroy" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_rwlock_init(pthread_rwlock_t * restrict,
  const pthread_rwlockattr_t * restrict) __asm("_" "pthread_rwlock_init" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_rwlock_rdlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_rdlock" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_rwlock_tryrdlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_tryrdlock" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_rwlock_trywrlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_trywrlock" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_rwlock_wrlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_wrlock" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_rwlock_unlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_unlock" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_rwlockattr_destroy(pthread_rwlockattr_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_rwlockattr_getpshared(const pthread_rwlockattr_t * restrict,
  int * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_rwlockattr_init(pthread_rwlockattr_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_rwlockattr_setpshared(pthread_rwlockattr_t *, int);

__attribute__((availability(macosx,introduced=10.4)))
pthread_t pthread_self(void);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_setcancelstate(int , int *) __asm("_" "pthread_setcancelstate" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_setcanceltype(int , int *) __asm("_" "pthread_setcanceltype" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_setconcurrency(int);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_setschedparam(pthread_t, int, const struct sched_param *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_setspecific(pthread_key_t , const void *);

__attribute__((availability(macosx,introduced=10.4)))
void pthread_testcancel(void) __asm("_" "pthread_testcancel" );




__attribute__((availability(macosx,introduced=10.4)))
int pthread_is_threaded_np(void);

__attribute__((availability(macosx,introduced=10.6)))
int pthread_threadid_np(pthread_t,__uint64_t*);


__attribute__((availability(macosx,introduced=10.6)))
int pthread_getname_np(pthread_t,char*,size_t);

__attribute__((availability(macosx,introduced=10.6)))
int pthread_setname_np(const char*);


__attribute__((availability(macosx,introduced=10.4)))
int pthread_main_np(void);


__attribute__((availability(macosx,introduced=10.4)))
mach_port_t pthread_mach_thread_np(pthread_t);

__attribute__((availability(macosx,introduced=10.4)))
size_t pthread_get_stacksize_np(pthread_t);

__attribute__((availability(macosx,introduced=10.4)))
void* pthread_get_stackaddr_np(pthread_t);


__attribute__((availability(macosx,introduced=10.4)))
int pthread_cond_signal_thread_np(pthread_cond_t *, pthread_t);


__attribute__((availability(macosx,introduced=10.4)))
int pthread_cond_timedwait_relative_np(pthread_cond_t *, pthread_mutex_t *,
  const struct timespec *);


__attribute__((availability(macosx,introduced=10.4)))
int pthread_create_suspended_np(pthread_t *, const pthread_attr_t *,
  void *(*)(void *), void *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_kill(pthread_t, int);

__attribute__((availability(macosx,introduced=10.5)))
pthread_t pthread_from_mach_thread_np(mach_port_t);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_sigmask(int, const sigset_t *, sigset_t *) __asm("_" "pthread_sigmask" );

__attribute__((availability(macosx,introduced=10.4)))
void pthread_yield_np(void);
# 220 "./include/vlc_threads.h" 2

# 1 "/usr/include/mach/semaphore.h" 1 3 4
# 32 "/usr/include/mach/semaphore.h" 3 4
# 1 "/usr/include/mach/port.h" 1 3 4
# 91 "/usr/include/mach/port.h" 3 4
# 1 "/usr/include/mach/boolean.h" 1 3 4
# 73 "/usr/include/mach/boolean.h" 3 4
# 1 "/usr/include/mach/machine/boolean.h" 1 3 4
# 33 "/usr/include/mach/machine/boolean.h" 3 4
# 1 "/usr/include/mach/i386/boolean.h" 1 3 4
# 69 "/usr/include/mach/i386/boolean.h" 3 4
typedef unsigned int boolean_t;
# 34 "/usr/include/mach/machine/boolean.h" 2 3 4
# 74 "/usr/include/mach/boolean.h" 2 3 4
# 92 "/usr/include/mach/port.h" 2 3 4
# 1 "/usr/include/mach/machine/vm_types.h" 1 3 4
# 33 "/usr/include/mach/machine/vm_types.h" 3 4
# 1 "/usr/include/mach/i386/vm_types.h" 1 3 4
# 73 "/usr/include/mach/i386/vm_types.h" 3 4
# 1 "/usr/include/mach/i386/vm_param.h" 1 3 4
# 74 "/usr/include/mach/i386/vm_types.h" 2 3 4
# 93 "/usr/include/mach/i386/vm_types.h" 3 4
typedef __darwin_natural_t natural_t;
typedef int integer_t;






typedef uintptr_t vm_offset_t;
# 112 "/usr/include/mach/i386/vm_types.h" 3 4
typedef uintptr_t vm_size_t;
# 124 "/usr/include/mach/i386/vm_types.h" 3 4
typedef uint64_t mach_vm_address_t;
typedef uint64_t mach_vm_offset_t;
typedef uint64_t mach_vm_size_t;

typedef uint64_t vm_map_offset_t;
typedef uint64_t vm_map_address_t;
typedef uint64_t vm_map_size_t;

typedef mach_vm_address_t mach_port_context_t;
# 34 "/usr/include/mach/machine/vm_types.h" 2 3 4
# 93 "/usr/include/mach/port.h" 2 3 4
# 106 "/usr/include/mach/port.h" 3 4
typedef natural_t mach_port_name_t;
typedef mach_port_name_t *mach_port_name_array_t;
# 130 "/usr/include/mach/port.h" 3 4
typedef mach_port_t *mach_port_array_t;
# 188 "/usr/include/mach/port.h" 3 4
typedef natural_t mach_port_right_t;
# 198 "/usr/include/mach/port.h" 3 4
typedef natural_t mach_port_type_t;
typedef mach_port_type_t *mach_port_type_array_t;
# 233 "/usr/include/mach/port.h" 3 4
typedef natural_t mach_port_urefs_t;
typedef integer_t mach_port_delta_t;



typedef natural_t mach_port_seqno_t;
typedef natural_t mach_port_mscount_t;
typedef natural_t mach_port_msgcount_t;
typedef natural_t mach_port_rights_t;






typedef unsigned int mach_port_srights_t;

typedef struct mach_port_status {
 mach_port_rights_t mps_pset;
 mach_port_seqno_t mps_seqno;
 mach_port_mscount_t mps_mscount;
 mach_port_msgcount_t mps_qlimit;
 mach_port_msgcount_t mps_msgcount;
 mach_port_rights_t mps_sorights;
 boolean_t mps_srights;
 boolean_t mps_pdrequest;
 boolean_t mps_nsrequest;
 natural_t mps_flags;
} mach_port_status_t;
# 273 "/usr/include/mach/port.h" 3 4
typedef struct mach_port_limits {
 mach_port_msgcount_t mpl_qlimit;
} mach_port_limits_t;
# 285 "/usr/include/mach/port.h" 3 4
typedef struct mach_port_info_ext {
 mach_port_status_t mpie_status;
 mach_port_msgcount_t mpie_boost_cnt;
 uint32_t reserved[6];
} mach_port_info_ext_t;

typedef integer_t *mach_port_info_t;


typedef int mach_port_flavor_t;
# 314 "/usr/include/mach/port.h" 3 4
typedef struct mach_port_qos {
 unsigned int name:1;
 unsigned int prealloc:1;
 boolean_t pad1:30;
 natural_t len;
} mach_port_qos_t;
# 340 "/usr/include/mach/port.h" 3 4
typedef struct mach_port_options {
 uint32_t flags;
 mach_port_limits_t mpl;
 uint64_t reserved[2];
}mach_port_options_t;

typedef mach_port_options_t *mach_port_options_ptr_t;
# 356 "/usr/include/mach/port.h" 3 4
enum mach_port_guard_exception_codes {
 kGUARD_EXC_DESTROY = 1u << 0,
 kGUARD_EXC_MOD_REFS = 1u << 1,
 kGUARD_EXC_SET_CONTEXT = 1u << 2,
 kGUARD_EXC_UNGUARDED = 1u << 3,
 kGUARD_EXC_INCORRECT_GUARD = 1u << 4
};
# 33 "/usr/include/mach/semaphore.h" 2 3 4
# 1 "/usr/include/mach/mach_types.h" 1 3 4
# 80 "/usr/include/mach/mach_types.h" 3 4
# 1 "/usr/include/mach/host_info.h" 1 3 4
# 68 "/usr/include/mach/host_info.h" 3 4
# 1 "/usr/include/mach/message.h" 1 3 4
# 77 "/usr/include/mach/message.h" 3 4
# 1 "/usr/include/mach/kern_return.h" 1 3 4
# 70 "/usr/include/mach/kern_return.h" 3 4
# 1 "/usr/include/mach/machine/kern_return.h" 1 3 4
# 33 "/usr/include/mach/machine/kern_return.h" 3 4
# 1 "/usr/include/mach/i386/kern_return.h" 1 3 4
# 71 "/usr/include/mach/i386/kern_return.h" 3 4
typedef int kern_return_t;
# 34 "/usr/include/mach/machine/kern_return.h" 2 3 4
# 71 "/usr/include/mach/kern_return.h" 2 3 4
# 78 "/usr/include/mach/message.h" 2 3 4
# 90 "/usr/include/mach/message.h" 3 4
typedef natural_t mach_msg_timeout_t;
# 220 "/usr/include/mach/message.h" 3 4
typedef unsigned int mach_msg_bits_t;
typedef natural_t mach_msg_size_t;
typedef integer_t mach_msg_id_t;




typedef unsigned int mach_msg_type_name_t;
# 240 "/usr/include/mach/message.h" 3 4
typedef unsigned int mach_msg_copy_options_t;
# 262 "/usr/include/mach/message.h" 3 4
typedef unsigned int mach_msg_descriptor_type_t;






#pragma pack(4)

typedef struct
{
  natural_t pad1;
  mach_msg_size_t pad2;
  unsigned int pad3 : 24;
  mach_msg_descriptor_type_t type : 8;
} mach_msg_type_descriptor_t;

typedef struct
{
  mach_port_t name;

  mach_msg_size_t pad1;
  unsigned int pad2 : 16;
  mach_msg_type_name_t disposition : 8;
  mach_msg_descriptor_type_t type : 8;
} mach_msg_port_descriptor_t;

typedef struct
{
  uint32_t address;
  mach_msg_size_t size;
  boolean_t deallocate: 8;
  mach_msg_copy_options_t copy: 8;
  unsigned int pad1: 8;
  mach_msg_descriptor_type_t type: 8;
} mach_msg_ool_descriptor32_t;

typedef struct
{
  uint64_t address;
  boolean_t deallocate: 8;
  mach_msg_copy_options_t copy: 8;
  unsigned int pad1: 8;
  mach_msg_descriptor_type_t type: 8;
  mach_msg_size_t size;
} mach_msg_ool_descriptor64_t;

typedef struct
{
  void* address;



  boolean_t deallocate: 8;
  mach_msg_copy_options_t copy: 8;
  unsigned int pad1: 8;
  mach_msg_descriptor_type_t type: 8;

  mach_msg_size_t size;

} mach_msg_ool_descriptor_t;

typedef struct
{
  uint32_t address;
  mach_msg_size_t count;
  boolean_t deallocate: 8;
  mach_msg_copy_options_t copy: 8;
  mach_msg_type_name_t disposition : 8;
  mach_msg_descriptor_type_t type : 8;
} mach_msg_ool_ports_descriptor32_t;

typedef struct
{
  uint64_t address;
  boolean_t deallocate: 8;
  mach_msg_copy_options_t copy: 8;
  mach_msg_type_name_t disposition : 8;
  mach_msg_descriptor_type_t type : 8;
  mach_msg_size_t count;
} mach_msg_ool_ports_descriptor64_t;

typedef struct
{
  void* address;



  boolean_t deallocate: 8;
  mach_msg_copy_options_t copy: 8;
  mach_msg_type_name_t disposition : 8;
  mach_msg_descriptor_type_t type : 8;

  mach_msg_size_t count;

} mach_msg_ool_ports_descriptor_t;






typedef union
{
  mach_msg_port_descriptor_t port;
  mach_msg_ool_descriptor_t out_of_line;
  mach_msg_ool_ports_descriptor_t ool_ports;
  mach_msg_type_descriptor_t type;
} mach_msg_descriptor_t;

typedef struct
{
        mach_msg_size_t msgh_descriptor_count;
} mach_msg_body_t;




typedef struct
{
  mach_msg_bits_t msgh_bits;
  mach_msg_size_t msgh_size;
  mach_port_t msgh_remote_port;
  mach_port_t msgh_local_port;
  mach_port_name_t msgh_voucher_port;
  mach_msg_id_t msgh_id;
} mach_msg_header_t;




typedef struct
{
        mach_msg_header_t header;
        mach_msg_body_t body;
} mach_msg_base_t;

typedef unsigned int mach_msg_trailer_type_t;



typedef unsigned int mach_msg_trailer_size_t;
typedef char *mach_msg_trailer_info_t;

typedef struct
{
  mach_msg_trailer_type_t msgh_trailer_type;
  mach_msg_trailer_size_t msgh_trailer_size;
} mach_msg_trailer_t;
# 421 "/usr/include/mach/message.h" 3 4
typedef struct
{
  mach_msg_trailer_type_t msgh_trailer_type;
  mach_msg_trailer_size_t msgh_trailer_size;
  mach_port_seqno_t msgh_seqno;
} mach_msg_seqno_trailer_t;

typedef struct
{
  unsigned int val[2];
} security_token_t;

typedef struct
{
  mach_msg_trailer_type_t msgh_trailer_type;
  mach_msg_trailer_size_t msgh_trailer_size;
  mach_port_seqno_t msgh_seqno;
  security_token_t msgh_sender;
} mach_msg_security_trailer_t;
# 450 "/usr/include/mach/message.h" 3 4
typedef struct
{
  unsigned int val[8];
} audit_token_t;

typedef struct
{
  mach_msg_trailer_type_t msgh_trailer_type;
  mach_msg_trailer_size_t msgh_trailer_size;
  mach_port_seqno_t msgh_seqno;
  security_token_t msgh_sender;
  audit_token_t msgh_audit;
} mach_msg_audit_trailer_t;

typedef struct
{
  mach_msg_trailer_type_t msgh_trailer_type;
  mach_msg_trailer_size_t msgh_trailer_size;
  mach_port_seqno_t msgh_seqno;
  security_token_t msgh_sender;
  audit_token_t msgh_audit;
  mach_port_context_t msgh_context;
} mach_msg_context_trailer_t;



typedef struct
{
  mach_port_name_t sender;
} msg_labels_t;






typedef struct
{
  mach_msg_trailer_type_t msgh_trailer_type;
  mach_msg_trailer_size_t msgh_trailer_size;
  mach_port_seqno_t msgh_seqno;
  security_token_t msgh_sender;
  audit_token_t msgh_audit;
  mach_port_context_t msgh_context;
  int msgh_ad;
  msg_labels_t msgh_labels;
} mach_msg_mac_trailer_t;
# 511 "/usr/include/mach/message.h" 3 4
typedef mach_msg_mac_trailer_t mach_msg_max_trailer_t;
# 521 "/usr/include/mach/message.h" 3 4
typedef mach_msg_security_trailer_t mach_msg_format_0_trailer_t;







extern security_token_t KERNEL_SECURITY_TOKEN;


extern audit_token_t KERNEL_AUDIT_TOKEN;

typedef integer_t mach_msg_options_t;

typedef struct
{
  mach_msg_header_t header;
} mach_msg_empty_send_t;

typedef struct
{
  mach_msg_header_t header;
  mach_msg_trailer_t trailer;
} mach_msg_empty_rcv_t;

typedef union
{
  mach_msg_empty_send_t send;
  mach_msg_empty_rcv_t rcv;
} mach_msg_empty_t;

#pragma pack()
# 584 "/usr/include/mach/message.h" 3 4
typedef natural_t mach_msg_type_size_t;
typedef natural_t mach_msg_type_number_t;
# 628 "/usr/include/mach/message.h" 3 4
typedef integer_t mach_msg_option_t;
# 717 "/usr/include/mach/message.h" 3 4
typedef kern_return_t mach_msg_return_t;
# 821 "/usr/include/mach/message.h" 3 4
extern mach_msg_return_t mach_msg_overwrite(
     mach_msg_header_t *msg,
     mach_msg_option_t option,
     mach_msg_size_t send_size,
     mach_msg_size_t rcv_size,
     mach_port_name_t rcv_name,
     mach_msg_timeout_t timeout,
     mach_port_name_t notify,
     mach_msg_header_t *rcv_msg,
     mach_msg_size_t rcv_limit);
# 841 "/usr/include/mach/message.h" 3 4
extern mach_msg_return_t mach_msg(
     mach_msg_header_t *msg,
     mach_msg_option_t option,
     mach_msg_size_t send_size,
     mach_msg_size_t rcv_size,
     mach_port_name_t rcv_name,
     mach_msg_timeout_t timeout,
     mach_port_name_t notify);







extern kern_return_t mach_voucher_deallocate(
     mach_port_name_t voucher);
# 69 "/usr/include/mach/host_info.h" 2 3 4
# 1 "/usr/include/mach/vm_statistics.h" 1 3 4
# 84 "/usr/include/mach/vm_statistics.h" 3 4
struct vm_statistics {
 natural_t free_count;
 natural_t active_count;
 natural_t inactive_count;
 natural_t wire_count;
 natural_t zero_fill_count;
 natural_t reactivations;
 natural_t pageins;
 natural_t pageouts;
 natural_t faults;
 natural_t cow_faults;
 natural_t lookups;
 natural_t hits;


 natural_t purgeable_count;
 natural_t purges;
# 109 "/usr/include/mach/vm_statistics.h" 3 4
 natural_t speculative_count;
};


typedef struct vm_statistics *vm_statistics_t;
typedef struct vm_statistics vm_statistics_data_t;
# 132 "/usr/include/mach/vm_statistics.h" 3 4
struct vm_statistics64 {
 natural_t free_count;
 natural_t active_count;
 natural_t inactive_count;
 natural_t wire_count;
 uint64_t zero_fill_count;
 uint64_t reactivations;
 uint64_t pageins;
 uint64_t pageouts;
 uint64_t faults;
 uint64_t cow_faults;
 uint64_t lookups;
 uint64_t hits;
 uint64_t purges;
 natural_t purgeable_count;






 natural_t speculative_count;


 uint64_t decompressions;
 uint64_t compressions;
 uint64_t swapins;
 uint64_t swapouts;
 natural_t compressor_page_count;
 natural_t throttled_count;
 natural_t external_page_count;
 natural_t internal_page_count;
 uint64_t total_uncompressed_pages_in_compressor;
} __attribute__((aligned(8)));

typedef struct vm_statistics64 *vm_statistics64_t;
typedef struct vm_statistics64 vm_statistics64_data_t;
# 188 "/usr/include/mach/vm_statistics.h" 3 4
struct vm_extmod_statistics {
 int64_t task_for_pid_count;
 int64_t task_for_pid_caller_count;
 int64_t thread_creation_count;
 int64_t thread_creation_caller_count;
 int64_t thread_set_state_count;
 int64_t thread_set_state_caller_count;
} __attribute__((aligned(8)));

typedef struct vm_extmod_statistics *vm_extmod_statistics_t;
typedef struct vm_extmod_statistics vm_extmod_statistics_data_t;

typedef struct vm_purgeable_stat {
 uint64_t count;
 uint64_t size;
}vm_purgeable_stat_t;

struct vm_purgeable_info {
 vm_purgeable_stat_t fifo_data[8];
 vm_purgeable_stat_t obsolete_data;
 vm_purgeable_stat_t lifo_data[8];
};

typedef struct vm_purgeable_info *vm_purgeable_info_t;
# 70 "/usr/include/mach/host_info.h" 2 3 4
# 1 "/usr/include/mach/machine.h" 1 3 4
# 69 "/usr/include/mach/machine.h" 3 4
typedef integer_t cpu_type_t;
typedef integer_t cpu_subtype_t;
typedef integer_t cpu_threadtype_t;
# 71 "/usr/include/mach/host_info.h" 2 3 4

# 1 "/usr/include/mach/time_value.h" 1 3 4
# 66 "/usr/include/mach/time_value.h" 3 4
struct time_value {
 integer_t seconds;
 integer_t microseconds;
};

typedef struct time_value time_value_t;
# 73 "/usr/include/mach/host_info.h" 2 3 4






typedef integer_t *host_info_t;
typedef integer_t *host_info64_t;


typedef integer_t host_info_data_t[(1024)];


typedef char kernel_version_t[(512)];


typedef char kernel_boot_info_t[(4096)];





typedef integer_t host_flavor_t;
# 105 "/usr/include/mach/host_info.h" 3 4
#pragma pack(4)

struct host_basic_info {
 integer_t max_cpus;
 integer_t avail_cpus;
 natural_t memory_size;
 cpu_type_t cpu_type;
 cpu_subtype_t cpu_subtype;
 cpu_threadtype_t cpu_threadtype;
 integer_t physical_cpu;
 integer_t physical_cpu_max;
 integer_t logical_cpu;
 integer_t logical_cpu_max;
 uint64_t max_mem;
};

#pragma pack()

typedef struct host_basic_info host_basic_info_data_t;
typedef struct host_basic_info *host_basic_info_t;



struct host_sched_info {
 integer_t min_timeout;
 integer_t min_quantum;
};

typedef struct host_sched_info host_sched_info_data_t;
typedef struct host_sched_info *host_sched_info_t;



struct kernel_resource_sizes {
 natural_t task;
        natural_t thread;
        natural_t port;
        natural_t memory_region;
        natural_t memory_object;
};

typedef struct kernel_resource_sizes kernel_resource_sizes_data_t;
typedef struct kernel_resource_sizes *kernel_resource_sizes_t;



struct host_priority_info {
     integer_t kernel_priority;
     integer_t system_priority;
     integer_t server_priority;
     integer_t user_priority;
     integer_t depress_priority;
     integer_t idle_priority;
     integer_t minimum_priority;
 integer_t maximum_priority;
};

typedef struct host_priority_info host_priority_info_data_t;
typedef struct host_priority_info *host_priority_info_t;
# 178 "/usr/include/mach/host_info.h" 3 4
struct host_load_info {
 integer_t avenrun[3];
 integer_t mach_factor[3];
};

typedef struct host_load_info host_load_info_data_t;
typedef struct host_load_info *host_load_info_t;



typedef struct vm_purgeable_info host_purgable_info_data_t;
typedef struct vm_purgeable_info *host_purgable_info_t;
# 229 "/usr/include/mach/host_info.h" 3 4
struct host_cpu_load_info {
 natural_t cpu_ticks[4];
};

typedef struct host_cpu_load_info host_cpu_load_info_data_t;
typedef struct host_cpu_load_info *host_cpu_load_info_t;
# 81 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/host_notify.h" 1 3 4
# 82 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/host_special_ports.h" 1 3 4
# 83 "/usr/include/mach/mach_types.h" 2 3 4


# 1 "/usr/include/mach/memory_object_types.h" 1 3 4
# 75 "/usr/include/mach/memory_object_types.h" 3 4
# 1 "/usr/include/mach/vm_prot.h" 1 3 4
# 75 "/usr/include/mach/vm_prot.h" 3 4
typedef int vm_prot_t;
# 76 "/usr/include/mach/memory_object_types.h" 2 3 4
# 1 "/usr/include/mach/vm_sync.h" 1 3 4
# 66 "/usr/include/mach/vm_sync.h" 3 4
typedef unsigned vm_sync_t;
# 77 "/usr/include/mach/memory_object_types.h" 2 3 4
# 1 "/usr/include/mach/vm_types.h" 1 3 4
# 40 "/usr/include/mach/vm_types.h" 3 4
typedef vm_offset_t pointer_t;
typedef vm_offset_t vm_address_t;







typedef uint64_t addr64_t;
# 61 "/usr/include/mach/vm_types.h" 3 4
typedef uint32_t reg64_t;






typedef uint32_t ppnum_t;




typedef mach_port_t vm_map_t;
# 82 "/usr/include/mach/vm_types.h" 3 4
typedef uint64_t vm_object_offset_t;
typedef uint64_t vm_object_size_t;


typedef mach_port_t upl_t;
typedef mach_port_t vm_named_entry_t;
# 78 "/usr/include/mach/memory_object_types.h" 2 3 4






typedef unsigned long long memory_object_offset_t;
typedef unsigned long long memory_object_size_t;
typedef natural_t memory_object_cluster_size_t;
typedef natural_t * memory_object_fault_info_t;

typedef unsigned long long vm_object_id_t;







typedef mach_port_t memory_object_t;
typedef mach_port_t memory_object_control_t;


typedef memory_object_t *memory_object_array_t;




typedef mach_port_t memory_object_name_t;



typedef mach_port_t memory_object_default_t;
# 120 "/usr/include/mach/memory_object_types.h" 3 4
typedef int memory_object_copy_strategy_t;
# 156 "/usr/include/mach/memory_object_types.h" 3 4
typedef int memory_object_return_t;
# 185 "/usr/include/mach/memory_object_types.h" 3 4
typedef int *memory_object_info_t;
typedef int memory_object_flavor_t;
typedef int memory_object_info_data_t[(1024)];







struct memory_object_perf_info {
 memory_object_cluster_size_t cluster_size;
 boolean_t may_cache;
};

struct memory_object_attr_info {
 memory_object_copy_strategy_t copy_strategy;
 memory_object_cluster_size_t cluster_size;
 boolean_t may_cache_object;
 boolean_t temporary;
};

struct memory_object_behave_info {
 memory_object_copy_strategy_t copy_strategy;
 boolean_t temporary;
 boolean_t invalidate;
 boolean_t silent_overwrite;
 boolean_t advisory_pageout;
};


typedef struct memory_object_behave_info *memory_object_behave_info_t;
typedef struct memory_object_behave_info memory_object_behave_info_data_t;

typedef struct memory_object_perf_info *memory_object_perf_info_t;
typedef struct memory_object_perf_info memory_object_perf_info_data_t;

typedef struct memory_object_attr_info *memory_object_attr_info_t;
typedef struct memory_object_attr_info memory_object_attr_info_data_t;
# 86 "/usr/include/mach/mach_types.h" 2 3 4

# 1 "/usr/include/mach/exception_types.h" 1 3 4
# 62 "/usr/include/mach/exception_types.h" 3 4
# 1 "/usr/include/mach/machine/exception.h" 1 3 4
# 33 "/usr/include/mach/machine/exception.h" 3 4
# 1 "/usr/include/mach/i386/exception.h" 1 3 4
# 34 "/usr/include/mach/machine/exception.h" 2 3 4
# 63 "/usr/include/mach/exception_types.h" 2 3 4
# 173 "/usr/include/mach/exception_types.h" 3 4
# 1 "/usr/include/mach/thread_status.h" 1 3 4
# 76 "/usr/include/mach/thread_status.h" 3 4
# 1 "/usr/include/mach/machine/thread_status.h" 1 3 4
# 33 "/usr/include/mach/machine/thread_status.h" 3 4
# 1 "/usr/include/mach/i386/thread_status.h" 1 3 4
# 72 "/usr/include/mach/i386/thread_status.h" 3 4
# 1 "/usr/include/mach/i386/fp_reg.h" 1 3 4
# 73 "/usr/include/mach/i386/thread_status.h" 2 3 4
# 1 "/usr/include/mach/i386/thread_state.h" 1 3 4
# 74 "/usr/include/mach/i386/thread_status.h" 2 3 4
# 1 "/usr/include/i386/eflags.h" 1 3 4
# 75 "/usr/include/mach/i386/thread_status.h" 2 3 4
# 149 "/usr/include/mach/i386/thread_status.h" 3 4
struct x86_state_hdr {
 int flavor;
 int count;
};
typedef struct x86_state_hdr x86_state_hdr_t;
# 167 "/usr/include/mach/i386/thread_status.h" 3 4
typedef struct __darwin_i386_thread_state i386_thread_state_t;



typedef struct __darwin_i386_thread_state x86_thread_state32_t;






typedef struct __darwin_i386_float_state i386_float_state_t;



typedef struct __darwin_i386_float_state x86_float_state32_t;



typedef struct __darwin_i386_avx_state x86_avx_state32_t;






typedef struct __darwin_i386_exception_state i386_exception_state_t;



typedef struct __darwin_i386_exception_state x86_exception_state32_t;





typedef struct __darwin_x86_debug_state32 x86_debug_state32_t;





typedef struct __darwin_x86_thread_state64 x86_thread_state64_t;



typedef struct __darwin_x86_float_state64 x86_float_state64_t;



typedef struct __darwin_x86_avx_state64 x86_avx_state64_t;



typedef struct __darwin_x86_exception_state64 x86_exception_state64_t;





typedef struct __darwin_x86_debug_state64 x86_debug_state64_t;
# 236 "/usr/include/mach/i386/thread_status.h" 3 4
struct x86_thread_state {
 x86_state_hdr_t tsh;
 union {
     x86_thread_state32_t ts32;
     x86_thread_state64_t ts64;
 } uts;
};

struct x86_float_state {
 x86_state_hdr_t fsh;
 union {
  x86_float_state32_t fs32;
  x86_float_state64_t fs64;
 } ufs;
};

struct x86_exception_state {
 x86_state_hdr_t esh;
 union {
  x86_exception_state32_t es32;
  x86_exception_state64_t es64;
 } ues;
};

struct x86_debug_state {
 x86_state_hdr_t dsh;
 union {
  x86_debug_state32_t ds32;
  x86_debug_state64_t ds64;
 } uds;
};

struct x86_avx_state {
 x86_state_hdr_t ash;
 union {
  x86_avx_state32_t as32;
  x86_avx_state64_t as64;
 } ufs;
};

typedef struct x86_thread_state x86_thread_state_t;



typedef struct x86_float_state x86_float_state_t;



typedef struct x86_exception_state x86_exception_state_t;



typedef struct x86_debug_state x86_debug_state_t;



typedef struct x86_avx_state x86_avx_state_t;
# 34 "/usr/include/mach/machine/thread_status.h" 2 3 4
# 77 "/usr/include/mach/thread_status.h" 2 3 4
# 1 "/usr/include/mach/machine/thread_state.h" 1 3 4
# 78 "/usr/include/mach/thread_status.h" 2 3 4





typedef natural_t *thread_state_t;


typedef natural_t thread_state_data_t[(224)];





typedef int thread_state_flavor_t;
typedef thread_state_flavor_t *thread_state_flavor_array_t;
# 174 "/usr/include/mach/exception_types.h" 2 3 4





typedef int exception_type_t;
typedef integer_t exception_data_type_t;
typedef int64_t mach_exception_data_type_t;
typedef int exception_behavior_t;
typedef exception_data_type_t *exception_data_t;
typedef mach_exception_data_type_t *mach_exception_data_t;
typedef unsigned int exception_mask_t;
typedef exception_mask_t *exception_mask_array_t;
typedef exception_behavior_t *exception_behavior_array_t;
typedef thread_state_flavor_t *exception_flavor_array_t;
typedef mach_port_t *exception_port_array_t;
typedef mach_exception_data_type_t mach_exception_code_t;
typedef mach_exception_data_type_t mach_exception_subcode_t;
# 88 "/usr/include/mach/mach_types.h" 2 3 4

# 1 "/usr/include/mach/mach_voucher_types.h" 1 3 4
# 32 "/usr/include/mach/mach_voucher_types.h" 3 4
# 1 "/usr/include/mach/std_types.h" 1 3 4
# 33 "/usr/include/mach/mach_voucher_types.h" 2 3 4
# 53 "/usr/include/mach/mach_voucher_types.h" 3 4
typedef mach_port_t mach_voucher_t;


typedef mach_port_name_t mach_voucher_name_t;


typedef mach_voucher_name_t *mach_voucher_name_array_t;






typedef mach_voucher_t ipc_voucher_t;







typedef uint32_t mach_voucher_selector_t;
# 84 "/usr/include/mach/mach_voucher_types.h" 3 4
typedef uint32_t mach_voucher_attr_key_t;
typedef mach_voucher_attr_key_t *mach_voucher_attr_key_array_t;
# 108 "/usr/include/mach/mach_voucher_types.h" 3 4
typedef uint8_t *mach_voucher_attr_content_t;
typedef uint32_t mach_voucher_attr_content_size_t;





typedef uint32_t mach_voucher_attr_command_t;
# 125 "/usr/include/mach/mach_voucher_types.h" 3 4
typedef uint32_t mach_voucher_attr_recipe_command_t;
typedef mach_voucher_attr_recipe_command_t *mach_voucher_attr_recipe_command_array_t;
# 151 "/usr/include/mach/mach_voucher_types.h" 3 4
#pragma pack(1)

typedef struct mach_voucher_attr_recipe_data {
 mach_voucher_attr_key_t key;
 mach_voucher_attr_recipe_command_t command;
 mach_voucher_name_t previous_voucher;
 mach_voucher_attr_content_size_t content_size;
 uint8_t content[];
} mach_voucher_attr_recipe_data_t;
typedef mach_voucher_attr_recipe_data_t *mach_voucher_attr_recipe_t;
typedef mach_msg_type_number_t mach_voucher_attr_recipe_size_t;


typedef uint8_t *mach_voucher_attr_raw_recipe_t;
typedef mach_voucher_attr_raw_recipe_t mach_voucher_attr_raw_recipe_array_t;
typedef mach_msg_type_number_t mach_voucher_attr_raw_recipe_size_t;
typedef mach_msg_type_number_t mach_voucher_attr_raw_recipe_array_size_t;

#pragma pack()
# 181 "/usr/include/mach/mach_voucher_types.h" 3 4
typedef mach_port_t mach_voucher_attr_manager_t;
# 190 "/usr/include/mach/mach_voucher_types.h" 3 4
typedef mach_port_t mach_voucher_attr_control_t;







typedef mach_port_t ipc_voucher_attr_manager_t;
typedef mach_port_t ipc_voucher_attr_control_t;
# 209 "/usr/include/mach/mach_voucher_types.h" 3 4
typedef uint64_t mach_voucher_attr_value_handle_t;
typedef mach_voucher_attr_value_handle_t *mach_voucher_attr_value_handle_array_t;

typedef mach_msg_type_number_t mach_voucher_attr_value_handle_array_size_t;


typedef uint32_t mach_voucher_attr_value_reference_t;


typedef uint32_t mach_voucher_attr_control_flags_t;
# 229 "/usr/include/mach/mach_voucher_types.h" 3 4
typedef uint32_t mach_voucher_attr_importance_refs;
# 90 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/processor_info.h" 1 3 4
# 72 "/usr/include/mach/processor_info.h" 3 4
# 1 "/usr/include/mach/machine/processor_info.h" 1 3 4
# 33 "/usr/include/mach/machine/processor_info.h" 3 4
# 1 "/usr/include/mach/i386/processor_info.h" 1 3 4
# 34 "/usr/include/mach/machine/processor_info.h" 2 3 4
# 73 "/usr/include/mach/processor_info.h" 2 3 4




typedef integer_t *processor_info_t;
typedef integer_t *processor_info_array_t;


typedef integer_t processor_info_data_t[(1024)];


typedef integer_t *processor_set_info_t;


typedef integer_t processor_set_info_data_t[(1024)];




typedef int processor_flavor_t;





struct processor_basic_info {
 cpu_type_t cpu_type;
 cpu_subtype_t cpu_subtype;
 boolean_t running;
 int slot_num;
 boolean_t is_master;
};

typedef struct processor_basic_info processor_basic_info_data_t;
typedef struct processor_basic_info *processor_basic_info_t;



struct processor_cpu_load_info {
        unsigned int cpu_ticks[4];
};

typedef struct processor_cpu_load_info processor_cpu_load_info_data_t;
typedef struct processor_cpu_load_info *processor_cpu_load_info_t;
# 125 "/usr/include/mach/processor_info.h" 3 4
typedef int processor_set_flavor_t;


struct processor_set_basic_info {
 int processor_count;
 int default_policy;
};

typedef struct processor_set_basic_info processor_set_basic_info_data_t;
typedef struct processor_set_basic_info *processor_set_basic_info_t;





struct processor_set_load_info {
        int task_count;
        int thread_count;
        integer_t load_average;
        integer_t mach_factor;
};

typedef struct processor_set_load_info processor_set_load_info_data_t;
typedef struct processor_set_load_info *processor_set_load_info_t;
# 91 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/task_info.h" 1 3 4
# 71 "/usr/include/mach/task_info.h" 3 4
# 1 "/usr/include/mach/policy.h" 1 3 4
# 79 "/usr/include/mach/policy.h" 3 4
typedef int policy_t;
typedef integer_t *policy_info_t;
typedef integer_t *policy_base_t;
typedef integer_t *policy_limit_t;
# 113 "/usr/include/mach/policy.h" 3 4
struct policy_timeshare_base {
 integer_t base_priority;
};
struct policy_timeshare_limit {
 integer_t max_priority;
};
struct policy_timeshare_info {
 integer_t max_priority;
 integer_t base_priority;
 integer_t cur_priority;
 boolean_t depressed;
 integer_t depress_priority;
};

typedef struct policy_timeshare_base *policy_timeshare_base_t;
typedef struct policy_timeshare_limit *policy_timeshare_limit_t;
typedef struct policy_timeshare_info *policy_timeshare_info_t;

typedef struct policy_timeshare_base policy_timeshare_base_data_t;
typedef struct policy_timeshare_limit policy_timeshare_limit_data_t;
typedef struct policy_timeshare_info policy_timeshare_info_data_t;
# 147 "/usr/include/mach/policy.h" 3 4
struct policy_rr_base {
 integer_t base_priority;
 integer_t quantum;
};
struct policy_rr_limit {
 integer_t max_priority;
};
struct policy_rr_info {
 integer_t max_priority;
 integer_t base_priority;
 integer_t quantum;
 boolean_t depressed;
 integer_t depress_priority;
};

typedef struct policy_rr_base *policy_rr_base_t;
typedef struct policy_rr_limit *policy_rr_limit_t;
typedef struct policy_rr_info *policy_rr_info_t;

typedef struct policy_rr_base policy_rr_base_data_t;
typedef struct policy_rr_limit policy_rr_limit_data_t;
typedef struct policy_rr_info policy_rr_info_data_t;
# 181 "/usr/include/mach/policy.h" 3 4
struct policy_fifo_base {
 integer_t base_priority;
};
struct policy_fifo_limit {
 integer_t max_priority;
};
struct policy_fifo_info {
 integer_t max_priority;
 integer_t base_priority;
 boolean_t depressed;
 integer_t depress_priority;
};

typedef struct policy_fifo_base *policy_fifo_base_t;
typedef struct policy_fifo_limit *policy_fifo_limit_t;
typedef struct policy_fifo_info *policy_fifo_info_t;

typedef struct policy_fifo_base policy_fifo_base_data_t;
typedef struct policy_fifo_limit policy_fifo_limit_data_t;
typedef struct policy_fifo_info policy_fifo_info_data_t;
# 213 "/usr/include/mach/policy.h" 3 4
struct policy_bases {
 policy_timeshare_base_data_t ts;
 policy_rr_base_data_t rr;
 policy_fifo_base_data_t fifo;
};

struct policy_limits {
 policy_timeshare_limit_data_t ts;
 policy_rr_limit_data_t rr;
 policy_fifo_limit_data_t fifo;
};

struct policy_infos {
 policy_timeshare_info_data_t ts;
 policy_rr_info_data_t rr;
 policy_fifo_info_data_t fifo;
};

typedef struct policy_bases policy_base_data_t;
typedef struct policy_limits policy_limit_data_t;
typedef struct policy_infos policy_info_data_t;
# 72 "/usr/include/mach/task_info.h" 2 3 4








typedef natural_t task_flavor_t;
typedef integer_t *task_info_t;



typedef integer_t task_info_data_t[(1024)];





#pragma pack(4)





struct task_basic_info_32 {
        integer_t suspend_count;
        natural_t virtual_size;
        natural_t resident_size;
        time_value_t user_time;

        time_value_t system_time;

 policy_t policy;
};
typedef struct task_basic_info_32 task_basic_info_32_data_t;
typedef struct task_basic_info_32 *task_basic_info_32_t;




struct task_basic_info_64 {
        integer_t suspend_count;
        mach_vm_size_t virtual_size;
        mach_vm_size_t resident_size;
        time_value_t user_time;

        time_value_t system_time;

 policy_t policy;
};
typedef struct task_basic_info_64 task_basic_info_64_data_t;
typedef struct task_basic_info_64 *task_basic_info_64_t;
# 133 "/usr/include/mach/task_info.h" 3 4
struct task_basic_info {
        integer_t suspend_count;
        vm_size_t virtual_size;
        vm_size_t resident_size;
        time_value_t user_time;

        time_value_t system_time;

 policy_t policy;
};

typedef struct task_basic_info task_basic_info_data_t;
typedef struct task_basic_info *task_basic_info_t;
# 158 "/usr/include/mach/task_info.h" 3 4
struct task_events_info {
 integer_t faults;
 integer_t pageins;
 integer_t cow_faults;
 integer_t messages_sent;
 integer_t messages_received;
        integer_t syscalls_mach;
 integer_t syscalls_unix;
 integer_t csw;
};
typedef struct task_events_info task_events_info_data_t;
typedef struct task_events_info *task_events_info_t;






struct task_thread_times_info {
 time_value_t user_time;

 time_value_t system_time;

};

typedef struct task_thread_times_info task_thread_times_info_data_t;
typedef struct task_thread_times_info *task_thread_times_info_t;





struct task_absolutetime_info {
 uint64_t total_user;
 uint64_t total_system;
 uint64_t threads_user;
 uint64_t threads_system;
};

typedef struct task_absolutetime_info task_absolutetime_info_data_t;
typedef struct task_absolutetime_info *task_absolutetime_info_t;





struct task_kernelmemory_info {
 uint64_t total_palloc;
 uint64_t total_pfree;
 uint64_t total_salloc;
 uint64_t total_sfree;
};

typedef struct task_kernelmemory_info task_kernelmemory_info_data_t;
typedef struct task_kernelmemory_info *task_kernelmemory_info_t;
# 227 "/usr/include/mach/task_info.h" 3 4
struct task_affinity_tag_info {
 integer_t set_count;
 integer_t min;
 integer_t max;
 integer_t task_count;
};
typedef struct task_affinity_tag_info task_affinity_tag_info_data_t;
typedef struct task_affinity_tag_info *task_affinity_tag_info_t;





struct task_dyld_info {
 mach_vm_address_t all_image_info_addr;
 mach_vm_size_t all_image_info_size;
 integer_t all_image_info_format;
};
typedef struct task_dyld_info task_dyld_info_data_t;
typedef struct task_dyld_info *task_dyld_info_t;
# 255 "/usr/include/mach/task_info.h" 3 4
struct task_extmod_info {
 unsigned char task_uuid[16];
 vm_extmod_statistics_data_t extmod_statistics;
};
typedef struct task_extmod_info task_extmod_info_data_t;
typedef struct task_extmod_info *task_extmod_info_t;





struct mach_task_basic_info {
        mach_vm_size_t virtual_size;
        mach_vm_size_t resident_size;
        mach_vm_size_t resident_size_max;
        time_value_t user_time;

        time_value_t system_time;

        policy_t policy;
        integer_t suspend_count;
};
typedef struct mach_task_basic_info mach_task_basic_info_data_t;
typedef struct mach_task_basic_info *mach_task_basic_info_t;






struct task_power_info {
 uint64_t total_user;
 uint64_t total_system;
 uint64_t task_interrupt_wakeups;
 uint64_t task_platform_idle_wakeups;
 uint64_t task_timer_wakeups_bin_1;
 uint64_t task_timer_wakeups_bin_2;
};

typedef struct task_power_info task_power_info_data_t;
typedef struct task_power_info *task_power_info_t;







struct task_vm_info {
        mach_vm_size_t virtual_size;
 integer_t region_count;
 integer_t page_size;
        mach_vm_size_t resident_size;
        mach_vm_size_t resident_size_peak;

 mach_vm_size_t device;
 mach_vm_size_t device_peak;
 mach_vm_size_t internal;
 mach_vm_size_t internal_peak;
 mach_vm_size_t external;
 mach_vm_size_t external_peak;
 mach_vm_size_t reusable;
 mach_vm_size_t reusable_peak;
 mach_vm_size_t purgeable_volatile_pmap;
 mach_vm_size_t purgeable_volatile_resident;
 mach_vm_size_t purgeable_volatile_virtual;
 mach_vm_size_t compressed;
 mach_vm_size_t compressed_peak;
 mach_vm_size_t compressed_lifetime;
};
typedef struct task_vm_info task_vm_info_data_t;
typedef struct task_vm_info *task_vm_info_t;




typedef struct vm_purgeable_info task_purgable_info_t;



struct task_trace_memory_info {
 uint64_t user_memory_address;
 uint64_t buffer_size;
 uint64_t mailbox_array_size;
};
typedef struct task_trace_memory_info task_trace_memory_info_data_t;
typedef struct task_trace_memory_info * task_trace_memory_info_t;




struct task_wait_state_info {
 uint64_t total_wait_state_time;
 uint64_t total_wait_sfi_state_time;
 uint32_t _reserved[4];
};
typedef struct task_wait_state_info task_wait_state_info_data_t;
typedef struct task_wait_state_info * task_wait_state_info_t;





typedef struct {
 uint64_t task_gpu_utilisation;
 uint64_t task_gpu_stat_reserved0;
 uint64_t task_gpu_stat_reserved1;
 uint64_t task_gpu_stat_reserved2;
} gpu_energy_data;

typedef gpu_energy_data *gpu_energy_data_t;
struct task_power_info_v2 {
 task_power_info_data_t cpu_energy;
 gpu_energy_data gpu_energy;
};

typedef struct task_power_info_v2 task_power_info_v2_data_t;
typedef struct task_power_info_v2 *task_power_info_v2_t;
# 386 "/usr/include/mach/task_info.h" 3 4
#pragma pack()
# 92 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/task_policy.h" 1 3 4
# 32 "/usr/include/mach/task_policy.h" 3 4
# 1 "/usr/include/mach/mach_types.h" 1 3 4
# 33 "/usr/include/mach/task_policy.h" 2 3 4
# 51 "/usr/include/mach/task_policy.h" 3 4
typedef natural_t task_policy_flavor_t;
typedef integer_t *task_policy_t;
# 114 "/usr/include/mach/task_policy.h" 3 4
enum task_role {
 TASK_RENICED = -1,
 TASK_UNSPECIFIED = 0,
 TASK_FOREGROUND_APPLICATION,
 TASK_BACKGROUND_APPLICATION,
 TASK_CONTROL_APPLICATION,
 TASK_GRAPHICS_SERVER,
 TASK_THROTTLE_APPLICATION,
 TASK_NONUI_APPLICATION,
 TASK_DEFAULT_APPLICATION
};

typedef integer_t task_role_t;

struct task_category_policy {
 task_role_t role;
};

typedef struct task_category_policy task_category_policy_data_t;
typedef struct task_category_policy *task_category_policy_t;





enum task_latency_qos {
 LATENCY_QOS_TIER_UNSPECIFIED = 0x0,
 LATENCY_QOS_TIER_0 = ((0xFF<<16) | 1),
 LATENCY_QOS_TIER_1 = ((0xFF<<16) | 2),
 LATENCY_QOS_TIER_2 = ((0xFF<<16) | 3),
 LATENCY_QOS_TIER_3 = ((0xFF<<16) | 4),
 LATENCY_QOS_TIER_4 = ((0xFF<<16) | 5),
 LATENCY_QOS_TIER_5 = ((0xFF<<16) | 6)

};
typedef integer_t task_latency_qos_t;
enum task_throughput_qos {
 THROUGHPUT_QOS_TIER_UNSPECIFIED = 0x0,
 THROUGHPUT_QOS_TIER_0 = ((0xFE<<16) | 1),
 THROUGHPUT_QOS_TIER_1 = ((0xFE<<16) | 2),
 THROUGHPUT_QOS_TIER_2 = ((0xFE<<16) | 3),
 THROUGHPUT_QOS_TIER_3 = ((0xFE<<16) | 4),
 THROUGHPUT_QOS_TIER_4 = ((0xFE<<16) | 5),
 THROUGHPUT_QOS_TIER_5 = ((0xFE<<16) | 6),
};




typedef integer_t task_throughput_qos_t;

struct task_qos_policy {
 task_latency_qos_t task_latency_qos_tier;
 task_throughput_qos_t task_throughput_qos_tier;
};

typedef struct task_qos_policy *task_qos_policy_t;
# 93 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/task_special_ports.h" 1 3 4
# 70 "/usr/include/mach/task_special_ports.h" 3 4
typedef int task_special_port_t;
# 94 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/thread_info.h" 1 3 4
# 81 "/usr/include/mach/thread_info.h" 3 4
typedef natural_t thread_flavor_t;
typedef integer_t *thread_info_t;


typedef integer_t thread_info_data_t[(1024)];






struct thread_basic_info {
        time_value_t user_time;
        time_value_t system_time;
        integer_t cpu_usage;
 policy_t policy;
        integer_t run_state;
        integer_t flags;
        integer_t suspend_count;
        integer_t sleep_time;

};

typedef struct thread_basic_info thread_basic_info_data_t;
typedef struct thread_basic_info *thread_basic_info_t;





struct thread_identifier_info {
 uint64_t thread_id;
 uint64_t thread_handle;
 uint64_t dispatch_qaddr;
};

typedef struct thread_identifier_info thread_identifier_info_data_t;
typedef struct thread_identifier_info *thread_identifier_info_t;
# 156 "/usr/include/mach/thread_info.h" 3 4
struct io_stat_entry {
 uint64_t count;
 uint64_t size;
};

struct io_stat_info {
 struct io_stat_entry disk_reads;
 struct io_stat_entry io_priority[4];
 struct io_stat_entry paging;
 struct io_stat_entry metadata;
 struct io_stat_entry total_io;
};

typedef struct io_stat_info *io_stat_info_t;
# 95 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/thread_policy.h" 1 3 4
# 32 "/usr/include/mach/thread_policy.h" 3 4
# 1 "/usr/include/mach/mach_types.h" 1 3 4
# 33 "/usr/include/mach/thread_policy.h" 2 3 4
# 51 "/usr/include/mach/thread_policy.h" 3 4
typedef natural_t thread_policy_flavor_t;
typedef integer_t *thread_policy_t;
# 86 "/usr/include/mach/thread_policy.h" 3 4
struct thread_standard_policy {
 natural_t no_data;
};

typedef struct thread_standard_policy thread_standard_policy_data_t;
typedef struct thread_standard_policy *thread_standard_policy_t;
# 109 "/usr/include/mach/thread_policy.h" 3 4
struct thread_extended_policy {
 boolean_t timeshare;
};

typedef struct thread_extended_policy thread_extended_policy_data_t;
typedef struct thread_extended_policy *thread_extended_policy_t;
# 148 "/usr/include/mach/thread_policy.h" 3 4
struct thread_time_constraint_policy {
 uint32_t period;
 uint32_t computation;
 uint32_t constraint;
 boolean_t preemptible;
};

typedef struct thread_time_constraint_policy thread_time_constraint_policy_data_t;

typedef struct thread_time_constraint_policy *thread_time_constraint_policy_t;
# 176 "/usr/include/mach/thread_policy.h" 3 4
struct thread_precedence_policy {
 integer_t importance;
};

typedef struct thread_precedence_policy thread_precedence_policy_data_t;
typedef struct thread_precedence_policy *thread_precedence_policy_t;
# 206 "/usr/include/mach/thread_policy.h" 3 4
struct thread_affinity_policy {
 integer_t affinity_tag;
};



typedef struct thread_affinity_policy thread_affinity_policy_data_t;
typedef struct thread_affinity_policy *thread_affinity_policy_t;
# 224 "/usr/include/mach/thread_policy.h" 3 4
struct thread_background_policy {
 integer_t priority;
};

typedef struct thread_background_policy thread_background_policy_data_t;
typedef struct thread_background_policy *thread_background_policy_t;






typedef integer_t thread_latency_qos_t;

struct thread_latency_qos_policy {
 thread_latency_qos_t thread_latency_qos_tier;
};

typedef struct thread_latency_qos_policy thread_latency_qos_policy_data_t;
typedef struct thread_latency_qos_policy *thread_latency_qos_policy_t;





typedef integer_t thread_throughput_qos_t;

struct thread_throughput_qos_policy {
 thread_throughput_qos_t thread_throughput_qos_tier;
};

typedef struct thread_throughput_qos_policy thread_throughput_qos_policy_data_t;
typedef struct thread_throughput_qos_policy *thread_throughput_qos_policy_t;
# 96 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/thread_special_ports.h" 1 3 4
# 97 "/usr/include/mach/mach_types.h" 2 3 4


# 1 "/usr/include/mach/clock_types.h" 1 3 4
# 51 "/usr/include/mach/clock_types.h" 3 4
typedef int alarm_type_t;
typedef int sleep_type_t;
typedef int clock_id_t;
typedef int clock_flavor_t;
typedef int *clock_attr_t;
typedef int clock_res_t;




struct mach_timespec {
 unsigned int tv_sec;
 clock_res_t tv_nsec;
};
typedef struct mach_timespec mach_timespec_t;
# 100 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/vm_attributes.h" 1 3 4
# 76 "/usr/include/mach/vm_attributes.h" 3 4
typedef unsigned int vm_machine_attribute_t;
# 85 "/usr/include/mach/vm_attributes.h" 3 4
typedef int vm_machine_attribute_val_t;
# 101 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/vm_inherit.h" 1 3 4
# 75 "/usr/include/mach/vm_inherit.h" 3 4
typedef unsigned int vm_inherit_t;
# 102 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/vm_purgable.h" 1 3 4
# 53 "/usr/include/mach/vm_purgable.h" 3 4
typedef int vm_purgable_t;
# 103 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/vm_behavior.h" 1 3 4
# 47 "/usr/include/mach/vm_behavior.h" 3 4
typedef int vm_behavior_t;
# 104 "/usr/include/mach/mach_types.h" 2 3 4




# 1 "/usr/include/mach/vm_region.h" 1 3 4
# 47 "/usr/include/mach/vm_region.h" 3 4
# 1 "/usr/include/mach/machine/vm_param.h" 1 3 4
# 48 "/usr/include/mach/vm_region.h" 2 3 4





#pragma pack(4)




typedef uint32_t vm32_object_id_t;
# 67 "/usr/include/mach/vm_region.h" 3 4
typedef int *vm_region_info_t;
typedef int *vm_region_info_64_t;
typedef int *vm_region_recurse_info_t;
typedef int *vm_region_recurse_info_64_t;
typedef int vm_region_flavor_t;
typedef int vm_region_info_data_t[(1024)];


struct vm_region_basic_info_64 {
 vm_prot_t protection;
 vm_prot_t max_protection;
 vm_inherit_t inheritance;
 boolean_t shared;
 boolean_t reserved;
 memory_object_offset_t offset;
 vm_behavior_t behavior;
 unsigned short user_wired_count;
};
typedef struct vm_region_basic_info_64 *vm_region_basic_info_64_t;
typedef struct vm_region_basic_info_64 vm_region_basic_info_data_64_t;
# 103 "/usr/include/mach/vm_region.h" 3 4
struct vm_region_basic_info {
 vm_prot_t protection;
 vm_prot_t max_protection;
 vm_inherit_t inheritance;
 boolean_t shared;
 boolean_t reserved;
 uint32_t offset;
 vm_behavior_t behavior;
 unsigned short user_wired_count;
};

typedef struct vm_region_basic_info *vm_region_basic_info_t;
typedef struct vm_region_basic_info vm_region_basic_info_data_t;
# 141 "/usr/include/mach/vm_region.h" 3 4
struct vm_region_extended_info {
 vm_prot_t protection;
        unsigned int user_tag;
        unsigned int pages_resident;
        unsigned int pages_shared_now_private;
        unsigned int pages_swapped_out;
        unsigned int pages_dirtied;
        unsigned int ref_count;
        unsigned short shadow_depth;
        unsigned char external_pager;
        unsigned char share_mode;
 unsigned int pages_reusable;
};
typedef struct vm_region_extended_info *vm_region_extended_info_t;
typedef struct vm_region_extended_info vm_region_extended_info_data_t;
# 165 "/usr/include/mach/vm_region.h" 3 4
struct vm_region_top_info {
        unsigned int obj_id;
        unsigned int ref_count;
        unsigned int private_pages_resident;
        unsigned int shared_pages_resident;
        unsigned char share_mode;
};

typedef struct vm_region_top_info *vm_region_top_info_t;
typedef struct vm_region_top_info vm_region_top_info_data_t;
# 202 "/usr/include/mach/vm_region.h" 3 4
struct vm_region_submap_info {
 vm_prot_t protection;
 vm_prot_t max_protection;
 vm_inherit_t inheritance;
 uint32_t offset;
        unsigned int user_tag;
        unsigned int pages_resident;
        unsigned int pages_shared_now_private;
        unsigned int pages_swapped_out;
        unsigned int pages_dirtied;
        unsigned int ref_count;
        unsigned short shadow_depth;
        unsigned char external_pager;
        unsigned char share_mode;
 boolean_t is_submap;
 vm_behavior_t behavior;
 vm32_object_id_t object_id;
 unsigned short user_wired_count;
};

typedef struct vm_region_submap_info *vm_region_submap_info_t;
typedef struct vm_region_submap_info vm_region_submap_info_data_t;





struct vm_region_submap_info_64 {
 vm_prot_t protection;
 vm_prot_t max_protection;
 vm_inherit_t inheritance;
 memory_object_offset_t offset;
        unsigned int user_tag;
        unsigned int pages_resident;
        unsigned int pages_shared_now_private;
        unsigned int pages_swapped_out;
        unsigned int pages_dirtied;
        unsigned int ref_count;
        unsigned short shadow_depth;
        unsigned char external_pager;
        unsigned char share_mode;
 boolean_t is_submap;
 vm_behavior_t behavior;
 vm32_object_id_t object_id;
 unsigned short user_wired_count;
 unsigned int pages_reusable;
};

typedef struct vm_region_submap_info_64 *vm_region_submap_info_64_t;
typedef struct vm_region_submap_info_64 vm_region_submap_info_data_64_t;
# 269 "/usr/include/mach/vm_region.h" 3 4
struct vm_region_submap_short_info_64 {
 vm_prot_t protection;
 vm_prot_t max_protection;
 vm_inherit_t inheritance;
 memory_object_offset_t offset;
        unsigned int user_tag;
        unsigned int ref_count;
        unsigned short shadow_depth;
        unsigned char external_pager;
        unsigned char share_mode;
 boolean_t is_submap;
 vm_behavior_t behavior;
 vm32_object_id_t object_id;
 unsigned short user_wired_count;
};

typedef struct vm_region_submap_short_info_64 *vm_region_submap_short_info_64_t;
typedef struct vm_region_submap_short_info_64 vm_region_submap_short_info_data_64_t;







struct mach_vm_read_entry {
 mach_vm_address_t address;
 mach_vm_size_t size;
};

struct vm_read_entry {
 vm_address_t address;
 vm_size_t size;
};
# 314 "/usr/include/mach/vm_region.h" 3 4
typedef struct mach_vm_read_entry mach_vm_read_entry_t[(256)];
typedef struct vm_read_entry vm_read_entry_t[(256)];




#pragma pack()



typedef int *vm_page_info_t;
typedef int vm_page_info_data_t[];
typedef int vm_page_info_flavor_t;


struct vm_page_info_basic {
 int disposition;
 int ref_count;
 vm_object_id_t object_id;
 memory_object_offset_t offset;
 int depth;
 int __pad;
};
typedef struct vm_page_info_basic *vm_page_info_basic_t;
typedef struct vm_page_info_basic vm_page_info_basic_data_t;
# 109 "/usr/include/mach/mach_types.h" 2 3 4
# 1 "/usr/include/mach/kmod.h" 1 3 4
# 39 "/usr/include/mach/kmod.h" 3 4
# 1 "/usr/include/mach/mach_types.h" 1 3 4
# 40 "/usr/include/mach/kmod.h" 2 3 4
# 56 "/usr/include/mach/kmod.h" 3 4
typedef int kmod_t;

struct kmod_info;
typedef kern_return_t kmod_start_func_t(struct kmod_info * ki, void * data);
typedef kern_return_t kmod_stop_func_t(struct kmod_info * ki, void * data);
# 70 "/usr/include/mach/kmod.h" 3 4
#pragma pack(4)


typedef struct kmod_reference {
    struct kmod_reference * next;
    struct kmod_info * info;
} kmod_reference_t;
# 87 "/usr/include/mach/kmod.h" 3 4
typedef struct kmod_info {
    struct kmod_info * next;
    int32_t info_version;
    uint32_t id;
    char name[64];
    char version[64];
    int32_t reference_count;
    kmod_reference_t * reference_list;
    vm_address_t address;
    vm_size_t size;
    vm_size_t hdr_size;
    kmod_start_func_t * start;
    kmod_stop_func_t * stop;
} kmod_info_t;



typedef struct kmod_info_32_v1 {
    uint32_t next_addr;
    int32_t info_version;
    uint32_t id;
    uint8_t name[64];
    uint8_t version[64];
    int32_t reference_count;
    uint32_t reference_list_addr;
    uint32_t address;
    uint32_t size;
    uint32_t hdr_size;
    uint32_t start_addr;
    uint32_t stop_addr;
} kmod_info_32_v1_t;



typedef struct kmod_info_64_v1 {
    uint64_t next_addr;
    int32_t info_version;
    uint32_t id;
    uint8_t name[64];
    uint8_t version[64];
    int32_t reference_count;
    uint64_t reference_list_addr;
    uint64_t address;
    uint64_t size;
    uint64_t hdr_size;
    uint64_t start_addr;
    uint64_t stop_addr;
} kmod_info_64_v1_t;

#pragma pack()
# 174 "/usr/include/mach/kmod.h" 3 4
typedef void * kmod_args_t;
typedef int kmod_control_flavor_t;
typedef kmod_info_t * kmod_info_array_t;
# 110 "/usr/include/mach/mach_types.h" 2 3 4






typedef mach_port_t task_t;
typedef mach_port_t task_name_t;
typedef mach_port_t task_suspension_token_t;
typedef mach_port_t thread_t;
typedef mach_port_t thread_act_t;
typedef mach_port_t ipc_space_t;
typedef mach_port_t coalition_t;
typedef mach_port_t host_t;
typedef mach_port_t host_priv_t;
typedef mach_port_t host_security_t;
typedef mach_port_t processor_t;
typedef mach_port_t processor_set_t;
typedef mach_port_t processor_set_control_t;
typedef mach_port_t semaphore_t;
typedef mach_port_t lock_set_t;
typedef mach_port_t ledger_t;
typedef mach_port_t alarm_t;
typedef mach_port_t clock_serv_t;
typedef mach_port_t clock_ctrl_t;







typedef processor_set_t processor_set_name_t;




typedef mach_port_t clock_reply_t;
typedef mach_port_t bootstrap_t;
typedef mach_port_t mem_entry_name_port_t;
typedef mach_port_t exception_handler_t;
typedef exception_handler_t *exception_handler_array_t;
typedef mach_port_t vm_task_entry_t;
typedef mach_port_t io_master_t;
typedef mach_port_t UNDServerRef;
# 163 "/usr/include/mach/mach_types.h" 3 4
typedef task_t *task_array_t;
typedef thread_t *thread_array_t;
typedef processor_set_t *processor_set_array_t;
typedef processor_set_t *processor_set_name_array_t;
typedef processor_t *processor_array_t;
typedef thread_act_t *thread_act_array_t;
typedef ledger_t *ledger_array_t;







typedef task_t task_port_t;
typedef task_array_t task_port_array_t;
typedef thread_t thread_port_t;
typedef thread_array_t thread_port_array_t;
typedef ipc_space_t ipc_space_port_t;
typedef host_t host_name_t;
typedef host_t host_name_port_t;
typedef processor_set_t processor_set_port_t;
typedef processor_set_t processor_set_name_port_t;
typedef processor_set_array_t processor_set_name_port_array_t;
typedef processor_set_t processor_set_control_port_t;
typedef processor_t processor_port_t;
typedef processor_array_t processor_port_array_t;
typedef thread_act_t thread_act_port_t;
typedef thread_act_array_t thread_act_port_array_t;
typedef semaphore_t semaphore_port_t;
typedef lock_set_t lock_set_port_t;
typedef ledger_t ledger_port_t;
typedef ledger_array_t ledger_port_array_t;
typedef alarm_t alarm_port_t;
typedef clock_serv_t clock_serv_port_t;
typedef clock_ctrl_t clock_ctrl_port_t;
typedef exception_handler_t exception_port_t;
typedef exception_handler_array_t exception_port_arrary_t;
# 223 "/usr/include/mach/mach_types.h" 3 4
typedef natural_t ledger_item_t;


typedef int64_t ledger_amount_t;


typedef mach_vm_offset_t *emulation_vector_t;
typedef char *user_subsystem_t;

typedef char *labelstr_t;
# 34 "/usr/include/mach/semaphore.h" 2 3 4

# 1 "/usr/include/mach/sync_policy.h" 1 3 4
# 35 "/usr/include/mach/sync_policy.h" 3 4
typedef int sync_policy_t;
# 36 "/usr/include/mach/semaphore.h" 2 3 4
# 55 "/usr/include/mach/semaphore.h" 3 4
extern kern_return_t semaphore_signal (semaphore_t semaphore);
extern kern_return_t semaphore_signal_all (semaphore_t semaphore);

extern kern_return_t semaphore_wait (semaphore_t semaphore);


extern kern_return_t semaphore_timedwait (semaphore_t semaphore,
             mach_timespec_t wait_time);

extern kern_return_t semaphore_timedwait_signal(semaphore_t wait_semaphore,
               semaphore_t signal_semaphore,
               mach_timespec_t wait_time);

extern kern_return_t semaphore_wait_signal (semaphore_t wait_semaphore,
                                                 semaphore_t signal_semaphore);

extern kern_return_t semaphore_signal_thread (semaphore_t semaphore,
                                                 thread_t thread);
# 222 "./include/vlc_threads.h" 2
# 1 "/usr/include/mach/task.h" 1 3 4






# 1 "/usr/include/mach/ndr.h" 1 3 4
# 37 "/usr/include/mach/ndr.h" 3 4
# 1 "/usr/include/libkern/OSByteOrder.h" 1 3 4
# 43 "/usr/include/libkern/OSByteOrder.h" 3 4
# 1 "/usr/include/libkern/i386/OSByteOrder.h" 1 3 4
# 34 "/usr/include/libkern/i386/OSByteOrder.h" 3 4
# 1 "/usr/include/sys/_types/_os_inline.h" 1 3 4
# 35 "/usr/include/libkern/i386/OSByteOrder.h" 2 3 4



static inline
uint16_t
OSReadSwapInt16(
    const volatile void * base,
    uintptr_t byteOffset
)
{
    uint16_t result;

    result = *(volatile uint16_t *)((uintptr_t)base + byteOffset);
    return _OSSwapInt16(result);
}

static inline
uint32_t
OSReadSwapInt32(
    const volatile void * base,
    uintptr_t byteOffset
)
{
    uint32_t result;

    result = *(volatile uint32_t *)((uintptr_t)base + byteOffset);
    return _OSSwapInt32(result);
}

static inline
uint64_t
OSReadSwapInt64(
    const volatile void * base,
    uintptr_t byteOffset
)
{
    uint64_t result;

    result = *(volatile uint64_t *)((uintptr_t)base + byteOffset);
    return _OSSwapInt64(result);
}



static inline
void
OSWriteSwapInt16(
    volatile void * base,
    uintptr_t byteOffset,
    uint16_t data
)
{
    *(volatile uint16_t *)((uintptr_t)base + byteOffset) = _OSSwapInt16(data);
}

static inline
void
OSWriteSwapInt32(
    volatile void * base,
    uintptr_t byteOffset,
    uint32_t data
)
{
    *(volatile uint32_t *)((uintptr_t)base + byteOffset) = _OSSwapInt32(data);
}

static inline
void
OSWriteSwapInt64(
    volatile void * base,
    uintptr_t byteOffset,
    uint64_t data
)
{
    *(volatile uint64_t *)((uintptr_t)base + byteOffset) = _OSSwapInt64(data);
}
# 44 "/usr/include/libkern/OSByteOrder.h" 2 3 4
# 58 "/usr/include/libkern/OSByteOrder.h" 3 4
enum {
    OSUnknownByteOrder,
    OSLittleEndian,
    OSBigEndian
};

static inline
int32_t
OSHostByteOrder(void) {

    return OSLittleEndian;





}
# 87 "/usr/include/libkern/OSByteOrder.h" 3 4
static inline
uint16_t
_OSReadInt16(
    const volatile void * base,
    uintptr_t byteOffset
)
{
    return *(volatile uint16_t *)((uintptr_t)base + byteOffset);
}

static inline
uint32_t
_OSReadInt32(
    const volatile void * base,
    uintptr_t byteOffset
)
{
    return *(volatile uint32_t *)((uintptr_t)base + byteOffset);
}

static inline
uint64_t
_OSReadInt64(
    const volatile void * base,
    uintptr_t byteOffset
)
{
    return *(volatile uint64_t *)((uintptr_t)base + byteOffset);
}



static inline
void
_OSWriteInt16(
    volatile void * base,
    uintptr_t byteOffset,
    uint16_t data
)
{
    *(volatile uint16_t *)((uintptr_t)base + byteOffset) = data;
}

static inline
void
_OSWriteInt32(
    volatile void * base,
    uintptr_t byteOffset,
    uint32_t data
)
{
    *(volatile uint32_t *)((uintptr_t)base + byteOffset) = data;
}

static inline
void
_OSWriteInt64(
    volatile void * base,
    uintptr_t byteOffset,
    uint64_t data
)
{
    *(volatile uint64_t *)((uintptr_t)base + byteOffset) = data;
}
# 38 "/usr/include/mach/ndr.h" 2 3 4


typedef struct {
    unsigned char mig_vers;
    unsigned char if_vers;
    unsigned char reserved1;
    unsigned char mig_encoding;
    unsigned char int_rep;
    unsigned char char_rep;
    unsigned char float_rep;
    unsigned char reserved2;
} NDR_record_t;
# 68 "/usr/include/mach/ndr.h" 3 4
extern NDR_record_t NDR_record;
# 8 "/usr/include/mach/task.h" 2 3 4


# 1 "/usr/include/mach/notify.h" 1 3 4
# 91 "/usr/include/mach/notify.h" 3 4
typedef mach_port_t notify_port_t;
# 101 "/usr/include/mach/notify.h" 3 4
typedef struct {
    mach_msg_header_t not_header;
    NDR_record_t NDR;
    mach_port_name_t not_port;
    mach_msg_format_0_trailer_t trailer;
} mach_port_deleted_notification_t;

typedef struct {
    mach_msg_header_t not_header;
    NDR_record_t NDR;
    mach_port_name_t not_port;
    mach_msg_format_0_trailer_t trailer;
} mach_send_possible_notification_t;

typedef struct {
    mach_msg_header_t not_header;
    mach_msg_body_t not_body;
    mach_msg_port_descriptor_t not_port;
    mach_msg_format_0_trailer_t trailer;
} mach_port_destroyed_notification_t;

typedef struct {
    mach_msg_header_t not_header;
    NDR_record_t NDR;
    mach_msg_type_number_t not_count;
    mach_msg_format_0_trailer_t trailer;
} mach_no_senders_notification_t;

typedef struct {
    mach_msg_header_t not_header;
    mach_msg_format_0_trailer_t trailer;
} mach_send_once_notification_t;

typedef struct {
    mach_msg_header_t not_header;
    NDR_record_t NDR;
    mach_port_name_t not_port;
    mach_msg_format_0_trailer_t trailer;
} mach_dead_name_notification_t;
# 11 "/usr/include/mach/task.h" 2 3 4


# 1 "/usr/include/mach/mig_errors.h" 1 3 4
# 66 "/usr/include/mach/mig_errors.h" 3 4
# 1 "/usr/include/mach/mig.h" 1 3 4
# 80 "/usr/include/mach/mig.h" 3 4
typedef void (*mig_stub_routine_t) (mach_msg_header_t *InHeadP,
           mach_msg_header_t *OutHeadP);

typedef mig_stub_routine_t mig_routine_t;






typedef mig_routine_t (*mig_server_routine_t) (mach_msg_header_t *InHeadP);






typedef kern_return_t (*mig_impl_routine_t)(void);

typedef mach_msg_type_descriptor_t routine_arg_descriptor;
typedef mach_msg_type_descriptor_t *routine_arg_descriptor_t;
typedef mach_msg_type_descriptor_t *mig_routine_arg_descriptor_t;



struct routine_descriptor {
 mig_impl_routine_t impl_routine;
 mig_stub_routine_t stub_routine;
 unsigned int argc;
 unsigned int descr_count;
 routine_arg_descriptor_t
      arg_descr;
 unsigned int max_reply_msg;
};
typedef struct routine_descriptor *routine_descriptor_t;

typedef struct routine_descriptor mig_routine_descriptor;
typedef mig_routine_descriptor *mig_routine_descriptor_t;



typedef struct mig_subsystem {
 mig_server_routine_t server;
 mach_msg_id_t start;
 mach_msg_id_t end;
 mach_msg_size_t maxsize;
 vm_address_t reserved;
 mig_routine_descriptor
       routine[1];
} *mig_subsystem_t;



typedef struct mig_symtab {
 char *ms_routine_name;
 int ms_routine_number;
 void (*ms_routine)(void);




} mig_symtab_t;





extern mach_port_t mig_get_reply_port(void);


extern void mig_dealloc_reply_port(mach_port_t reply_port);


extern void mig_put_reply_port(mach_port_t reply_port);


extern int mig_strncpy(char *dest, const char *src, int len);



extern void mig_allocate(vm_address_t *, vm_size_t);


extern void mig_deallocate(vm_address_t, vm_size_t);
# 67 "/usr/include/mach/mig_errors.h" 2 3 4
# 98 "/usr/include/mach/mig_errors.h" 3 4
#pragma pack(4)
typedef struct {
 mach_msg_header_t Head;
 NDR_record_t NDR;
 kern_return_t RetCode;
} mig_reply_error_t;
#pragma pack()







static __inline__ void
__NDR_convert__mig_reply_error_t(__attribute__((unused)) mig_reply_error_t *x)
{




}
# 14 "/usr/include/mach/task.h" 2 3 4
# 36 "/usr/include/mach/task.h" 3 4
# 1 "/usr/include/mach_debug/mach_debug_types.h" 1 3 4
# 65 "/usr/include/mach_debug/mach_debug_types.h" 3 4
# 1 "/usr/include/mach_debug/ipc_info.h" 1 3 4
# 78 "/usr/include/mach_debug/ipc_info.h" 3 4
typedef struct ipc_info_space {
 natural_t iis_genno_mask;
 natural_t iis_table_size;
 natural_t iis_table_next;
 natural_t iis_tree_size;
 natural_t iis_tree_small;
 natural_t iis_tree_hash;
} ipc_info_space_t;

typedef struct ipc_info_space_basic {
 natural_t iisb_genno_mask;
 natural_t iisb_table_size;
 natural_t iisb_table_next;
 natural_t iisb_table_inuse;
 natural_t iisb_reserved[2];
} ipc_info_space_basic_t;

typedef struct ipc_info_name {
 mach_port_name_t iin_name;
             integer_t iin_collision;
 mach_port_type_t iin_type;
 mach_port_urefs_t iin_urefs;
 natural_t iin_object;
 natural_t iin_next;
 natural_t iin_hash;
} ipc_info_name_t;

typedef ipc_info_name_t *ipc_info_name_array_t;


typedef struct ipc_info_tree_name {
 ipc_info_name_t iitn_name;
 mach_port_name_t iitn_lchild;
 mach_port_name_t iitn_rchild;
} ipc_info_tree_name_t;

typedef ipc_info_tree_name_t *ipc_info_tree_name_array_t;
# 66 "/usr/include/mach_debug/mach_debug_types.h" 2 3 4
# 1 "/usr/include/mach_debug/vm_info.h" 1 3 4
# 73 "/usr/include/mach_debug/vm_info.h" 3 4
#pragma pack(4)





typedef struct mach_vm_info_region {
 mach_vm_offset_t vir_start;
 mach_vm_offset_t vir_end;
 mach_vm_offset_t vir_object;
 memory_object_offset_t vir_offset;
 boolean_t vir_needs_copy;
 vm_prot_t vir_protection;
 vm_prot_t vir_max_protection;
 vm_inherit_t vir_inheritance;
 natural_t vir_wired_count;
 natural_t vir_user_wired_count;
} mach_vm_info_region_t;

typedef struct vm_info_region_64 {
 natural_t vir_start;
 natural_t vir_end;
 natural_t vir_object;
 memory_object_offset_t vir_offset;
 boolean_t vir_needs_copy;
 vm_prot_t vir_protection;
 vm_prot_t vir_max_protection;
 vm_inherit_t vir_inheritance;
 natural_t vir_wired_count;
 natural_t vir_user_wired_count;
} vm_info_region_64_t;

typedef struct vm_info_region {
 natural_t vir_start;
 natural_t vir_end;
 natural_t vir_object;
 natural_t vir_offset;
 boolean_t vir_needs_copy;
 vm_prot_t vir_protection;
 vm_prot_t vir_max_protection;
 vm_inherit_t vir_inheritance;
 natural_t vir_wired_count;
 natural_t vir_user_wired_count;
} vm_info_region_t;


typedef struct vm_info_object {
 natural_t vio_object;
 natural_t vio_size;
 unsigned int vio_ref_count;
 unsigned int vio_resident_page_count;
 unsigned int vio_absent_count;
 natural_t vio_copy;
 natural_t vio_shadow;
 natural_t vio_shadow_offset;
 natural_t vio_paging_offset;
 memory_object_copy_strategy_t vio_copy_strategy;

 vm_offset_t vio_last_alloc;

 unsigned int vio_paging_in_progress;
 boolean_t vio_pager_created;
 boolean_t vio_pager_initialized;
 boolean_t vio_pager_ready;
 boolean_t vio_can_persist;
 boolean_t vio_internal;
 boolean_t vio_temporary;
 boolean_t vio_alive;
 boolean_t vio_purgable;
 boolean_t vio_purgable_volatile;
} vm_info_object_t;

typedef vm_info_object_t *vm_info_object_array_t;

#pragma pack()
# 67 "/usr/include/mach_debug/mach_debug_types.h" 2 3 4
# 1 "/usr/include/mach_debug/zone_info.h" 1 3 4
# 73 "/usr/include/mach_debug/zone_info.h" 3 4
typedef struct zone_name {
 char zn_name[80];
} zone_name_t;

typedef zone_name_t *zone_name_array_t;


typedef struct zone_info {
 integer_t zi_count;
 vm_size_t zi_cur_size;
 vm_size_t zi_max_size;
 vm_size_t zi_elem_size;
 vm_size_t zi_alloc_size;
 integer_t zi_pageable;
 integer_t zi_sleepable;
 integer_t zi_exhaustible;
 integer_t zi_collectable;
} zone_info_t;

typedef zone_info_t *zone_info_array_t;
# 102 "/usr/include/mach_debug/zone_info.h" 3 4
typedef struct mach_zone_name {
 char mzn_name[80];
} mach_zone_name_t;

typedef mach_zone_name_t *mach_zone_name_array_t;

typedef struct mach_zone_info_data {
 uint64_t mzi_count;
 uint64_t mzi_cur_size;
 uint64_t mzi_max_size;
        uint64_t mzi_elem_size;
 uint64_t mzi_alloc_size;
 uint64_t mzi_sum_size;
 uint64_t mzi_exhaustible;
 uint64_t mzi_collectable;
} mach_zone_info_t;

typedef mach_zone_info_t *mach_zone_info_array_t;

typedef struct task_zone_info_data {
 uint64_t tzi_count;
 uint64_t tzi_cur_size;
 uint64_t tzi_max_size;
        uint64_t tzi_elem_size;
 uint64_t tzi_alloc_size;
 uint64_t tzi_sum_size;
 uint64_t tzi_exhaustible;
 uint64_t tzi_collectable;
 uint64_t tzi_caller_acct;
 uint64_t tzi_task_alloc;
 uint64_t tzi_task_free;
} task_zone_info_t;

typedef task_zone_info_t *task_zone_info_array_t;
# 68 "/usr/include/mach_debug/mach_debug_types.h" 2 3 4
# 1 "/usr/include/mach_debug/page_info.h" 1 3 4
# 63 "/usr/include/mach_debug/page_info.h" 3 4
typedef vm_offset_t *page_address_array_t;
# 69 "/usr/include/mach_debug/mach_debug_types.h" 2 3 4
# 1 "/usr/include/mach_debug/hash_info.h" 1 3 4
# 67 "/usr/include/mach_debug/hash_info.h" 3 4
typedef struct hash_info_bucket {
 natural_t hib_count;
} hash_info_bucket_t;

typedef hash_info_bucket_t *hash_info_bucket_array_t;
# 70 "/usr/include/mach_debug/mach_debug_types.h" 2 3 4
# 1 "/usr/include/mach_debug/lockgroup_info.h" 1 3 4
# 43 "/usr/include/mach_debug/lockgroup_info.h" 3 4
typedef struct lockgroup_info {
 char lockgroup_name[64];
 uint64_t lockgroup_attr;
 uint64_t lock_spin_cnt;
 uint64_t lock_spin_util_cnt;
 uint64_t lock_spin_held_cnt;
 uint64_t lock_spin_miss_cnt;
 uint64_t lock_spin_held_max;
 uint64_t lock_spin_held_cum;
 uint64_t lock_mtx_cnt;
 uint64_t lock_mtx_util_cnt;
 uint64_t lock_mtx_held_cnt;
 uint64_t lock_mtx_miss_cnt;
 uint64_t lock_mtx_wait_cnt;
 uint64_t lock_mtx_held_max;
 uint64_t lock_mtx_held_cum;
 uint64_t lock_mtx_wait_max;
 uint64_t lock_mtx_wait_cum;
 uint64_t lock_rw_cnt;
 uint64_t lock_rw_util_cnt;
 uint64_t lock_rw_held_cnt;
 uint64_t lock_rw_miss_cnt;
 uint64_t lock_rw_wait_cnt;
 uint64_t lock_rw_held_max;
 uint64_t lock_rw_held_cum;
 uint64_t lock_rw_wait_max;
 uint64_t lock_rw_wait_cum;
} lockgroup_info_t;

typedef lockgroup_info_t *lockgroup_info_array_t;
# 71 "/usr/include/mach_debug/mach_debug_types.h" 2 3 4

typedef char symtab_name_t[32];
# 37 "/usr/include/mach/task.h" 2 3 4
# 50 "/usr/include/mach/task.h" 3 4
extern

kern_return_t task_create
(
 task_t target_task,
 ledger_array_t ledgers,
 mach_msg_type_number_t ledgersCnt,
 boolean_t inherit_memory,
 task_t *child_task
);





extern

kern_return_t task_terminate
(
 task_t target_task
);





extern

kern_return_t task_threads
(
 task_t target_task,
 thread_act_array_t *act_list,
 mach_msg_type_number_t *act_listCnt
);





extern

kern_return_t mach_ports_register
(
 task_t target_task,
 mach_port_array_t init_port_set,
 mach_msg_type_number_t init_port_setCnt
);





extern

kern_return_t mach_ports_lookup
(
 task_t target_task,
 mach_port_array_t *init_port_set,
 mach_msg_type_number_t *init_port_setCnt
);





extern

kern_return_t task_info
(
 task_name_t target_task,
 task_flavor_t flavor,
 task_info_t task_info_out,
 mach_msg_type_number_t *task_info_outCnt
);





extern

kern_return_t task_set_info
(
 task_t target_task,
 task_flavor_t flavor,
 task_info_t task_info_in,
 mach_msg_type_number_t task_info_inCnt
);





extern

kern_return_t task_suspend
(
 task_t target_task
);





extern

kern_return_t task_resume
(
 task_t target_task
);





extern

kern_return_t task_get_special_port
(
 task_t task,
 int which_port,
 mach_port_t *special_port
);





extern

kern_return_t task_set_special_port
(
 task_t task,
 int which_port,
 mach_port_t special_port
);





extern

kern_return_t thread_create
(
 task_t parent_task,
 thread_act_t *child_act
);





extern

kern_return_t thread_create_running
(
 task_t parent_task,
 thread_state_flavor_t flavor,
 thread_state_t new_state,
 mach_msg_type_number_t new_stateCnt,
 thread_act_t *child_act
);





extern

kern_return_t task_set_exception_ports
(
 task_t task,
 exception_mask_t exception_mask,
 mach_port_t new_port,
 exception_behavior_t behavior,
 thread_state_flavor_t new_flavor
);





extern

kern_return_t task_get_exception_ports
(
 task_t task,
 exception_mask_t exception_mask,
 exception_mask_array_t masks,
 mach_msg_type_number_t *masksCnt,
 exception_handler_array_t old_handlers,
 exception_behavior_array_t old_behaviors,
 exception_flavor_array_t old_flavors
);





extern

kern_return_t task_swap_exception_ports
(
 task_t task,
 exception_mask_t exception_mask,
 mach_port_t new_port,
 exception_behavior_t behavior,
 thread_state_flavor_t new_flavor,
 exception_mask_array_t masks,
 mach_msg_type_number_t *masksCnt,
 exception_handler_array_t old_handlerss,
 exception_behavior_array_t old_behaviors,
 exception_flavor_array_t old_flavors
);





extern

kern_return_t lock_set_create
(
 task_t task,
 lock_set_t *new_lock_set,
 int n_ulocks,
 int policy
);





extern

kern_return_t lock_set_destroy
(
 task_t task,
 lock_set_t lock_set
);





extern

kern_return_t semaphore_create
(
 task_t task,
 semaphore_t *semaphore,
 int policy,
 int value
);





extern

kern_return_t semaphore_destroy
(
 task_t task,
 semaphore_t semaphore
);





extern

kern_return_t task_policy_set
(
 task_t task,
 task_policy_flavor_t flavor,
 task_policy_t policy_info,
 mach_msg_type_number_t policy_infoCnt
);





extern

kern_return_t task_policy_get
(
 task_t task,
 task_policy_flavor_t flavor,
 task_policy_t policy_info,
 mach_msg_type_number_t *policy_infoCnt,
 boolean_t *get_default
);





extern

kern_return_t task_sample
(
 task_t task,
 mach_port_t reply
);





extern

kern_return_t task_policy
(
 task_t task,
 policy_t policy,
 policy_base_t base,
 mach_msg_type_number_t baseCnt,
 boolean_t set_limit,
 boolean_t change
);





extern

kern_return_t task_set_emulation
(
 task_t target_port,
 vm_address_t routine_entry_pt,
 int routine_number
);





extern

kern_return_t task_get_emulation_vector
(
 task_t task,
 int *vector_start,
 emulation_vector_t *emulation_vector,
 mach_msg_type_number_t *emulation_vectorCnt
);





extern

kern_return_t task_set_emulation_vector
(
 task_t task,
 int vector_start,
 emulation_vector_t emulation_vector,
 mach_msg_type_number_t emulation_vectorCnt
);





extern

kern_return_t task_set_ras_pc
(
 task_t target_task,
 vm_address_t basepc,
 vm_address_t boundspc
);





extern

kern_return_t task_zone_info
(
 task_t target_task,
 mach_zone_name_array_t *names,
 mach_msg_type_number_t *namesCnt,
 task_zone_info_array_t *info,
 mach_msg_type_number_t *infoCnt
);





extern

kern_return_t task_assign
(
 task_t task,
 processor_set_t new_set,
 boolean_t assign_threads
);





extern

kern_return_t task_assign_default
(
 task_t task,
 boolean_t assign_threads
);





extern

kern_return_t task_get_assignment
(
 task_t task,
 processor_set_name_t *assigned_set
);





extern

kern_return_t task_set_policy
(
 task_t task,
 processor_set_t pset,
 policy_t policy,
 policy_base_t base,
 mach_msg_type_number_t baseCnt,
 policy_limit_t limit,
 mach_msg_type_number_t limitCnt,
 boolean_t change
);





extern

kern_return_t task_get_state
(
 task_t task,
 thread_state_flavor_t flavor,
 thread_state_t old_state,
 mach_msg_type_number_t *old_stateCnt
);





extern

kern_return_t task_set_state
(
 task_t task,
 thread_state_flavor_t flavor,
 thread_state_t new_state,
 mach_msg_type_number_t new_stateCnt
);





extern

kern_return_t task_set_phys_footprint_limit
(
 task_t task,
 int new_limit,
 int *old_limit
);





extern

kern_return_t task_suspend2
(
 task_t target_task,
 task_suspension_token_t *suspend_token
);





extern

kern_return_t task_resume2
(
 task_suspension_token_t suspend_token
);





extern

kern_return_t task_purgable_info
(
 task_t task,
 task_purgable_info_t *stats
);





extern

kern_return_t task_get_mach_voucher
(
 task_t task,
 mach_voucher_selector_t which,
 ipc_voucher_t *voucher
);





extern

kern_return_t task_set_mach_voucher
(
 task_t task,
 ipc_voucher_t voucher
);





extern

kern_return_t task_swap_mach_voucher
(
 task_t task,
 ipc_voucher_t new_voucher,
 ipc_voucher_t *old_voucher
);
# 632 "/usr/include/mach/task.h" 3 4
#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_ool_ports_descriptor_t ledgers;

  NDR_record_t NDR;
  mach_msg_type_number_t ledgersCnt;
  boolean_t inherit_memory;
 } __Request__task_create_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
 } __Request__task_terminate_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
 } __Request__task_threads_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_ool_ports_descriptor_t init_port_set;

  NDR_record_t NDR;
  mach_msg_type_number_t init_port_setCnt;
 } __Request__mach_ports_register_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
 } __Request__mach_ports_lookup_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  task_flavor_t flavor;
  mach_msg_type_number_t task_info_outCnt;
 } __Request__task_info_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  task_flavor_t flavor;
  mach_msg_type_number_t task_info_inCnt;
  integer_t task_info_in[52];
 } __Request__task_set_info_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
 } __Request__task_suspend_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
 } __Request__task_resume_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  int which_port;
 } __Request__task_get_special_port_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t special_port;

  NDR_record_t NDR;
  int which_port;
 } __Request__task_set_special_port_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
 } __Request__thread_create_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  thread_state_flavor_t flavor;
  mach_msg_type_number_t new_stateCnt;
  natural_t new_state[224];
 } __Request__thread_create_running_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t new_port;

  NDR_record_t NDR;
  exception_mask_t exception_mask;
  exception_behavior_t behavior;
  thread_state_flavor_t new_flavor;
 } __Request__task_set_exception_ports_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  exception_mask_t exception_mask;
 } __Request__task_get_exception_ports_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t new_port;

  NDR_record_t NDR;
  exception_mask_t exception_mask;
  exception_behavior_t behavior;
  thread_state_flavor_t new_flavor;
 } __Request__task_swap_exception_ports_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  int n_ulocks;
  int policy;
 } __Request__lock_set_create_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t lock_set;

 } __Request__lock_set_destroy_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  int policy;
  int value;
 } __Request__semaphore_create_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t semaphore;

 } __Request__semaphore_destroy_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  task_policy_flavor_t flavor;
  mach_msg_type_number_t policy_infoCnt;
  integer_t policy_info[16];
 } __Request__task_policy_set_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  task_policy_flavor_t flavor;
  mach_msg_type_number_t policy_infoCnt;
  boolean_t get_default;
 } __Request__task_policy_get_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t reply;

 } __Request__task_sample_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  policy_t policy;
  mach_msg_type_number_t baseCnt;
  integer_t base[5];
  boolean_t set_limit;
  boolean_t change;
 } __Request__task_policy_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  vm_address_t routine_entry_pt;
  int routine_number;
 } __Request__task_set_emulation_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
 } __Request__task_get_emulation_vector_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_ool_descriptor_t emulation_vector;

  NDR_record_t NDR;
  int vector_start;
  mach_msg_type_number_t emulation_vectorCnt;
 } __Request__task_set_emulation_vector_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  vm_address_t basepc;
  vm_address_t boundspc;
 } __Request__task_set_ras_pc_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
 } __Request__task_zone_info_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t new_set;

  NDR_record_t NDR;
  boolean_t assign_threads;
 } __Request__task_assign_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  boolean_t assign_threads;
 } __Request__task_assign_default_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
 } __Request__task_get_assignment_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t pset;

  NDR_record_t NDR;
  policy_t policy;
  mach_msg_type_number_t baseCnt;
  integer_t base[5];
  mach_msg_type_number_t limitCnt;
  integer_t limit[1];
  boolean_t change;
 } __Request__task_set_policy_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  thread_state_flavor_t flavor;
  mach_msg_type_number_t old_stateCnt;
 } __Request__task_get_state_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  thread_state_flavor_t flavor;
  mach_msg_type_number_t new_stateCnt;
  natural_t new_state[224];
 } __Request__task_set_state_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  int new_limit;
 } __Request__task_set_phys_footprint_limit_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
 } __Request__task_suspend2_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
 } __Request__task_resume2_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
 } __Request__task_purgable_info_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  mach_voucher_selector_t which;
 } __Request__task_get_mach_voucher_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t voucher;

 } __Request__task_set_mach_voucher_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t new_voucher;
  mach_msg_port_descriptor_t old_voucher;

 } __Request__task_swap_mach_voucher_t;

#pragma pack()







union __RequestUnion__task_subsystem {
 __Request__task_create_t Request_task_create;
 __Request__task_terminate_t Request_task_terminate;
 __Request__task_threads_t Request_task_threads;
 __Request__mach_ports_register_t Request_mach_ports_register;
 __Request__mach_ports_lookup_t Request_mach_ports_lookup;
 __Request__task_info_t Request_task_info;
 __Request__task_set_info_t Request_task_set_info;
 __Request__task_suspend_t Request_task_suspend;
 __Request__task_resume_t Request_task_resume;
 __Request__task_get_special_port_t Request_task_get_special_port;
 __Request__task_set_special_port_t Request_task_set_special_port;
 __Request__thread_create_t Request_thread_create;
 __Request__thread_create_running_t Request_thread_create_running;
 __Request__task_set_exception_ports_t Request_task_set_exception_ports;
 __Request__task_get_exception_ports_t Request_task_get_exception_ports;
 __Request__task_swap_exception_ports_t Request_task_swap_exception_ports;
 __Request__lock_set_create_t Request_lock_set_create;
 __Request__lock_set_destroy_t Request_lock_set_destroy;
 __Request__semaphore_create_t Request_semaphore_create;
 __Request__semaphore_destroy_t Request_semaphore_destroy;
 __Request__task_policy_set_t Request_task_policy_set;
 __Request__task_policy_get_t Request_task_policy_get;
 __Request__task_sample_t Request_task_sample;
 __Request__task_policy_t Request_task_policy;
 __Request__task_set_emulation_t Request_task_set_emulation;
 __Request__task_get_emulation_vector_t Request_task_get_emulation_vector;
 __Request__task_set_emulation_vector_t Request_task_set_emulation_vector;
 __Request__task_set_ras_pc_t Request_task_set_ras_pc;
 __Request__task_zone_info_t Request_task_zone_info;
 __Request__task_assign_t Request_task_assign;
 __Request__task_assign_default_t Request_task_assign_default;
 __Request__task_get_assignment_t Request_task_get_assignment;
 __Request__task_set_policy_t Request_task_set_policy;
 __Request__task_get_state_t Request_task_get_state;
 __Request__task_set_state_t Request_task_set_state;
 __Request__task_set_phys_footprint_limit_t Request_task_set_phys_footprint_limit;
 __Request__task_suspend2_t Request_task_suspend2;
 __Request__task_resume2_t Request_task_resume2;
 __Request__task_purgable_info_t Request_task_purgable_info;
 __Request__task_get_mach_voucher_t Request_task_get_mach_voucher;
 __Request__task_set_mach_voucher_t Request_task_set_mach_voucher;
 __Request__task_swap_mach_voucher_t Request_task_swap_mach_voucher;
};







#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t child_task;

 } __Reply__task_create_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_terminate_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_ool_ports_descriptor_t act_list;

  NDR_record_t NDR;
  mach_msg_type_number_t act_listCnt;
 } __Reply__task_threads_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__mach_ports_register_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_ool_ports_descriptor_t init_port_set;

  NDR_record_t NDR;
  mach_msg_type_number_t init_port_setCnt;
 } __Reply__mach_ports_lookup_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  mach_msg_type_number_t task_info_outCnt;
  integer_t task_info_out[52];
 } __Reply__task_info_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_set_info_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_suspend_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_resume_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t special_port;

 } __Reply__task_get_special_port_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_set_special_port_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t child_act;

 } __Reply__thread_create_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t child_act;

 } __Reply__thread_create_running_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_set_exception_ports_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t old_handlers[32];

  NDR_record_t NDR;
  mach_msg_type_number_t masksCnt;
  exception_mask_t masks[32];
  exception_behavior_t old_behaviors[32];
  thread_state_flavor_t old_flavors[32];
 } __Reply__task_get_exception_ports_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t old_handlerss[32];

  NDR_record_t NDR;
  mach_msg_type_number_t masksCnt;
  exception_mask_t masks[32];
  exception_behavior_t old_behaviors[32];
  thread_state_flavor_t old_flavors[32];
 } __Reply__task_swap_exception_ports_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t new_lock_set;

 } __Reply__lock_set_create_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__lock_set_destroy_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t semaphore;

 } __Reply__semaphore_create_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__semaphore_destroy_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_policy_set_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  mach_msg_type_number_t policy_infoCnt;
  integer_t policy_info[16];
  boolean_t get_default;
 } __Reply__task_policy_get_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_sample_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_policy_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_set_emulation_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_ool_descriptor_t emulation_vector;

  NDR_record_t NDR;
  int vector_start;
  mach_msg_type_number_t emulation_vectorCnt;
 } __Reply__task_get_emulation_vector_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_set_emulation_vector_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_set_ras_pc_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_ool_descriptor_t names;
  mach_msg_ool_descriptor_t info;

  NDR_record_t NDR;
  mach_msg_type_number_t namesCnt;
  mach_msg_type_number_t infoCnt;
 } __Reply__task_zone_info_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_assign_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_assign_default_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t assigned_set;

 } __Reply__task_get_assignment_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_set_policy_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  mach_msg_type_number_t old_stateCnt;
  natural_t old_state[224];
 } __Reply__task_get_state_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_set_state_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  int old_limit;
 } __Reply__task_set_phys_footprint_limit_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t suspend_token;

 } __Reply__task_suspend2_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_resume2_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
  task_purgable_info_t stats;
 } __Reply__task_purgable_info_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t voucher;

 } __Reply__task_get_mach_voucher_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;
  NDR_record_t NDR;
  kern_return_t RetCode;
 } __Reply__task_set_mach_voucher_t;

#pragma pack()



#pragma pack(4)

 typedef struct {
  mach_msg_header_t Head;

  mach_msg_body_t msgh_body;
  mach_msg_port_descriptor_t old_voucher;

 } __Reply__task_swap_mach_voucher_t;

#pragma pack()







union __ReplyUnion__task_subsystem {
 __Reply__task_create_t Reply_task_create;
 __Reply__task_terminate_t Reply_task_terminate;
 __Reply__task_threads_t Reply_task_threads;
 __Reply__mach_ports_register_t Reply_mach_ports_register;
 __Reply__mach_ports_lookup_t Reply_mach_ports_lookup;
 __Reply__task_info_t Reply_task_info;
 __Reply__task_set_info_t Reply_task_set_info;
 __Reply__task_suspend_t Reply_task_suspend;
 __Reply__task_resume_t Reply_task_resume;
 __Reply__task_get_special_port_t Reply_task_get_special_port;
 __Reply__task_set_special_port_t Reply_task_set_special_port;
 __Reply__thread_create_t Reply_thread_create;
 __Reply__thread_create_running_t Reply_thread_create_running;
 __Reply__task_set_exception_ports_t Reply_task_set_exception_ports;
 __Reply__task_get_exception_ports_t Reply_task_get_exception_ports;
 __Reply__task_swap_exception_ports_t Reply_task_swap_exception_ports;
 __Reply__lock_set_create_t Reply_lock_set_create;
 __Reply__lock_set_destroy_t Reply_lock_set_destroy;
 __Reply__semaphore_create_t Reply_semaphore_create;
 __Reply__semaphore_destroy_t Reply_semaphore_destroy;
 __Reply__task_policy_set_t Reply_task_policy_set;
 __Reply__task_policy_get_t Reply_task_policy_get;
 __Reply__task_sample_t Reply_task_sample;
 __Reply__task_policy_t Reply_task_policy;
 __Reply__task_set_emulation_t Reply_task_set_emulation;
 __Reply__task_get_emulation_vector_t Reply_task_get_emulation_vector;
 __Reply__task_set_emulation_vector_t Reply_task_set_emulation_vector;
 __Reply__task_set_ras_pc_t Reply_task_set_ras_pc;
 __Reply__task_zone_info_t Reply_task_zone_info;
 __Reply__task_assign_t Reply_task_assign;
 __Reply__task_assign_default_t Reply_task_assign_default;
 __Reply__task_get_assignment_t Reply_task_get_assignment;
 __Reply__task_set_policy_t Reply_task_set_policy;
 __Reply__task_get_state_t Reply_task_get_state;
 __Reply__task_set_state_t Reply_task_set_state;
 __Reply__task_set_phys_footprint_limit_t Reply_task_set_phys_footprint_limit;
 __Reply__task_suspend2_t Reply_task_suspend2;
 __Reply__task_resume2_t Reply_task_resume2;
 __Reply__task_purgable_info_t Reply_task_purgable_info;
 __Reply__task_get_mach_voucher_t Reply_task_get_mach_voucher;
 __Reply__task_set_mach_voucher_t Reply_task_set_mach_voucher;
 __Reply__task_swap_mach_voucher_t Reply_task_swap_mach_voucher;
};
# 223 "./include/vlc_threads.h" 2



typedef pthread_t vlc_thread_t;

typedef pthread_mutex_t vlc_mutex_t;

typedef struct
{
    pthread_cond_t cond;
    unsigned clock;
} vlc_cond_t;

typedef semaphore_t vlc_sem_t;
typedef pthread_rwlock_t vlc_rwlock_t;

typedef pthread_key_t vlc_threadvar_t;
typedef struct vlc_timer *vlc_timer_t;
# 361 "./include/vlc_threads.h"
 __attribute__((visibility("default"))) void vlc_mutex_init(vlc_mutex_t *);





 __attribute__((visibility("default"))) void vlc_mutex_init_recursive(vlc_mutex_t *);






 __attribute__((visibility("default"))) void vlc_mutex_destroy(vlc_mutex_t *);
# 386 "./include/vlc_threads.h"
 __attribute__((visibility("default"))) void vlc_mutex_lock(vlc_mutex_t *);
# 405 "./include/vlc_threads.h"
 __attribute__((visibility("default"))) int vlc_mutex_trylock( vlc_mutex_t * ) __attribute__ ((warn_unused_result));






 __attribute__((visibility("default"))) void vlc_mutex_unlock(vlc_mutex_t *);




 __attribute__((visibility("default"))) void vlc_cond_init(vlc_cond_t *);







 __attribute__((visibility("default"))) void vlc_cond_init_daytime(vlc_cond_t *);







 __attribute__((visibility("default"))) void vlc_cond_destroy(vlc_cond_t *);







 __attribute__((visibility("default"))) void vlc_cond_signal(vlc_cond_t *);




 __attribute__((visibility("default"))) void vlc_cond_broadcast(vlc_cond_t *);
# 482 "./include/vlc_threads.h"
 __attribute__((visibility("default"))) void vlc_cond_wait(vlc_cond_t *cond, vlc_mutex_t *mutex);
# 502 "./include/vlc_threads.h"
 __attribute__((visibility("default"))) int vlc_cond_timedwait(vlc_cond_t *cond, vlc_mutex_t *mutex,
                               mtime_t deadline);






 __attribute__((visibility("default"))) void vlc_sem_init(vlc_sem_t *, unsigned count);




 __attribute__((visibility("default"))) void vlc_sem_destroy(vlc_sem_t *);





 __attribute__((visibility("default"))) int vlc_sem_post(vlc_sem_t *);
# 532 "./include/vlc_threads.h"
 __attribute__((visibility("default"))) void vlc_sem_wait(vlc_sem_t *);




 __attribute__((visibility("default"))) void vlc_rwlock_init(vlc_rwlock_t *);




 __attribute__((visibility("default"))) void vlc_rwlock_destroy(vlc_rwlock_t *);







 __attribute__((visibility("default"))) void vlc_rwlock_rdlock(vlc_rwlock_t *);





 __attribute__((visibility("default"))) void vlc_rwlock_wrlock(vlc_rwlock_t *);






 __attribute__((visibility("default"))) void vlc_rwlock_unlock(vlc_rwlock_t *);
# 576 "./include/vlc_threads.h"
 __attribute__((visibility("default"))) int vlc_threadvar_create(vlc_threadvar_t *key, void (*destr) (void *));




 __attribute__((visibility("default"))) void vlc_threadvar_delete(vlc_threadvar_t *);
# 590 "./include/vlc_threads.h"
 __attribute__((visibility("default"))) int vlc_threadvar_set(vlc_threadvar_t key, void *value);
# 599 "./include/vlc_threads.h"
 __attribute__((visibility("default"))) void *vlc_threadvar_get(vlc_threadvar_t);
# 614 "./include/vlc_threads.h"
 __attribute__((visibility("default"))) int vlc_clone(vlc_thread_t *th, void *(*entry)(void *), void *data,
                      int priority) __attribute__ ((warn_unused_result));
# 627 "./include/vlc_threads.h"
 __attribute__((visibility("default"))) void vlc_cancel(vlc_thread_t);
# 641 "./include/vlc_threads.h"
 __attribute__((visibility("default"))) void vlc_join(vlc_thread_t th, void **result);
# 655 "./include/vlc_threads.h"
 __attribute__((visibility("default"))) int vlc_savecancel(void);
# 667 "./include/vlc_threads.h"
 __attribute__((visibility("default"))) void vlc_restorecancel(int state);







 __attribute__((visibility("default"))) void vlc_control_cancel(int cmd, ...);
# 691 "./include/vlc_threads.h"
 __attribute__((visibility("default"))) mtime_t mdate(void);
# 700 "./include/vlc_threads.h"
 __attribute__((visibility("default"))) void mwait(mtime_t deadline);






 __attribute__((visibility("default"))) void msleep(mtime_t delay);
# 777 "./include/vlc_threads.h"
 __attribute__((visibility("default"))) int vlc_timer_create(vlc_timer_t *id, void (*func)(void *), void *data)
__attribute__ ((warn_unused_result));
# 791 "./include/vlc_threads.h"
 __attribute__((visibility("default"))) void vlc_timer_destroy(vlc_timer_t timer);
# 811 "./include/vlc_threads.h"
 __attribute__((visibility("default"))) void vlc_timer_schedule(vlc_timer_t timer, _Bool absolute,
                                mtime_t value, mtime_t interval);
# 824 "./include/vlc_threads.h"
 __attribute__((visibility("default"))) unsigned vlc_timer_getoverrun(vlc_timer_t) __attribute__ ((warn_unused_result));






 __attribute__((visibility("default"))) unsigned vlc_GetCPUCount(void);
# 890 "./include/vlc_threads.h"
static inline void vlc_cleanup_lock (void *lock)
{
    vlc_mutex_unlock ((vlc_mutex_t *)lock);
}
# 920 "./include/vlc_threads.h"
enum
{
   VLC_AVCODEC_MUTEX = 0,
   VLC_GCRYPT_MUTEX,
   VLC_XLIB_MUTEX,
   VLC_MOSAIC_MUTEX,
   VLC_HIGHLIGHT_MUTEX,

   VLC_MAX_MUTEX
};







 __attribute__((visibility("default"))) void vlc_global_mutex(unsigned, _Bool);
# 413 "./include/vlc_common.h" 2
# 478 "./include/vlc_common.h"
__attribute__ ((warn_unused_result))
static inline int64_t GCD ( int64_t a, int64_t b )
{
    while( b )
    {
        int64_t c = a % b;
        a = b;
        b = c;
    }
    return a;
}


__attribute__ ((warn_unused_result))
static inline uint8_t clip_uint8_vlc( int32_t a )
{
    if( a&(~255) ) return (-a)>>31;
    else return a;
}


__attribute__ ((warn_unused_result))
static inline unsigned clz (unsigned x)
{

    return __builtin_clz (x);
# 514 "./include/vlc_common.h"
}







__attribute__ ((warn_unused_result))
static inline unsigned ctz (unsigned x)
{

    return __builtin_ctz (x);
# 537 "./include/vlc_common.h"
}


__attribute__ ((warn_unused_result))
static inline unsigned popcount (unsigned x)
{

    return __builtin_popcount (x);
# 554 "./include/vlc_common.h"
}


__attribute__ ((warn_unused_result))
static inline int popcountll(unsigned long long x)
{

    return __builtin_popcountll(x);
# 571 "./include/vlc_common.h"
}

__attribute__ ((warn_unused_result))
static inline unsigned parity (unsigned x)
{

    return __builtin_parity (x);





}
# 592 "./include/vlc_common.h"
__attribute__ ((warn_unused_result))
static inline uint16_t bswap16 (uint16_t x)
{
    return (x << 8) | (x >> 8);
}


__attribute__ ((warn_unused_result))
static inline uint32_t bswap32 (uint32_t x)
{

    return __builtin_bswap32 (x);






}


__attribute__ ((warn_unused_result))
static inline uint64_t bswap64 (uint64_t x)
{

    return __builtin_bswap64 (x);
# 637 "./include/vlc_common.h"
}







 __attribute__((visibility("default"))) char const * vlc_error( int ) __attribute__ ((warn_unused_result));


# 1 "./include/vlc_arrays.h" 1
# 34 "./include/vlc_arrays.h"
static inline void *realloc_down( void *ptr, size_t size )
{
    void *ret = realloc( ptr, size );
    return ret ? ret : ptr;
}
# 281 "./include/vlc_arrays.h"
typedef struct vlc_array_t
{
    int i_count;
    void ** pp_elems;
} vlc_array_t;

static inline void vlc_array_init( vlc_array_t * p_array )
{
    __builtin___memset_chk (p_array, 0, sizeof(vlc_array_t), __builtin_object_size (p_array, 0));
}

static inline void vlc_array_clear( vlc_array_t * p_array )
{
    free( p_array->pp_elems );
    __builtin___memset_chk (p_array, 0, sizeof(vlc_array_t), __builtin_object_size (p_array, 0));
}

static inline vlc_array_t * vlc_array_new( void )
{
    vlc_array_t * ret = (vlc_array_t *)malloc( sizeof(vlc_array_t) );
    if( ret ) vlc_array_init( ret );
    return ret;
}

static inline void vlc_array_destroy( vlc_array_t * p_array )
{
    if( !p_array )
        return;
    vlc_array_clear( p_array );
    free( p_array );
}



static inline int
vlc_array_count( vlc_array_t * p_array )
{
    return p_array->i_count;
}

static inline void *
vlc_array_item_at_index( vlc_array_t * p_array, int i_index )
{
    return p_array->pp_elems[i_index];
}

static inline int
vlc_array_index_of_item( vlc_array_t * p_array, void * item )
{
    int i;
    for( i = 0; i < p_array->i_count; i++)
    {
        if( p_array->pp_elems[i] == item )
            return i;
    }
    return -1;
}


static inline void
vlc_array_insert( vlc_array_t * p_array, void * p_elem, int i_index )
{
    do { if( (p_array->i_count) > 0 ) (p_array->pp_elems) = (void **) realloc( p_array->pp_elems, sizeof( *(p_array->pp_elems) ) * ( (p_array->i_count) + 1 ) ); else (p_array->pp_elems) = (void **) malloc( sizeof( *(p_array->pp_elems) ) ); if( !(p_array->pp_elems) ) abort(); if( (p_array->i_count) - (i_index) > 0 ) __builtin___memmove_chk ((void**)(p_array->pp_elems) + (i_index) + 1, (void**)(p_array->pp_elems) + (i_index), ((p_array->i_count) - (i_index)) * sizeof(*(p_array->pp_elems)), __builtin_object_size ((void**)(p_array->pp_elems) + (i_index) + 1, 0)); (p_array->pp_elems)[(i_index)] = (p_elem); (p_array->i_count)++; } while(0);
}

static inline void
vlc_array_append( vlc_array_t * p_array, void * p_elem )
{
    vlc_array_insert( p_array, p_elem, p_array->i_count );
}

static inline void
vlc_array_remove( vlc_array_t * p_array, int i_index )
{
    if( i_index >= 0 )
    {
        if( p_array->i_count > 1 )
        {
            __builtin___memmove_chk (p_array->pp_elems + i_index, p_array->pp_elems + i_index+1, ( p_array->i_count - i_index - 1 ) * sizeof( void* ), __builtin_object_size (p_array->pp_elems + i_index, 0));


        }
        p_array->i_count--;
        if( p_array->i_count == 0 )
        {
            free( p_array->pp_elems );
            p_array->pp_elems = ((void*)0);
        }
    }
}
# 381 "./include/vlc_arrays.h"
static inline uint64_t DictHash( const char *psz_string, int hashsize )
{
    uint64_t i_hash = 0;
    if( psz_string )
    {
        while( *psz_string )
        {
            i_hash += *psz_string++;
            i_hash += i_hash << 10;
            i_hash ^= i_hash >> 8;
        }
    }
    return i_hash % hashsize;
}

typedef struct vlc_dictionary_entry_t
{
    char * psz_key;
    void * p_value;
    struct vlc_dictionary_entry_t * p_next;
} vlc_dictionary_entry_t;

typedef struct vlc_dictionary_t
{
    int i_size;
    vlc_dictionary_entry_t ** p_entries;
} vlc_dictionary_t;

static void * const kVLCDictionaryNotFound = ((void*)0);

static inline void vlc_dictionary_init( vlc_dictionary_t * p_dict, int i_size )
{
    p_dict->p_entries = ((void*)0);

    if( i_size > 0 )
    {
        p_dict->p_entries = (vlc_dictionary_entry_t **)calloc( i_size, sizeof(*p_dict->p_entries) );
        if( !p_dict->p_entries )
            i_size = 0;
    }
    p_dict->i_size = i_size;
}

static inline void vlc_dictionary_clear( vlc_dictionary_t * p_dict,
                                         void ( * pf_free )( void * p_data, void * p_obj ),
                                         void * p_obj )
{
    if( p_dict->p_entries )
    {
        for( int i = 0; i < p_dict->i_size; i++ )
        {
            vlc_dictionary_entry_t * p_current, * p_next;
            p_current = p_dict->p_entries[i];
            while( p_current )
            {
                p_next = p_current->p_next;
                if( pf_free != ((void*)0) )
                    ( * pf_free )( p_current->p_value, p_obj );
                free( p_current->psz_key );
                free( p_current );
                p_current = p_next;
            }
        }
        free( p_dict->p_entries );
        p_dict->p_entries = ((void*)0);
    }
    p_dict->i_size = 0;
}

static inline int
vlc_dictionary_has_key( const vlc_dictionary_t * p_dict, const char * psz_key )
{
    if( !p_dict->p_entries )
        return 0;

    int i_pos = DictHash( psz_key, p_dict->i_size );
    return p_dict->p_entries[i_pos] != ((void*)0);
}

static inline void *
vlc_dictionary_value_for_key( const vlc_dictionary_t * p_dict, const char * psz_key )
{
    if( !p_dict->p_entries )
        return kVLCDictionaryNotFound;

    int i_pos = DictHash( psz_key, p_dict->i_size );
    vlc_dictionary_entry_t * p_entry = p_dict->p_entries[i_pos];

    if( !p_entry )
        return kVLCDictionaryNotFound;


    do {
        if( !strcmp( psz_key, p_entry->psz_key ) )
            return p_entry->p_value;
        p_entry = p_entry->p_next;
    } while( p_entry );

    return kVLCDictionaryNotFound;
}

static inline int
vlc_dictionary_keys_count( const vlc_dictionary_t * p_dict )
{
    vlc_dictionary_entry_t * p_entry;
    int i, count = 0;

    if( !p_dict->p_entries )
        return 0;

    for( i = 0; i < p_dict->i_size; i++ )
    {
        for( p_entry = p_dict->p_entries[i]; p_entry; p_entry = p_entry->p_next ) count++;
    }
    return count;
}

static inline char **
vlc_dictionary_all_keys( const vlc_dictionary_t * p_dict )
{
    vlc_dictionary_entry_t * p_entry;
    char ** ppsz_ret;
    int i, count = vlc_dictionary_keys_count( p_dict );

    ppsz_ret = (char**)malloc(sizeof(char *) * (count + 1));
    if( __builtin_expect(!!(!ppsz_ret), 0) )
        return ((void*)0);

    count = 0;
    for( i = 0; i < p_dict->i_size; i++ )
    {
        for( p_entry = p_dict->p_entries[i]; p_entry; p_entry = p_entry->p_next )
            ppsz_ret[count++] = strdup( p_entry->psz_key );
    }
    ppsz_ret[count] = ((void*)0);
    return ppsz_ret;
}

static inline void
__vlc_dictionary_insert( vlc_dictionary_t * p_dict, const char * psz_key,
                         void * p_value, _Bool rebuild )
{
    if( !p_dict->p_entries )
        vlc_dictionary_init( p_dict, 1 );

    int i_pos = DictHash( psz_key, p_dict->i_size );
    vlc_dictionary_entry_t * p_entry;

    p_entry = (vlc_dictionary_entry_t *)malloc(sizeof(*p_entry));
    p_entry->psz_key = strdup( psz_key );
    p_entry->p_value = p_value;
    p_entry->p_next = p_dict->p_entries[i_pos];
    p_dict->p_entries[i_pos] = p_entry;
    if( rebuild )
    {

        int count;
        for( count = 1; p_entry->p_next; count++ )
            p_entry = p_entry->p_next;
        if( count > 3 )
        {

            struct vlc_dictionary_t new_dict;
            int i_new_size = ( (p_dict->i_size+2) * 3) / 2;
            int i;
            vlc_dictionary_init( &new_dict, i_new_size );
            for( i = 0; i < p_dict->i_size; i++ )
            {
                p_entry = p_dict->p_entries[i];
                while( p_entry )
                {
                    __vlc_dictionary_insert( &new_dict, p_entry->psz_key,
                                             p_entry->p_value,
                                             0 );
                    p_entry = p_entry->p_next;
                }
            }

            vlc_dictionary_clear( p_dict, ((void*)0), ((void*)0) );
            p_dict->i_size = new_dict.i_size;
            p_dict->p_entries = new_dict.p_entries;
        }
    }
}

static inline void
vlc_dictionary_insert( vlc_dictionary_t * p_dict, const char * psz_key, void * p_value )
{
    __vlc_dictionary_insert( p_dict, psz_key, p_value, 1 );
}

static inline void
vlc_dictionary_remove_value_for_key( const vlc_dictionary_t * p_dict, const char * psz_key,
                                     void ( * pf_free )( void * p_data, void * p_obj ),
                                     void * p_obj )
{
    if( !p_dict->p_entries )
        return;

    int i_pos = DictHash( psz_key, p_dict->i_size );
    vlc_dictionary_entry_t * p_entry = p_dict->p_entries[i_pos];
    vlc_dictionary_entry_t * p_prev;

    if( !p_entry )
        return;


    p_prev = ((void*)0);
    do {
        if( !strcmp( psz_key, p_entry->psz_key ) )
        {
            if( pf_free != ((void*)0) )
                ( * pf_free )( p_entry->p_value, p_obj );
            if( !p_prev )
                p_dict->p_entries[i_pos] = p_entry->p_next;
            else
                p_prev->p_next = p_entry->p_next;
            free( p_entry->psz_key );
            free( p_entry );
            return;
        }
        p_prev = p_entry;
        p_entry = p_entry->p_next;
    } while( p_entry );


}
# 648 "./include/vlc_common.h" 2
# 666 "./include/vlc_common.h"
__attribute__ ((warn_unused_result))
static inline uint16_t U16_AT (const void *p)
{
    uint16_t x;

    __builtin___memcpy_chk (&x, p, sizeof (x), __builtin_object_size (&x, 0));
    return bswap16(x);
}


__attribute__ ((warn_unused_result))
static inline uint32_t U32_AT (const void *p)
{
    uint32_t x;

    __builtin___memcpy_chk (&x, p, sizeof (x), __builtin_object_size (&x, 0));
    return bswap32(x);
}


__attribute__ ((warn_unused_result))
static inline uint64_t U64_AT (const void *p)
{
    uint64_t x;

    __builtin___memcpy_chk (&x, p, sizeof (x), __builtin_object_size (&x, 0));
    return bswap64(x);
}






__attribute__ ((warn_unused_result))
static inline uint16_t GetWLE (const void *p)
{
    uint16_t x;

    __builtin___memcpy_chk (&x, p, sizeof (x), __builtin_object_size (&x, 0));



    return x;
}


__attribute__ ((warn_unused_result))
static inline uint32_t GetDWLE (const void *p)
{
    uint32_t x;

    __builtin___memcpy_chk (&x, p, sizeof (x), __builtin_object_size (&x, 0));



    return x;
}


__attribute__ ((warn_unused_result))
static inline uint64_t GetQWLE (const void *p)
{
    uint64_t x;

    __builtin___memcpy_chk (&x, p, sizeof (x), __builtin_object_size (&x, 0));



    return x;
}


static inline void SetWBE (void *p, uint16_t w)
{
    w = bswap16(w);
    __builtin___memcpy_chk (p, &w, sizeof (w), __builtin_object_size (p, 0));
}


static inline void SetDWBE (void *p, uint32_t dw)
{
    dw = bswap32(dw);
    __builtin___memcpy_chk (p, &dw, sizeof (dw), __builtin_object_size (p, 0));
}


static inline void SetQWBE (void *p, uint64_t qw)
{
    qw = bswap64(qw);
    __builtin___memcpy_chk (p, &qw, sizeof (qw), __builtin_object_size (p, 0));
}


static inline void SetWLE (void *p, uint16_t w)
{



    __builtin___memcpy_chk (p, &w, sizeof (w), __builtin_object_size (p, 0));
}


static inline void SetDWLE (void *p, uint32_t dw)
{



    __builtin___memcpy_chk (p, &dw, sizeof (dw), __builtin_object_size (p, 0));
}


static inline void SetQWLE (void *p, uint64_t qw)
{



    __builtin___memcpy_chk (p, &qw, sizeof (qw), __builtin_object_size (p, 0));
}
# 813 "./include/vlc_common.h"
 __attribute__((visibility("default"))) _Bool vlc_ureduce( unsigned *, unsigned *, uint64_t, uint64_t, uint64_t );
# 824 "./include/vlc_common.h"
static inline void *vlc_memalign(size_t align, size_t size)
{
    void *base;
    if (__builtin_expect(!!(posix_memalign(&base, align, size)), 0))
        base = ((void*)0);
    return base;
}






 __attribute__((visibility("default"))) char *vlc_gettext( const char *msgid ) __attribute__ ((format_arg(1)));
 __attribute__((visibility("default"))) char *vlc_ngettext( const char *s, const char *p, unsigned long n ) __attribute__ ((format_arg(1))) __attribute__ ((format_arg(2)));




__attribute__ ((format_arg(2)))
static inline const char *vlc_pgettext_aux( const char *ctx, const char *id )
{
    const char *tr = vlc_gettext( ctx );
    return (tr == ctx) ? id : tr;
}




static inline void *xmalloc (size_t len)
{
    void *ptr = malloc (len);
    if (__builtin_expect(!!(ptr == ((void*)0)), 0))
        abort ();
    return ptr;
}

static inline void *xrealloc (void *ptr, size_t len)
{
    void *nptr = realloc (ptr, len);
    if (__builtin_expect(!!(nptr == ((void*)0)), 0))
        abort ();
    return nptr;
}

static inline void *xcalloc (size_t n, size_t size)
{
    void *ptr = calloc (n, size);
    if (__builtin_expect(!!(ptr == ((void*)0)), 0))
        abort ();
    return ptr;
}

static inline char *xstrdup (const char *str)
{
    char *ptr = strdup (str);
    if (__builtin_expect(!!(ptr == ((void*)0)), 0))
        abort ();
    return ptr;
}




 __attribute__((visibility("default"))) const char * VLC_CompileBy( void ) __attribute__ ((warn_unused_result));
 __attribute__((visibility("default"))) const char * VLC_CompileHost( void ) __attribute__ ((warn_unused_result));
 __attribute__((visibility("default"))) const char * VLC_Compiler( void ) __attribute__ ((warn_unused_result));





# 1 "./include/vlc_messages.h" 1
# 44 "./include/vlc_messages.h"
enum vlc_log_type
{
    VLC_MSG_INFO=0,
    VLC_MSG_ERR,
    VLC_MSG_WARN,
    VLC_MSG_DBG,
};




typedef struct vlc_log_t
{
    uintptr_t i_object_id;
    const char *psz_object_type;
    const char *psz_module;
    const char *psz_header;
    const char *file;
    int line;
    const char *func;
} vlc_log_t;

 __attribute__((visibility("default"))) void vlc_Log(vlc_object_t *obj, int prio, const char *module,
                     const char *file, unsigned line, const char *func,
                     const char *format, ...) __attribute__ ((format(printf,7,8)));
 __attribute__((visibility("default"))) void vlc_vaLog(vlc_object_t *obj, int prio, const char *module,
                       const char *file, unsigned line, const char *func,
                       const char *format, va_list ap);
# 92 "./include/vlc_messages.h"
 __attribute__((visibility("default"))) const char *vlc_strerror(int);
 __attribute__((visibility("default"))) const char *vlc_strerror_c(int);
# 103 "./include/vlc_messages.h"
typedef void (*vlc_log_cb) (void *data, int type, const vlc_log_t *item,
                            const char *fmt, va_list args);
# 896 "./include/vlc_common.h" 2
# 1 "./include/vlc_objects.h" 1
# 39 "./include/vlc_objects.h"
struct vlc_object_t
{
    const char *psz_object_type; char *psz_header; int i_flags; _Bool b_force; libvlc_int_t *p_libvlc; vlc_object_t * p_parent;
};

typedef struct vlc_dialog_provider vlc_dialog_provider;




 __attribute__((visibility("default"))) void *vlc_object_create( vlc_object_t *, size_t ) __attribute__ ((malloc)) __attribute__ ((warn_unused_result));
 __attribute__((visibility("default"))) vlc_object_t *vlc_object_find_name( vlc_object_t *, const char * ) __attribute__ ((warn_unused_result)) __attribute__((deprecated));
 __attribute__((visibility("default"))) void * vlc_object_hold( vlc_object_t * );
 __attribute__((visibility("default"))) void vlc_object_release( vlc_object_t * );
 __attribute__((visibility("default"))) vlc_list_t *vlc_list_children( vlc_object_t * ) __attribute__ ((warn_unused_result));
 __attribute__((visibility("default"))) void vlc_list_release( vlc_list_t * );
 __attribute__((visibility("default"))) char *vlc_object_get_name( const vlc_object_t * ) __attribute__ ((warn_unused_result));
# 897 "./include/vlc_common.h" 2
# 1 "./include/vlc_variables.h" 1
# 125 "./include/vlc_variables.h"
enum {
    VLC_VAR_BOOL_TOGGLE,
    VLC_VAR_INTEGER_ADD,
    VLC_VAR_INTEGER_OR,
    VLC_VAR_INTEGER_NAND,
};





 __attribute__((visibility("default"))) int var_Create( vlc_object_t *, const char *, int );


 __attribute__((visibility("default"))) void var_Destroy( vlc_object_t *, const char * );


 __attribute__((visibility("default"))) int var_Change( vlc_object_t *, const char *, int, vlc_value_t *, vlc_value_t * );


 __attribute__((visibility("default"))) int var_Type( vlc_object_t *, const char * ) __attribute__ ((warn_unused_result));


 __attribute__((visibility("default"))) int var_Set( vlc_object_t *, const char *, vlc_value_t );


 __attribute__((visibility("default"))) int var_Get( vlc_object_t *, const char *, vlc_value_t * );


 __attribute__((visibility("default"))) int var_SetChecked( vlc_object_t *, const char *, int, vlc_value_t );

 __attribute__((visibility("default"))) int var_GetChecked( vlc_object_t *, const char *, int, vlc_value_t * );

 __attribute__((visibility("default"))) int var_GetAndSet( vlc_object_t *, const char *, int, vlc_value_t * );

 __attribute__((visibility("default"))) int var_Inherit( vlc_object_t *, const char *, int, vlc_value_t * );

 __attribute__((visibility("default"))) void var_FreeList( vlc_value_t *, vlc_value_t * );
# 174 "./include/vlc_variables.h"
 __attribute__((visibility("default"))) void var_AddCallback( vlc_object_t *, const char *, vlc_callback_t, void * );
 __attribute__((visibility("default"))) void var_DelCallback( vlc_object_t *, const char *, vlc_callback_t, void * );
 __attribute__((visibility("default"))) void var_TriggerCallback( vlc_object_t *, const char * );

 __attribute__((visibility("default"))) void var_AddListCallback( vlc_object_t *, const char *, vlc_list_callback_t, void * );
 __attribute__((visibility("default"))) void var_DelListCallback( vlc_object_t *, const char *, vlc_list_callback_t, void * );
# 199 "./include/vlc_variables.h"
static inline int var_SetInteger( vlc_object_t *p_obj, const char *psz_name,
                                  int64_t i )
{
    vlc_value_t val;
    val.i_int = i;
    return var_SetChecked(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_obj)), psz_object_type), (void)0 , (vlc_object_t *)(p_obj)),psz_name,0x0030,val);
}
# 214 "./include/vlc_variables.h"
static inline int var_SetBool( vlc_object_t *p_obj, const char *psz_name, _Bool b )
{
    vlc_value_t val;
    val.b_bool = b;
    return var_SetChecked(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_obj)), psz_object_type), (void)0 , (vlc_object_t *)(p_obj)),psz_name,0x0020,val);
}

static inline int var_SetCoords( vlc_object_t *obj, const char *name,
                                 int32_t x, int32_t y )
{
    vlc_value_t val;
    val.coords.x = x;
    val.coords.y = y;
    return var_SetChecked(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(obj)), psz_object_type), (void)0 , (vlc_object_t *)(obj)),name,0x00A0,val);
}
# 238 "./include/vlc_variables.h"
static inline int var_SetFloat( vlc_object_t *p_obj, const char *psz_name, float f )
{
    vlc_value_t val;
    val.f_float = f;
    return var_SetChecked(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_obj)), psz_object_type), (void)0 , (vlc_object_t *)(p_obj)),psz_name,0x0050,val);
}
# 252 "./include/vlc_variables.h"
static inline int var_SetString( vlc_object_t *p_obj, const char *psz_name, const char *psz_string )
{
    vlc_value_t val;
    val.psz_string = (char *)psz_string;
    return var_SetChecked(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_obj)), psz_object_type), (void)0 , (vlc_object_t *)(p_obj)),psz_name,0x0040,val);
}
# 266 "./include/vlc_variables.h"
static inline
int var_SetAddress( vlc_object_t *p_obj, const char *psz_name, void *ptr )
{
    vlc_value_t val;
    val.p_address = ptr;
    return var_SetChecked(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_obj)), psz_object_type), (void)0 , (vlc_object_t *)(p_obj)),psz_name,0x0070,val);
}
# 287 "./include/vlc_variables.h"
__attribute__ ((warn_unused_result))
static inline int64_t var_GetInteger( vlc_object_t *p_obj, const char *psz_name )
{
    vlc_value_t val;
    if( !var_GetChecked(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_obj)), psz_object_type), (void)0 , (vlc_object_t *)(p_obj)),psz_name,0x0030,&val) )
        return val.i_int;
    else
        return 0;
}







__attribute__ ((warn_unused_result))
static inline _Bool var_GetBool( vlc_object_t *p_obj, const char *psz_name )
{
    vlc_value_t val; val.b_bool = 0;

    if( !var_GetChecked(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_obj)), psz_object_type), (void)0 , (vlc_object_t *)(p_obj)),psz_name,0x0020,&val) )
        return val.b_bool;
    else
        return 0;
}

static inline void var_GetCoords( vlc_object_t *obj, const char *name,
                                  int32_t *px, int32_t *py )
{
    vlc_value_t val;

    if (__builtin_expect(!!(!var_GetChecked(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(obj)), psz_object_type), (void)0 , (vlc_object_t *)(obj)),name,0x00A0,&val)), 1))
    {
        *px = val.coords.x;
        *py = val.coords.y;
    }
    else
        *px = *py = 0;
}
# 335 "./include/vlc_variables.h"
__attribute__ ((warn_unused_result))
static inline float var_GetFloat( vlc_object_t *p_obj, const char *psz_name )
{
    vlc_value_t val; val.f_float = 0.0;
    if( !var_GetChecked(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_obj)), psz_object_type), (void)0 , (vlc_object_t *)(p_obj)),psz_name,0x0050,&val) )
        return val.f_float;
    else
        return 0.0;
}







__attribute__ ((warn_unused_result)) __attribute__ ((malloc))
static inline char *var_GetString( vlc_object_t *p_obj, const char *psz_name )
{
    vlc_value_t val; val.psz_string = ((void*)0);
    if( var_GetChecked(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_obj)), psz_object_type), (void)0 , (vlc_object_t *)(p_obj)),psz_name,0x0040,&val) )
        return ((void*)0);
    else
        return val.psz_string;
}

__attribute__ ((warn_unused_result)) __attribute__ ((malloc))
static inline char *var_GetNonEmptyString( vlc_object_t *p_obj, const char *psz_name )
{
    vlc_value_t val;
    if( var_GetChecked(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_obj)), psz_object_type), (void)0 , (vlc_object_t *)(p_obj)),psz_name,0x0040,&val) )
        return ((void*)0);
    if( val.psz_string && *val.psz_string )
        return val.psz_string;
    free( val.psz_string );
    return ((void*)0);
}

__attribute__ ((warn_unused_result))
static inline void *var_GetAddress( vlc_object_t *p_obj, const char *psz_name )
{
    vlc_value_t val;
    if( var_GetChecked(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_obj)), psz_object_type), (void)0 , (vlc_object_t *)(p_obj)),psz_name,0x0070,&val) )
        return ((void*)0);
    else
        return val.p_address;
}






static inline int64_t var_IncInteger( vlc_object_t *p_obj, const char *psz_name )
{
    vlc_value_t val;
    val.i_int = 1;
    if( var_GetAndSet( p_obj, psz_name, VLC_VAR_INTEGER_ADD, &val ) )
        return 0;
    return val.i_int;
}







static inline int64_t var_DecInteger( vlc_object_t *p_obj, const char *psz_name )
{
    vlc_value_t val;
    val.i_int = -1;
    if( var_GetAndSet( p_obj, psz_name, VLC_VAR_INTEGER_ADD, &val ) )
        return 0;
    return val.i_int;
}


static inline uint64_t var_OrInteger( vlc_object_t *obj, const char *name,
                                      unsigned v )
{
    vlc_value_t val;
    val.i_int = v;
    if( var_GetAndSet( obj, name, VLC_VAR_INTEGER_OR, &val ) )
        return 0;
    return val.i_int;
}


static inline uint64_t var_NAndInteger( vlc_object_t *obj, const char *name,
                                        unsigned v )
{
    vlc_value_t val;
    val.i_int = v;
    if( var_GetAndSet( obj, name, VLC_VAR_INTEGER_NAND, &val ) )
        return 0;
    return val.i_int;
}
# 441 "./include/vlc_variables.h"
__attribute__ ((warn_unused_result))
static inline int64_t var_CreateGetInteger( vlc_object_t *p_obj, const char *psz_name )
{
    var_Create( __builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_obj)), psz_object_type), (void)0 , (vlc_object_t *)(p_obj)), psz_name, 0x0030 | 0x8000 );
    return var_GetInteger( p_obj, psz_name );
}







__attribute__ ((warn_unused_result))
static inline _Bool var_CreateGetBool( vlc_object_t *p_obj, const char *psz_name )
{
    var_Create( __builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_obj)), psz_object_type), (void)0 , (vlc_object_t *)(p_obj)), psz_name, 0x0020 | 0x8000 );
    return var_GetBool( p_obj, psz_name );
}







__attribute__ ((warn_unused_result))
static inline float var_CreateGetFloat( vlc_object_t *p_obj, const char *psz_name )
{
    var_Create( __builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_obj)), psz_object_type), (void)0 , (vlc_object_t *)(p_obj)), psz_name, 0x0050 | 0x8000 );
    return var_GetFloat( p_obj, psz_name );
}







__attribute__ ((warn_unused_result)) __attribute__ ((malloc))
static inline char *var_CreateGetString( vlc_object_t *p_obj,
                                           const char *psz_name )
{
    var_Create( __builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_obj)), psz_object_type), (void)0 , (vlc_object_t *)(p_obj)), psz_name, 0x0040 | 0x8000 );
    return var_GetString( p_obj, psz_name );
}

__attribute__ ((warn_unused_result)) __attribute__ ((malloc))
static inline char *var_CreateGetNonEmptyString( vlc_object_t *p_obj,
                                                   const char *psz_name )
{
    var_Create( __builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_obj)), psz_object_type), (void)0 , (vlc_object_t *)(p_obj)), psz_name, 0x0040 | 0x8000 );
    return var_GetNonEmptyString( p_obj, psz_name );
}







__attribute__ ((warn_unused_result))
static inline void *var_CreateGetAddress( vlc_object_t *p_obj,
                                           const char *psz_name )
{
    var_Create( __builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_obj)), psz_object_type), (void)0 , (vlc_object_t *)(p_obj)), psz_name, 0x0070 | 0x8000 );
    return var_GetAddress( p_obj, psz_name );
}
# 523 "./include/vlc_variables.h"
__attribute__ ((warn_unused_result))
static inline int64_t var_CreateGetIntegerCommand( vlc_object_t *p_obj, const char *psz_name )
{
    var_Create( __builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_obj)), psz_object_type), (void)0 , (vlc_object_t *)(p_obj)), psz_name, 0x0030 | 0x8000 | 0x2000 );

    return var_GetInteger( p_obj, psz_name );
}







__attribute__ ((warn_unused_result))
static inline _Bool var_CreateGetBoolCommand( vlc_object_t *p_obj, const char *psz_name )
{
    var_Create( __builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_obj)), psz_object_type), (void)0 , (vlc_object_t *)(p_obj)), psz_name, 0x0020 | 0x8000 | 0x2000 );

    return var_GetBool( p_obj, psz_name );
}







__attribute__ ((warn_unused_result))
static inline float var_CreateGetFloatCommand( vlc_object_t *p_obj, const char *psz_name )
{
    var_Create( __builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_obj)), psz_object_type), (void)0 , (vlc_object_t *)(p_obj)), psz_name, 0x0050 | 0x8000 | 0x2000 );

    return var_GetFloat( p_obj, psz_name );
}







__attribute__ ((warn_unused_result)) __attribute__ ((malloc))
static inline char *var_CreateGetStringCommand( vlc_object_t *p_obj,
                                           const char *psz_name )
{
    var_Create( __builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_obj)), psz_object_type), (void)0 , (vlc_object_t *)(p_obj)), psz_name, 0x0040 | 0x8000 | 0x2000 );

    return var_GetString( p_obj, psz_name );
}

__attribute__ ((warn_unused_result)) __attribute__ ((malloc))
static inline char *var_CreateGetNonEmptyStringCommand( vlc_object_t *p_obj,
                                                   const char *psz_name )
{
    var_Create( __builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_obj)), psz_object_type), (void)0 , (vlc_object_t *)(p_obj)), psz_name, 0x0040 | 0x8000 | 0x2000 );

    return var_GetNonEmptyString( p_obj, psz_name );
}







__attribute__ ((warn_unused_result))
static inline int var_CountChoices( vlc_object_t *p_obj, const char *psz_name )
{
    vlc_value_t count;
    if( var_Change( __builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_obj)), psz_object_type), (void)0 , (vlc_object_t *)(p_obj)), psz_name, 0x0026, &count, ((void*)0) ) )
        return 0;
    return count.i_int;
}



static inline _Bool var_ToggleBool( vlc_object_t *p_obj, const char *psz_name )
{
    vlc_value_t val;
    if( var_GetAndSet( p_obj, psz_name, VLC_VAR_BOOL_TOGGLE, &val ) )
        return 0;
    return val.b_bool;
}



__attribute__ ((warn_unused_result))
static inline _Bool var_InheritBool( vlc_object_t *obj, const char *name )
{
    vlc_value_t val;

    if( var_Inherit( obj, name, 0x0020, &val ) )
        val.b_bool = 0;
    return val.b_bool;
}


__attribute__ ((warn_unused_result))
static inline int64_t var_InheritInteger( vlc_object_t *obj, const char *name )
{
    vlc_value_t val;

    if( var_Inherit( obj, name, 0x0030, &val ) )
        val.i_int = 0;
    return val.i_int;
}


__attribute__ ((warn_unused_result))
static inline float var_InheritFloat( vlc_object_t *obj, const char *name )
{
    vlc_value_t val;

    if( var_Inherit( obj, name, 0x0050, &val ) )
        val.f_float = 0.;
    return val.f_float;
}


__attribute__ ((warn_unused_result)) __attribute__ ((malloc))
static inline char *var_InheritString( vlc_object_t *obj, const char *name )
{
    vlc_value_t val;

    if( var_Inherit( obj, name, 0x0040, &val ) )
        val.psz_string = ((void*)0);
    else if( val.psz_string && !*val.psz_string )
    {
        free( val.psz_string );
        val.psz_string = ((void*)0);
    }
    return val.psz_string;
}


__attribute__ ((warn_unused_result))
static inline void *var_InheritAddress( vlc_object_t *obj, const char *name )
{
    vlc_value_t val;

    if( var_Inherit( obj, name, 0x0070, &val ) )
        val.p_address = ((void*)0);
    return val.p_address;
}


 __attribute__((visibility("default"))) int var_InheritURational( vlc_object_t *, unsigned *num, unsigned *den, const char *var );
# 680 "./include/vlc_variables.h"
 __attribute__((visibility("default"))) int var_LocationParse(vlc_object_t *, const char *mrl, const char *prefix);
# 898 "./include/vlc_common.h" 2
# 1 "./include/vlc_main.h" 1
# 29 "./include/vlc_main.h"
struct hotkey;






struct libvlc_int_t
{
    const char *psz_object_type; char *psz_header; int i_flags; _Bool b_force; libvlc_int_t *p_libvlc; vlc_object_t * p_parent;


    const struct hotkey *p_hotkeys;
};
# 899 "./include/vlc_common.h" 2
# 1 "./include/vlc_configuration.h" 1
# 35 "./include/vlc_configuration.h"
# 1 "/usr/include/sys/types.h" 1 3 4
# 84 "/usr/include/sys/types.h" 3 4
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;

typedef unsigned long u_long;


typedef unsigned short ushort;
typedef unsigned int uint;


typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t * qaddr_t;

typedef char * caddr_t;
typedef int32_t daddr_t;



typedef u_int32_t fixpt_t;


# 1 "/usr/include/sys/_types/_blkcnt_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_blkcnt_t.h" 3 4
typedef __darwin_blkcnt_t blkcnt_t;
# 107 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_blksize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_blksize_t.h" 3 4
typedef __darwin_blksize_t blksize_t;
# 108 "/usr/include/sys/types.h" 2 3 4

# 1 "/usr/include/sys/_types/_in_addr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_in_addr_t.h" 3 4
typedef __uint32_t in_addr_t;
# 110 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_in_port_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_in_port_t.h" 3 4
typedef __uint16_t in_port_t;
# 111 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_ino_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ino_t.h" 3 4
typedef __darwin_ino_t ino_t;
# 112 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/_types/_ino64_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ino64_t.h" 3 4
typedef __darwin_ino64_t ino64_t;
# 115 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/_types/_key_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_key_t.h" 3 4
typedef __int32_t key_t;
# 118 "/usr/include/sys/types.h" 2 3 4

# 1 "/usr/include/sys/_types/_nlink_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_nlink_t.h" 3 4
typedef __uint16_t nlink_t;
# 120 "/usr/include/sys/types.h" 2 3 4




typedef int32_t segsz_t;
typedef int32_t swblk_t;
# 185 "/usr/include/sys/types.h" 3 4
typedef __int32_t fd_mask;
# 228 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/_types/_fsblkcnt_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_fsblkcnt_t.h" 3 4
typedef __darwin_fsblkcnt_t fsblkcnt_t;
# 229 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_fsfilcnt_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_fsfilcnt_t.h" 3 4
typedef __darwin_fsfilcnt_t fsfilcnt_t;
# 230 "/usr/include/sys/types.h" 2 3 4
# 36 "./include/vlc_configuration.h" 2





struct config_category_t
{
    int i_id;
    const char *psz_name;
    const char *psz_help;
};

typedef union
{
    char *psz;
    int64_t i;
    float f;
} module_value_t;

typedef int (*vlc_string_list_cb)(vlc_object_t *, const char *,
                                  char ***, char ***);
typedef int (*vlc_integer_list_cb)(vlc_object_t *, const char *,
                                   int64_t **, char ***);

struct module_config_t
{
    uint8_t i_type;
    char i_short;
    unsigned b_advanced:1;
    unsigned b_internal:1;
    unsigned b_unsaveable:1;
    unsigned b_safe:1;
    unsigned b_removed:1;

    char *psz_type;
    char *psz_name;
    char *psz_text;
    char *psz_longtext;

    module_value_t value;
    module_value_t orig;
    module_value_t min;
    module_value_t max;


    uint16_t list_count;
    union
    {
        char **psz;
        int *i;
        vlc_string_list_cb psz_cb;
        vlc_integer_list_cb i_cb;
    } list;
    char **list_text;
};





 __attribute__((visibility("default"))) int config_GetType(vlc_object_t *, const char *) __attribute__ ((warn_unused_result));
 __attribute__((visibility("default"))) int64_t config_GetInt(vlc_object_t *, const char *) __attribute__ ((warn_unused_result));
 __attribute__((visibility("default"))) void config_PutInt(vlc_object_t *, const char *, int64_t);
 __attribute__((visibility("default"))) float config_GetFloat(vlc_object_t *, const char *) __attribute__ ((warn_unused_result));
 __attribute__((visibility("default"))) void config_PutFloat(vlc_object_t *, const char *, float);
 __attribute__((visibility("default"))) char * config_GetPsz(vlc_object_t *, const char *) __attribute__ ((warn_unused_result)) __attribute__ ((malloc));
 __attribute__((visibility("default"))) void config_PutPsz(vlc_object_t *, const char *, const char *);
 __attribute__((visibility("default"))) ssize_t config_GetIntChoices(vlc_object_t *, const char *,
                                     int64_t **, char ***) __attribute__ ((warn_unused_result));
 __attribute__((visibility("default"))) ssize_t config_GetPszChoices(vlc_object_t *, const char *,
                                     char ***, char ***) __attribute__ ((warn_unused_result));

 __attribute__((visibility("default"))) int config_SaveConfigFile( vlc_object_t * );


 __attribute__((visibility("default"))) void config_ResetAll( vlc_object_t * );


 __attribute__((visibility("default"))) module_config_t * config_FindConfig( vlc_object_t *, const char * ) __attribute__ ((warn_unused_result));
 __attribute__((visibility("default"))) char * config_GetDataDir(void) __attribute__ ((warn_unused_result)) __attribute__ ((malloc));
 __attribute__((visibility("default"))) char *config_GetLibDir(void) __attribute__ ((warn_unused_result));

typedef enum vlc_userdir
{
    VLC_HOME_DIR,
    VLC_CONFIG_DIR,
    VLC_DATA_DIR,
    VLC_CACHE_DIR,

    VLC_DESKTOP_DIR=0x80,
    VLC_DOWNLOAD_DIR,
    VLC_TEMPLATES_DIR,
    VLC_PUBLICSHARE_DIR,
    VLC_DOCUMENTS_DIR,
    VLC_MUSIC_DIR,
    VLC_PICTURES_DIR,
    VLC_VIDEOS_DIR,
} vlc_userdir_t;

 __attribute__((visibility("default"))) char * config_GetUserDir( vlc_userdir_t ) __attribute__ ((warn_unused_result)) __attribute__ ((malloc));

 __attribute__((visibility("default"))) void config_AddIntf( vlc_object_t *, const char * );
 __attribute__((visibility("default"))) void config_RemoveIntf( vlc_object_t *, const char * );
 __attribute__((visibility("default"))) _Bool config_ExistIntf( vlc_object_t *, const char * ) __attribute__ ((warn_unused_result));
# 156 "./include/vlc_configuration.h"
struct config_chain_t
{
    config_chain_t *p_next;

    char *psz_name;
    char *psz_value;
};
# 171 "./include/vlc_configuration.h"
 __attribute__((visibility("default"))) void config_ChainParse( vlc_object_t *, const char *psz_prefix, const char *const *ppsz_options, config_chain_t * );
# 184 "./include/vlc_configuration.h"
 __attribute__((visibility("default"))) const char *config_ChainParseOptions( config_chain_t **pp_cfg, const char *ppsz_opts );
# 197 "./include/vlc_configuration.h"
 __attribute__((visibility("default"))) char *config_ChainCreate( char **ppsz_name, config_chain_t **pp_cfg, const char *psz_string ) __attribute__ ((warn_unused_result)) __attribute__ ((malloc));





 __attribute__((visibility("default"))) void config_ChainDestroy( config_chain_t * );




 __attribute__((visibility("default"))) config_chain_t * config_ChainDuplicate( const config_chain_t * ) __attribute__ ((warn_unused_result)) __attribute__ ((malloc));
# 219 "./include/vlc_configuration.h"
 __attribute__((visibility("default"))) char * config_StringUnescape( char *psz_string );
# 230 "./include/vlc_configuration.h"
 __attribute__((visibility("default"))) char * config_StringEscape( const char *psz_string ) __attribute__ ((warn_unused_result)) __attribute__ ((malloc));
# 900 "./include/vlc_common.h" 2
# 33 "modules/demux/wav.c" 2
# 1 "./include/vlc_plugin.h" 1
# 32 "./include/vlc_plugin.h"
enum vlc_module_properties
{
    VLC_MODULE_CREATE,
    VLC_CONFIG_CREATE,



    VLC_MODULE_CPU_REQUIREMENT=0x100,
    VLC_MODULE_SHORTCUT,
    VLC_MODULE_CAPABILITY,
    VLC_MODULE_SCORE,
    VLC_MODULE_CB_OPEN,
    VLC_MODULE_CB_CLOSE,
    VLC_MODULE_NO_UNLOAD,
    VLC_MODULE_NAME,
    VLC_MODULE_SHORTNAME,
    VLC_MODULE_DESCRIPTION,
    VLC_MODULE_HELP,
    VLC_MODULE_TEXTDOMAIN,




    VLC_CONFIG_NAME=0x1000,


    VLC_CONFIG_VALUE,


    VLC_CONFIG_RANGE,


    VLC_CONFIG_ADVANCED,


    VLC_CONFIG_VOLATILE,


    VLC_CONFIG_PERSISTENT_OBSOLETE,


    VLC_CONFIG_PRIVATE,


    VLC_CONFIG_REMOVED,


    VLC_CONFIG_CAPABILITY,


    VLC_CONFIG_SHORTCUT,


    VLC_CONFIG_OLDNAME_OBSOLETE,


    VLC_CONFIG_SAFE,


    VLC_CONFIG_DESC,


    VLC_CONFIG_LIST_OBSOLETE,


    VLC_CONFIG_ADD_ACTION_OBSOLETE,


    VLC_CONFIG_LIST,



    VLC_CONFIG_LIST_CB,




};
# 239 "./include/vlc_plugin.h"
              typedef int (*vlc_set_cb) (void *, void *, int, ...);
# 34 "modules/demux/wav.c" 2
# 1 "./include/vlc_demux.h" 1
# 30 "./include/vlc_demux.h"
# 1 "./include/vlc_es.h" 1
# 28 "./include/vlc_es.h"
# 1 "./include/vlc_fourcc.h" 1
# 575 "./include/vlc_fourcc.h"
 __attribute__((visibility("default"))) vlc_fourcc_t vlc_fourcc_GetCodec( int i_cat, vlc_fourcc_t i_fourcc );
# 586 "./include/vlc_fourcc.h"
 __attribute__((visibility("default"))) vlc_fourcc_t vlc_fourcc_GetCodecFromString( int i_cat, const char * );
# 595 "./include/vlc_fourcc.h"
 __attribute__((visibility("default"))) vlc_fourcc_t vlc_fourcc_GetCodecAudio( vlc_fourcc_t i_fourcc, int i_bits );






 __attribute__((visibility("default"))) const char * vlc_fourcc_GetDescription( int i_cat, vlc_fourcc_t i_fourcc );







 __attribute__((visibility("default"))) const vlc_fourcc_t * vlc_fourcc_GetYUVFallback( vlc_fourcc_t );







 __attribute__((visibility("default"))) const vlc_fourcc_t * vlc_fourcc_GetRGBFallback( vlc_fourcc_t );




 __attribute__((visibility("default"))) _Bool vlc_fourcc_IsYUV( vlc_fourcc_t );





 __attribute__((visibility("default"))) _Bool vlc_fourcc_AreUVPlanesSwapped(vlc_fourcc_t , vlc_fourcc_t );




typedef struct {
    unsigned plane_count;
    struct {
        struct {
            unsigned num;
            unsigned den;
        } w;
        struct {
            unsigned num;
            unsigned den;
        } h;
    } p[4];
    unsigned pixel_size;
    unsigned pixel_bits;
} vlc_chroma_description_t;





 __attribute__((visibility("default"))) const vlc_chroma_description_t * vlc_fourcc_GetChromaDescription( vlc_fourcc_t fourcc ) __attribute__ ((warn_unused_result));
# 29 "./include/vlc_es.h" 2
# 1 "./include/vlc_text_style.h" 1
# 39 "./include/vlc_text_style.h"
typedef struct
{

    char * psz_fontname;
    char * psz_monofontname;

    uint16_t i_features;
    uint16_t i_style_flags;


    float f_font_relsize;
    int i_font_size;
    int i_font_color;

    uint8_t i_font_alpha;
    int i_spacing;


    int i_outline_color;
    uint8_t i_outline_alpha;
    int i_outline_width;


    int i_shadow_color;
    uint8_t i_shadow_alpha;
    int i_shadow_width;


    int i_background_color;
    uint8_t i_background_alpha;
    int i_karaoke_background_color;
    uint8_t i_karaoke_background_alpha;
} text_style_t;
# 106 "./include/vlc_text_style.h"
typedef struct text_segment_t text_segment_t;
# 119 "./include/vlc_text_style.h"
struct text_segment_t {
    char *psz_text;
    text_style_t *style;
    text_segment_t *p_next;
};




 __attribute__((visibility("default"))) text_style_t * text_style_New( void );






 __attribute__((visibility("default"))) text_style_t * text_style_Create( int );




 __attribute__((visibility("default"))) text_style_t * text_style_Copy( text_style_t *, const text_style_t * );




 __attribute__((visibility("default"))) text_style_t * text_style_Duplicate( const text_style_t * );






 __attribute__((visibility("default"))) void text_style_Merge( text_style_t *, const text_style_t *, _Bool b_override );




 __attribute__((visibility("default"))) void text_style_Delete( text_style_t * );
# 167 "./include/vlc_text_style.h"
 __attribute__((visibility("default"))) text_segment_t *text_segment_New( const char * );
# 177 "./include/vlc_text_style.h"
 __attribute__((visibility("default"))) text_segment_t *text_segment_NewInheritStyle( const text_style_t* p_style );






 __attribute__((visibility("default"))) void text_segment_Delete( text_segment_t * );







 __attribute__((visibility("default"))) void text_segment_ChainDelete( text_segment_t * );






 __attribute__((visibility("default"))) text_segment_t * text_segment_Copy( text_segment_t * );

static const struct {
    const char *psz_name;
    uint32_t i_value;
} p_html_colors[] = {

    { "Aqua", 0x00FFFF },
    { "Black", 0x000000 },
    { "Blue", 0x0000FF },
    { "Fuchsia", 0xFF00FF },
    { "Gray", 0x808080 },
    { "Green", 0x008000 },
    { "Lime", 0x00FF00 },
    { "Maroon", 0x800000 },
    { "Navy", 0x000080 },
    { "Olive", 0x808000 },
    { "Purple", 0x800080 },
    { "Red", 0xFF0000 },
    { "Silver", 0xC0C0C0 },
    { "Teal", 0x008080 },
    { "White", 0xFFFFFF },
    { "Yellow", 0xFFFF00 },


    { "AliceBlue", 0xF0F8FF },
    { "AntiqueWhite", 0xFAEBD7 },
    { "Aqua", 0x00FFFF },
    { "Aquamarine", 0x7FFFD4 },
    { "Azure", 0xF0FFFF },
    { "Beige", 0xF5F5DC },
    { "Bisque", 0xFFE4C4 },
    { "Black", 0x000000 },
    { "BlanchedAlmond", 0xFFEBCD },
    { "Blue", 0x0000FF },
    { "BlueViolet", 0x8A2BE2 },
    { "Brown", 0xA52A2A },
    { "BurlyWood", 0xDEB887 },
    { "CadetBlue", 0x5F9EA0 },
    { "Chartreuse", 0x7FFF00 },
    { "Chocolate", 0xD2691E },
    { "Coral", 0xFF7F50 },
    { "CornflowerBlue", 0x6495ED },
    { "Cornsilk", 0xFFF8DC },
    { "Crimson", 0xDC143C },
    { "Cyan", 0x00FFFF },
    { "DarkBlue", 0x00008B },
    { "DarkCyan", 0x008B8B },
    { "DarkGoldenRod", 0xB8860B },
    { "DarkGray", 0xA9A9A9 },
    { "DarkGrey", 0xA9A9A9 },
    { "DarkGreen", 0x006400 },
    { "DarkKhaki", 0xBDB76B },
    { "DarkMagenta", 0x8B008B },
    { "DarkOliveGreen", 0x556B2F },
    { "Darkorange", 0xFF8C00 },
    { "DarkOrchid", 0x9932CC },
    { "DarkRed", 0x8B0000 },
    { "DarkSalmon", 0xE9967A },
    { "DarkSeaGreen", 0x8FBC8F },
    { "DarkSlateBlue", 0x483D8B },
    { "DarkSlateGray", 0x2F4F4F },
    { "DarkSlateGrey", 0x2F4F4F },
    { "DarkTurquoise", 0x00CED1 },
    { "DarkViolet", 0x9400D3 },
    { "DeepPink", 0xFF1493 },
    { "DeepSkyBlue", 0x00BFFF },
    { "DimGray", 0x696969 },
    { "DimGrey", 0x696969 },
    { "DodgerBlue", 0x1E90FF },
    { "FireBrick", 0xB22222 },
    { "FloralWhite", 0xFFFAF0 },
    { "ForestGreen", 0x228B22 },
    { "Fuchsia", 0xFF00FF },
    { "Gainsboro", 0xDCDCDC },
    { "GhostWhite", 0xF8F8FF },
    { "Gold", 0xFFD700 },
    { "GoldenRod", 0xDAA520 },
    { "Gray", 0x808080 },
    { "Grey", 0x808080 },
    { "Green", 0x008000 },
    { "GreenYellow", 0xADFF2F },
    { "HoneyDew", 0xF0FFF0 },
    { "HotPink", 0xFF69B4 },
    { "IndianRed", 0xCD5C5C },
    { "Indigo", 0x4B0082 },
    { "Ivory", 0xFFFFF0 },
    { "Khaki", 0xF0E68C },
    { "Lavender", 0xE6E6FA },
    { "LavenderBlush", 0xFFF0F5 },
    { "LawnGreen", 0x7CFC00 },
    { "LemonChiffon", 0xFFFACD },
    { "LightBlue", 0xADD8E6 },
    { "LightCoral", 0xF08080 },
    { "LightCyan", 0xE0FFFF },
    { "LightGoldenRodYellow", 0xFAFAD2 },
    { "LightGray", 0xD3D3D3 },
    { "LightGrey", 0xD3D3D3 },
    { "LightGreen", 0x90EE90 },
    { "LightPink", 0xFFB6C1 },
    { "LightSalmon", 0xFFA07A },
    { "LightSeaGreen", 0x20B2AA },
    { "LightSkyBlue", 0x87CEFA },
    { "LightSlateGray", 0x778899 },
    { "LightSlateGrey", 0x778899 },
    { "LightSteelBlue", 0xB0C4DE },
    { "LightYellow", 0xFFFFE0 },
    { "Lime", 0x00FF00 },
    { "LimeGreen", 0x32CD32 },
    { "Linen", 0xFAF0E6 },
    { "Magenta", 0xFF00FF },
    { "Maroon", 0x800000 },
    { "MediumAquaMarine", 0x66CDAA },
    { "MediumBlue", 0x0000CD },
    { "MediumOrchid", 0xBA55D3 },
    { "MediumPurple", 0x9370D8 },
    { "MediumSeaGreen", 0x3CB371 },
    { "MediumSlateBlue", 0x7B68EE },
    { "MediumSpringGreen", 0x00FA9A },
    { "MediumTurquoise", 0x48D1CC },
    { "MediumVioletRed", 0xC71585 },
    { "MidnightBlue", 0x191970 },
    { "MintCream", 0xF5FFFA },
    { "MistyRose", 0xFFE4E1 },
    { "Moccasin", 0xFFE4B5 },
    { "NavajoWhite", 0xFFDEAD },
    { "Navy", 0x000080 },
    { "OldLace", 0xFDF5E6 },
    { "Olive", 0x808000 },
    { "OliveDrab", 0x6B8E23 },
    { "Orange", 0xFFA500 },
    { "OrangeRed", 0xFF4500 },
    { "Orchid", 0xDA70D6 },
    { "PaleGoldenRod", 0xEEE8AA },
    { "PaleGreen", 0x98FB98 },
    { "PaleTurquoise", 0xAFEEEE },
    { "PaleVioletRed", 0xD87093 },
    { "PapayaWhip", 0xFFEFD5 },
    { "PeachPuff", 0xFFDAB9 },
    { "Peru", 0xCD853F },
    { "Pink", 0xFFC0CB },
    { "Plum", 0xDDA0DD },
    { "PowderBlue", 0xB0E0E6 },
    { "Purple", 0x800080 },
    { "RebeccaPurple", 0x663399 },
    { "Red", 0xFF0000 },
    { "RosyBrown", 0xBC8F8F },
    { "RoyalBlue", 0x4169E1 },
    { "SaddleBrown", 0x8B4513 },
    { "Salmon", 0xFA8072 },
    { "SandyBrown", 0xF4A460 },
    { "SeaGreen", 0x2E8B57 },
    { "SeaShell", 0xFFF5EE },
    { "Sienna", 0xA0522D },
    { "Silver", 0xC0C0C0 },
    { "SkyBlue", 0x87CEEB },
    { "SlateBlue", 0x6A5ACD },
    { "SlateGray", 0x708090 },
    { "SlateGrey", 0x708090 },
    { "Snow", 0xFFFAFA },
    { "SpringGreen", 0x00FF7F },
    { "SteelBlue", 0x4682B4 },
    { "Tan", 0xD2B48C },
    { "Teal", 0x008080 },
    { "Thistle", 0xD8BFD8 },
    { "Tomato", 0xFF6347 },
    { "Turquoise", 0x40E0D0 },
    { "Violet", 0xEE82EE },
    { "Wheat", 0xF5DEB3 },
    { "White", 0xFFFFFF },
    { "WhiteSmoke", 0xF5F5F5 },
    { "Yellow", 0xFFFF00 },
    { "YellowGreen", 0x9ACD32 },

    { ((void*)0), 0 }
};
# 385 "./include/vlc_text_style.h"
 __attribute__((visibility("default"))) unsigned int vlc_html_color( const char *psz_value, _Bool* ok );
# 30 "./include/vlc_es.h" 2
# 43 "./include/vlc_es.h"
struct video_palette_t
{
    int i_entries;
    uint8_t palette[256][4];
};







typedef struct
{

    _Bool pb_peak[(2)];

    float pf_peak[(2)];


    _Bool pb_gain[(2)];

    float pf_gain[(2)];
} audio_replay_gain_t;




struct audio_format_t
{
    vlc_fourcc_t i_format;
    unsigned int i_rate;



    uint16_t i_physical_channels;



    uint32_t i_original_channels;



    unsigned int i_bytes_per_frame;


    unsigned int i_frame_length;







    unsigned i_bitspersample;
    unsigned i_blockalign;
    uint8_t i_channels;
};
# 148 "./include/vlc_es.h"
typedef enum video_orientation_t
{
    ORIENT_TOP_LEFT = 0,
    ORIENT_TOP_RIGHT,
    ORIENT_BOTTOM_LEFT,
    ORIENT_BOTTOM_RIGHT,
    ORIENT_LEFT_TOP,
    ORIENT_LEFT_BOTTOM,
    ORIENT_RIGHT_TOP,
    ORIENT_RIGHT_BOTTOM,

    ORIENT_NORMAL = ORIENT_TOP_LEFT,
    ORIENT_TRANSPOSED = ORIENT_LEFT_TOP,
    ORIENT_ANTI_TRANSPOSED = ORIENT_RIGHT_BOTTOM,
    ORIENT_HFLIPPED = ORIENT_TOP_RIGHT,
    ORIENT_VFLIPPED = ORIENT_BOTTOM_LEFT,
    ORIENT_ROTATED_180 = ORIENT_BOTTOM_RIGHT,
    ORIENT_ROTATED_270 = ORIENT_LEFT_BOTTOM,
    ORIENT_ROTATED_90 = ORIENT_RIGHT_TOP,
} video_orientation_t;
# 183 "./include/vlc_es.h"
typedef enum video_transform_t
{
    TRANSFORM_IDENTITY = ORIENT_NORMAL,
    TRANSFORM_HFLIP = ORIENT_HFLIPPED,
    TRANSFORM_VFLIP = ORIENT_VFLIPPED,
    TRANSFORM_R180 = ORIENT_ROTATED_180,
    TRANSFORM_R270 = ORIENT_ROTATED_270,
    TRANSFORM_R90 = ORIENT_ROTATED_90,
    TRANSFORM_TRANSPOSE = ORIENT_TRANSPOSED,
    TRANSFORM_ANTI_TRANSPOSE = ORIENT_ANTI_TRANSPOSED
} video_transform_t;




typedef enum video_color_primaries_t
{
    COLOR_PRIMARIES_UNDEF,
    COLOR_PRIMARIES_BT601_525,
    COLOR_PRIMARIES_BT601_625,
    COLOR_PRIMARIES_BT709,
    COLOR_PRIMARIES_BT2020,
    COLOR_PRIMARIES_DCI_P3,

} video_color_primaries_t;




typedef enum video_transfer_func_t
{
    TRANSFER_FUNC_UNDEF,
    TRANSFER_FUNC_LINEAR,
    TRANSFER_FUNC_SRGB ,
    TRANSFER_FUNC_BT709,

} video_transfer_func_t;




typedef enum video_color_space_t
{
    COLOR_SPACE_UNDEF,
    COLOR_SPACE_BT601,
    COLOR_SPACE_BT709,
    COLOR_SPACE_BT2020,
} video_color_space_t;




typedef enum video_chroma_location_t
{
    CHROMA_LOCATION_UNDEF,
    CHROMA_LOCATION_LEFT,
    CHROMA_LOCATION_CENTER,
    CHROMA_LOCATION_TOP_LEFT,
    CHROMA_LOCATION_TOP_CENTER,
    CHROMA_LOCATION_BOTTOM_LEFT,
    CHROMA_LOCATION_BOTTOM_CENTER,
} video_chroma_location_t;




struct video_format_t
{
    vlc_fourcc_t i_chroma;

    unsigned int i_width;
    unsigned int i_height;
    unsigned int i_x_offset;
    unsigned int i_y_offset;
    unsigned int i_visible_width;
    unsigned int i_visible_height;

    unsigned int i_bits_per_pixel;

    unsigned int i_sar_num;
    unsigned int i_sar_den;

    unsigned int i_frame_rate;
    unsigned int i_frame_rate_base;

    uint32_t i_rmask, i_gmask, i_bmask;
    int i_rrshift, i_lrshift;
    int i_rgshift, i_lgshift;
    int i_rbshift, i_lbshift;
    video_palette_t *p_palette;
    video_orientation_t orientation;
    video_color_primaries_t primaries;
    video_transfer_func_t transfer;
    video_color_space_t space;
    _Bool b_color_range_full;
    video_chroma_location_t chroma_location;
};






static inline void video_format_Init( video_format_t *p_src, vlc_fourcc_t i_chroma )
{
    __builtin___memset_chk (p_src, 0, sizeof( video_format_t ), __builtin_object_size (p_src, 0));
    p_src->i_chroma = i_chroma;
    p_src->i_sar_num = p_src->i_sar_den = 1;
    p_src->p_palette = ((void*)0);
}






static inline int video_format_Copy( video_format_t *p_dst, const video_format_t *p_src )
{
    __builtin___memcpy_chk (p_dst, p_src, sizeof( *p_dst ), __builtin_object_size (p_dst, 0));
    if( p_src->p_palette )
    {
        p_dst->p_palette = (video_palette_t *) malloc( sizeof( video_palette_t ) );
        if( !p_dst->p_palette )
            return (-2);
        __builtin___memcpy_chk (p_dst->p_palette, p_src->p_palette, sizeof( *p_dst->p_palette ), __builtin_object_size (p_dst->p_palette, 0));
    }
    return (-0);
}

static inline void video_format_AdjustColorSpace( video_format_t *p_fmt )
{
    if ( p_fmt->primaries == COLOR_PRIMARIES_UNDEF )
    {
        if ( p_fmt->i_visible_height > 576 )
            p_fmt->primaries = COLOR_PRIMARIES_BT709;
        else if ( p_fmt->i_visible_height > 525 )
            p_fmt->primaries = COLOR_PRIMARIES_BT601_625;
        else
            p_fmt->primaries = COLOR_PRIMARIES_BT601_525;
    }

    if ( p_fmt->transfer == TRANSFER_FUNC_UNDEF )
    {
        if ( p_fmt->i_visible_height > 576 )
            p_fmt->transfer = TRANSFER_FUNC_BT709;
        else
            p_fmt->transfer = TRANSFER_FUNC_SRGB;
    }

    if ( p_fmt->space == COLOR_SPACE_UNDEF )
    {
        if ( p_fmt->i_visible_height > 576 )
            p_fmt->space = COLOR_SPACE_BT709;
        else
            p_fmt->space = COLOR_SPACE_BT601;
    }
}





static inline void video_format_Clean( video_format_t *p_src )
{
    free( p_src->p_palette );
    __builtin___memset_chk (p_src, 0, sizeof( video_format_t ), __builtin_object_size (p_src, 0));
}





 __attribute__((visibility("default"))) void video_format_Setup( video_format_t *, vlc_fourcc_t i_chroma,
    int i_width, int i_height, int i_visible_width, int i_visible_height,
    int i_sar_num, int i_sar_den );




 __attribute__((visibility("default"))) void video_format_CopyCrop( video_format_t *, const video_format_t * );




 __attribute__((visibility("default"))) void video_format_ScaleCropAr( video_format_t *, const video_format_t * );





 __attribute__((visibility("default"))) void video_format_ApplyRotation(video_format_t * out,
                                        const video_format_t *in);




 __attribute__((visibility("default"))) void video_format_TransformBy(video_format_t *fmt, video_transform_t transform);





 __attribute__((visibility("default"))) void video_format_TransformTo(video_format_t *fmt, video_orientation_t dst_orientation);




 __attribute__((visibility("default"))) video_transform_t video_format_GetTransform(video_orientation_t src, video_orientation_t dst);





 __attribute__((visibility("default"))) _Bool video_format_IsSimilar( const video_format_t *, const video_format_t * );




 __attribute__((visibility("default"))) void video_format_Print( vlc_object_t *, const char *, const video_format_t * );


static inline video_transform_t transform_Inverse( video_transform_t transform )
{
    switch ( transform ) {
        case TRANSFORM_R90:
            return TRANSFORM_R270;
        case TRANSFORM_R270:
            return TRANSFORM_R90;
        default:
            return transform;
    }
}



struct subs_format_t
{


    char *psz_encoding;


    int i_x_origin;
    int i_y_origin;

    struct
    {

        uint32_t palette[16+1];


        int i_original_frame_width;

        int i_original_frame_height;
    } spu;

    struct
    {
        int i_id;
    } dvb;
    struct
    {
        int i_magazine;
        int i_page;
    } teletext;

    text_style_t *p_style;
};




typedef struct extra_languages_t
{
        char *psz_language;
        char *psz_description;
} extra_languages_t;
# 468 "./include/vlc_es.h"
struct es_format_t
{
    int i_cat;
    vlc_fourcc_t i_codec;
    vlc_fourcc_t i_original_fourcc;

    int i_id;


    int i_group;



    int i_priority;





    char *psz_language;
    char *psz_description;
    unsigned i_extra_languages;
    extra_languages_t *p_extra_languages;

    audio_format_t audio;
    audio_replay_gain_t audio_replay_gain;
    video_format_t video;
    subs_format_t subs;

    unsigned int i_bitrate;
    int i_profile;
    int i_level;

    _Bool b_packetized;
    int i_extra;
    void *p_extra;

};


enum es_format_category_e
{
    UNKNOWN_ES = 0x00,
    VIDEO_ES,
    AUDIO_ES,
    SPU_ES,
    NAV_ES,
};





 __attribute__((visibility("default"))) void video_format_FixRgb( video_format_t * );




 __attribute__((visibility("default"))) void es_format_Init( es_format_t *, int i_cat, vlc_fourcc_t i_codec );




 __attribute__((visibility("default"))) void es_format_InitFromVideo( es_format_t *, const video_format_t * );




 __attribute__((visibility("default"))) int es_format_Copy( es_format_t *p_dst, const es_format_t *p_src );






 __attribute__((visibility("default"))) void es_format_Clean( es_format_t *fmt );







 __attribute__((visibility("default"))) _Bool es_format_IsSimilar( const es_format_t *, const es_format_t * );
# 31 "./include/vlc_demux.h" 2
# 1 "./include/vlc_stream.h" 1
# 27 "./include/vlc_stream.h"
# 1 "./include/vlc_block.h" 1
# 101 "./include/vlc_block.h"
typedef void (*block_free_t) (block_t *);

struct block_t
{
    block_t *p_next;

    uint8_t *p_buffer;
    size_t i_buffer;
    uint8_t *p_start;
    size_t i_size;

    uint32_t i_flags;
    unsigned i_nb_samples;

    mtime_t i_pts;
    mtime_t i_dts;
    mtime_t i_length;


    block_free_t pf_release;
};
# 139 "./include/vlc_block.h"
 __attribute__((visibility("default"))) void block_Init( block_t *, void *, size_t );
 __attribute__((visibility("default"))) block_t *block_Alloc( size_t ) __attribute__ ((warn_unused_result)) __attribute__ ((malloc));
block_t *block_TryRealloc(block_t *, ssize_t pre, size_t body) __attribute__ ((warn_unused_result));
 __attribute__((visibility("default"))) block_t *block_Realloc( block_t *, ssize_t i_pre, size_t i_body ) __attribute__ ((warn_unused_result));

static inline void block_CopyProperties( block_t *dst, block_t *src )
{
    dst->i_flags = src->i_flags;
    dst->i_nb_samples = src->i_nb_samples;
    dst->i_dts = src->i_dts;
    dst->i_pts = src->i_pts;
    dst->i_length = src->i_length;
}

__attribute__ ((warn_unused_result))
static inline block_t *block_Duplicate( block_t *p_block )
{
    block_t *p_dup = block_Alloc( p_block->i_buffer );
    if( p_dup == ((void*)0) )
        return ((void*)0);

    block_CopyProperties( p_dup, p_block );
    __builtin___memcpy_chk (p_dup->p_buffer, p_block->p_buffer, p_block->i_buffer, __builtin_object_size (p_dup->p_buffer, 0));

    return p_dup;
}

static inline void block_Release( block_t *p_block )
{
    p_block->pf_release( p_block );
}

 __attribute__((visibility("default"))) block_t *block_heap_Alloc(void *, size_t) __attribute__ ((warn_unused_result)) __attribute__ ((malloc));
 __attribute__((visibility("default"))) block_t *block_mmap_Alloc(void *addr, size_t length) __attribute__ ((warn_unused_result)) __attribute__ ((malloc));
 __attribute__((visibility("default"))) block_t * block_shm_Alloc(void *addr, size_t length) __attribute__ ((warn_unused_result)) __attribute__ ((malloc));
 __attribute__((visibility("default"))) block_t *block_File(int fd) __attribute__ ((warn_unused_result)) __attribute__ ((malloc));
 __attribute__((visibility("default"))) block_t *block_FilePath(const char *) __attribute__ ((warn_unused_result)) __attribute__ ((malloc));

static inline void block_Cleanup (void *block)
{
    block_Release ((block_t *)block);
}
# 195 "./include/vlc_block.h"
static inline void block_ChainAppend( block_t **pp_list, block_t *p_block )
{
    if( *pp_list == ((void*)0) )
    {
        *pp_list = p_block;
    }
    else
    {
        block_t *p = *pp_list;

        while( p->p_next ) p = p->p_next;
        p->p_next = p_block;
    }
}

static inline void block_ChainLastAppend( block_t ***ppp_last, block_t *p_block )
{
    block_t *p_last = p_block;

    **ppp_last = p_block;

    while( p_last->p_next ) p_last = p_last->p_next;
    *ppp_last = &p_last->p_next;
}

static inline void block_ChainRelease( block_t *p_block )
{
    while( p_block )
    {
        block_t *p_next = p_block->p_next;
        block_Release( p_block );
        p_block = p_next;
    }
}

static size_t block_ChainExtract( block_t *p_list, void *p_data, size_t i_max )
{
    size_t i_total = 0;
    uint8_t *p = (uint8_t*)p_data;

    while( p_list && i_max )
    {
        size_t i_copy = ( ((i_max) < (p_list->i_buffer)) ? (i_max) : (p_list->i_buffer) );
        __builtin___memcpy_chk (p, p_list->p_buffer, i_copy, __builtin_object_size (p, 0));
        i_max -= i_copy;
        i_total += i_copy;
        p += i_copy;

        p_list = p_list->p_next;
    }
    return i_total;
}

static inline void block_ChainProperties( block_t *p_list, int *pi_count, size_t *pi_size, mtime_t *pi_length )
{
    size_t i_size = 0;
    mtime_t i_length = 0;
    int i_count = 0;

    while( p_list )
    {
        i_size += p_list->i_buffer;
        i_length += p_list->i_length;
        i_count++;

        p_list = p_list->p_next;
    }

    if( pi_size )
        *pi_size = i_size;
    if( pi_length )
        *pi_length = i_length;
    if( pi_count )
        *pi_count = i_count;
}

static inline block_t *block_ChainGather( block_t *p_list )
{
    size_t i_total = 0;
    mtime_t i_length = 0;
    block_t *g;

    if( p_list->p_next == ((void*)0) )
        return p_list;

    block_ChainProperties( p_list, ((void*)0), &i_total, &i_length );

    g = block_Alloc( i_total );
    if( !g )
        return ((void*)0);
    block_ChainExtract( p_list, g->p_buffer, g->i_buffer );

    g->i_flags = p_list->i_flags;
    g->i_pts = p_list->i_pts;
    g->i_dts = p_list->i_dts;
    g->i_length = i_length;


    block_ChainRelease( p_list );
    return g;
}
# 313 "./include/vlc_block.h"
 __attribute__((visibility("default"))) block_fifo_t *block_FifoNew( void ) __attribute__ ((warn_unused_result)) __attribute__ ((malloc));
 __attribute__((visibility("default"))) void block_FifoRelease( block_fifo_t * );
 __attribute__((visibility("default"))) void block_FifoEmpty( block_fifo_t * );
 __attribute__((visibility("default"))) void block_FifoPut( block_fifo_t *, block_t * );
 __attribute__((visibility("default"))) block_t * block_FifoGet( block_fifo_t * ) __attribute__ ((warn_unused_result));
 __attribute__((visibility("default"))) block_t * block_FifoShow( block_fifo_t * );
size_t block_FifoSize(block_fifo_t *) __attribute__ ((warn_unused_result));
 __attribute__((visibility("default"))) size_t block_FifoCount(block_fifo_t *) __attribute__ ((warn_unused_result));

typedef struct block_fifo_t vlc_fifo_t;

 __attribute__((visibility("default"))) void vlc_fifo_Lock(vlc_fifo_t *);
 __attribute__((visibility("default"))) void vlc_fifo_Unlock(vlc_fifo_t *);
 __attribute__((visibility("default"))) void vlc_fifo_Signal(vlc_fifo_t *);
 __attribute__((visibility("default"))) void vlc_fifo_Wait(vlc_fifo_t *);
 __attribute__((visibility("default"))) void vlc_fifo_WaitCond(vlc_fifo_t *, vlc_cond_t *);
int vlc_fifo_TimedWaitCond(vlc_fifo_t *, vlc_cond_t *, mtime_t);
 __attribute__((visibility("default"))) void vlc_fifo_QueueUnlocked(vlc_fifo_t *, block_t *);
 __attribute__((visibility("default"))) block_t *vlc_fifo_DequeueUnlocked(vlc_fifo_t *) __attribute__ ((warn_unused_result));
 __attribute__((visibility("default"))) block_t *vlc_fifo_DequeueAllUnlocked(vlc_fifo_t *) __attribute__ ((warn_unused_result));
 __attribute__((visibility("default"))) size_t vlc_fifo_GetCount(const vlc_fifo_t *) __attribute__ ((warn_unused_result));
 __attribute__((visibility("default"))) size_t vlc_fifo_GetBytes(const vlc_fifo_t *) __attribute__ ((warn_unused_result));

__attribute__ ((warn_unused_result)) static inline _Bool vlc_fifo_IsEmpty(const vlc_fifo_t *fifo)
{
    return vlc_fifo_GetCount(fifo) == 0;
}

static inline void vlc_fifo_Cleanup(void *fifo)
{
    vlc_fifo_Unlock((vlc_fifo_t *)fifo);
}
# 28 "./include/vlc_stream.h" 2
# 46 "./include/vlc_stream.h"
struct stream_t
{
    const char *psz_object_type; char *psz_header; int i_flags; _Bool b_force; libvlc_int_t *p_libvlc; vlc_object_t * p_parent;


    module_t *p_module;

    char *psz_url;


    stream_t *p_source;


    ssize_t (*pf_read)(stream_t *, void *, size_t);
    input_item_t *(*pf_readdir)( stream_t * );
    int (*pf_seek)(stream_t *, uint64_t);
    int (*pf_control)( stream_t *, int i_query, va_list );


    stream_sys_t *p_sys;


    input_thread_t *p_input;
};




enum stream_query_e
{

    STREAM_CAN_SEEK,
    STREAM_CAN_FASTSEEK,
    STREAM_CAN_PAUSE,
    STREAM_CAN_CONTROL_PACE,

    STREAM_GET_SIZE=6,
    STREAM_IS_DIRECTORY,


    STREAM_GET_PTS_DELAY = 0x101,
    STREAM_GET_TITLE_INFO,
    STREAM_GET_TITLE,
    STREAM_GET_SEEKPOINT,
    STREAM_GET_META,
    STREAM_GET_CONTENT_TYPE,
    STREAM_GET_SIGNAL,

    STREAM_SET_PAUSE_STATE = 0x200,
    STREAM_SET_TITLE,
    STREAM_SET_SEEKPOINT,


    STREAM_SET_RECORD_STATE,

    STREAM_SET_PRIVATE_ID_STATE = 0x1000,
    STREAM_SET_PRIVATE_ID_CA,
    STREAM_GET_PRIVATE_ID_STATE,
    STREAM_GET_PRIVATE_BLOCK,
};
# 120 "./include/vlc_stream.h"
 __attribute__((visibility("default"))) ssize_t stream_Read(stream_t *, void *, size_t) __attribute__ ((warn_unused_result));
# 138 "./include/vlc_stream.h"
 __attribute__((visibility("default"))) ssize_t stream_Peek(stream_t *, const uint8_t **, size_t) __attribute__ ((warn_unused_result));






 __attribute__((visibility("default"))) uint64_t stream_Tell(const stream_t *) __attribute__ ((warn_unused_result));







 __attribute__((visibility("default"))) int stream_Seek(stream_t *, uint64_t offset) __attribute__ ((warn_unused_result));

 __attribute__((visibility("default"))) int stream_vaControl( stream_t *s, int i_query, va_list args );
 __attribute__((visibility("default"))) void stream_Delete( stream_t *s );
 __attribute__((visibility("default"))) int stream_Control( stream_t *s, int i_query, ... );
 __attribute__((visibility("default"))) block_t * stream_Block( stream_t *s, size_t );
 __attribute__((visibility("default"))) char * stream_ReadLine( stream_t * );
 __attribute__((visibility("default"))) input_item_t *stream_ReadDir( stream_t * );




 __attribute__((visibility("default"))) stream_t *stream_CustomNew(vlc_object_t *, void (*)(stream_t *));




__attribute__ ((warn_unused_result)) static inline int stream_GetSize( stream_t *s, uint64_t *size )
{
    return stream_Control( s, STREAM_GET_SIZE, size );
}

static inline int64_t stream_Size( stream_t *s )
{
    uint64_t i_pos;

    if( stream_GetSize( s, &i_pos ) )
        return 0;
    if( i_pos >> 62 )
        return (int64_t)1 << 62;
    return i_pos;
}





static inline char *stream_ContentType( stream_t *s )
{
    char *res;
    if( stream_Control( s, STREAM_GET_CONTENT_TYPE, &res ) )
        return ((void*)0);
    return res;
}





 __attribute__((visibility("default"))) stream_t * stream_DemuxNew( demux_t *p_demux, const char *psz_demux, es_out_t *out );




 __attribute__((visibility("default"))) void stream_DemuxSend( stream_t *s, block_t *p_block );





 __attribute__((visibility("default"))) int stream_DemuxControlVa( stream_t *s, int, va_list );

static inline int stream_DemuxControl( stream_t *s, int query, ... )
{
    va_list ap;
    int ret;

    __builtin_va_start(ap, query);
    ret = stream_DemuxControlVa( s, query, ap );
    __builtin_va_end(ap);
    return ret;
}





 __attribute__((visibility("default"))) stream_t * stream_MemoryNew(vlc_object_t *p_obj, uint8_t *p_buffer, uint64_t i_size, _Bool b_preserve_memory );






 __attribute__((visibility("default"))) stream_t * stream_UrlNew(vlc_object_t *p_this, const char *psz_url );







 __attribute__((visibility("default"))) stream_t* stream_FilterNew( stream_t *p_source, const char *psz_stream_filter );





 __attribute__((visibility("default"))) input_item_t *stream_FilterDefaultReadDir( stream_t *s );
# 32 "./include/vlc_demux.h" 2
# 1 "./include/vlc_es_out.h" 1
# 36 "./include/vlc_es_out.h"
enum es_out_query_e
{

    ES_OUT_SET_ES,
    ES_OUT_RESTART_ES,


    ES_OUT_SET_ES_DEFAULT,


    ES_OUT_SET_ES_STATE,
    ES_OUT_GET_ES_STATE,


    ES_OUT_SET_GROUP,







    ES_OUT_SET_PCR,
    ES_OUT_SET_GROUP_PCR,
    ES_OUT_RESET_PCR,


    ES_OUT_SET_ES_FMT,


    ES_OUT_SET_NEXT_DISPLAY_TIME,

    ES_OUT_SET_GROUP_META,

    ES_OUT_SET_GROUP_EPG,

    ES_OUT_DEL_GROUP,


    ES_OUT_SET_ES_SCRAMBLED_STATE,






    ES_OUT_GET_EMPTY,


    ES_OUT_SET_META,


    ES_OUT_GET_PCR_SYSTEM,
    ES_OUT_MODIFY_PCR_SYSTEM,


    ES_OUT_PRIVATE_START = 0x10000,
};

struct es_out_t
{
    es_out_id_t *(*pf_add) ( es_out_t *, const es_format_t * );
    int (*pf_send) ( es_out_t *, es_out_id_t *, block_t * );
    void (*pf_del) ( es_out_t *, es_out_id_t * );
    int (*pf_control)( es_out_t *, int i_query, va_list );
    void (*pf_destroy)( es_out_t * );

    es_out_sys_t *p_sys;
};

__attribute__ ((warn_unused_result))
static inline es_out_id_t * es_out_Add( es_out_t *out, const es_format_t *fmt )
{
    return out->pf_add( out, fmt );
}

static inline void es_out_Del( es_out_t *out, es_out_id_t *id )
{
    out->pf_del( out, id );
}

static inline int es_out_Send( es_out_t *out, es_out_id_t *id,
                               block_t *p_block )
{
    return out->pf_send( out, id, p_block );
}

static inline int es_out_vaControl( es_out_t *out, int i_query, va_list args )
{
    return out->pf_control( out, i_query, args );
}

static inline int es_out_Control( es_out_t *out, int i_query, ... )
{
    va_list args;
    int i_result;

    __builtin_va_start(args, i_query);
    i_result = es_out_vaControl( out, i_query, args );
    __builtin_va_end(args);
    return i_result;
}

static inline void es_out_Delete( es_out_t *p_out )
{
    p_out->pf_destroy( p_out );
}

static inline int es_out_ControlSetMeta( es_out_t *out, const vlc_meta_t *p_meta )
{
    return es_out_Control( out, ES_OUT_SET_META, p_meta );
}

static inline int es_out_ControlGetPcrSystem( es_out_t *out, mtime_t *pi_system, mtime_t *pi_delay )
{
    return es_out_Control( out, ES_OUT_GET_PCR_SYSTEM, pi_system, pi_delay );
}
static inline int es_out_ControlModifyPcrSystem( es_out_t *out, _Bool b_absolute, mtime_t i_system )
{
    return es_out_Control( out, ES_OUT_MODIFY_PCR_SYSTEM, b_absolute, i_system );
}
# 33 "./include/vlc_demux.h" 2
# 43 "./include/vlc_demux.h"
struct demux_t
{
    const char *psz_object_type; char *psz_header; int i_flags; _Bool b_force; libvlc_int_t *p_libvlc; vlc_object_t * p_parent;


    module_t *p_module;


    char *psz_access;
    char *psz_demux;
    char *psz_location;
    char *psz_file;


    stream_t *s;


    es_out_t *out;


    int (*pf_demux) ( demux_t * );
    int (*pf_control)( demux_t *, int i_query, va_list args);



    struct
    {
        unsigned int i_update;


        int i_title;
        int i_seekpoint;
    } info;
    demux_sys_t *p_sys;


    input_thread_t *p_input;
};
# 94 "./include/vlc_demux.h"
typedef struct demux_meta_t
{
    const char *psz_object_type; char *psz_header; int i_flags; _Bool b_force; libvlc_int_t *p_libvlc; vlc_object_t * p_parent;
    input_item_t *p_item;

    vlc_meta_t *p_meta;

    int i_attachments;
    input_attachment_t **attachments;
} demux_meta_t;
# 120 "./include/vlc_demux.h"
enum demux_query_e
{





    DEMUX_CAN_SEEK,







    DEMUX_CAN_PAUSE = 0x002,





    DEMUX_CAN_CONTROL_PACE,






    DEMUX_GET_PTS_DELAY = 0x101,





    DEMUX_GET_META = 0x105,





    DEMUX_GET_SIGNAL = 0x107,
# 172 "./include/vlc_demux.h"
    DEMUX_SET_PAUSE_STATE = 0x200,







    DEMUX_SET_TITLE,







    DEMUX_SET_SEEKPOINT,



    DEMUX_GET_POSITION = 0x300,
    DEMUX_SET_POSITION,


    DEMUX_GET_LENGTH,
    DEMUX_GET_TIME,
    DEMUX_SET_TIME,
# 209 "./include/vlc_demux.h"
    DEMUX_GET_TITLE_INFO,





    DEMUX_SET_GROUP,
    DEMUX_SET_ES,






    DEMUX_SET_NEXT_DEMUX_TIME,

    DEMUX_GET_FPS,


    DEMUX_HAS_UNSUPPORTED_META,


    DEMUX_GET_ATTACHMENTS,




    DEMUX_CAN_RECORD,
# 246 "./include/vlc_demux.h"
    DEMUX_SET_RECORD_STATE,






    DEMUX_CAN_CONTROL_RATE,


    DEMUX_SET_RATE,
# 266 "./include/vlc_demux.h"
    DEMUX_IS_PLAYLIST,



    DEMUX_NAV_ACTIVATE,

    DEMUX_NAV_UP,

    DEMUX_NAV_DOWN,

    DEMUX_NAV_LEFT,

    DEMUX_NAV_RIGHT,

    DEMUX_NAV_POPUP,
};






 __attribute__((visibility("default"))) demux_t *demux_New( vlc_object_t *p_obj, const char *psz_name,
                            const char *psz_path, stream_t *s, es_out_t *out );

 __attribute__((visibility("default"))) void demux_Delete( demux_t * );


 __attribute__((visibility("default"))) int demux_vaControlHelper( stream_t *, int64_t i_start, int64_t i_end,
                                   int64_t i_bitrate, int i_align, int i_query, va_list args );

__attribute__ ((warn_unused_result)) static inline int demux_Demux( demux_t *p_demux )
{
    if( !p_demux->pf_demux )
        return 1;

    return p_demux->pf_demux( p_demux );
}

 __attribute__((visibility("default"))) int demux_vaControl( demux_t *p_demux, int i_query, va_list args );

static inline int demux_Control( demux_t *p_demux, int i_query, ... )
{
    va_list args;
    int i_result;

    __builtin_va_start(args, i_query);
    i_result = demux_vaControl( p_demux, i_query, args );
    __builtin_va_end(args);
    return i_result;
}





static inline void demux_UpdateTitleFromStream( demux_t *demux )
{
    stream_t *s = demux->s;
    unsigned title, seekpoint;

    if( stream_Control( s, STREAM_GET_TITLE, &title ) == (-0)
     && title != (unsigned)demux->info.i_title )
    {
        demux->info.i_title = title;
        demux->info.i_update |= 0x0010;
    }

    if( stream_Control( s, STREAM_GET_SEEKPOINT, &seekpoint ) == (-0)
     && seekpoint != (unsigned)demux->info.i_seekpoint )
    {
        demux->info.i_seekpoint = seekpoint;
        demux->info.i_update |= 0x0020;
    }
}

__attribute__ ((warn_unused_result))
static inline _Bool demux_IsPathExtension( demux_t *p_demux, const char *psz_extension )
{
    const char *name = (p_demux->psz_file != ((void*)0)) ? p_demux->psz_file
                                                   : p_demux->psz_location;
    const char *psz_ext = strrchr ( name, '.' );
    if( !psz_ext || strcasecmp( psz_ext, psz_extension ) )
        return 0;
    return 1;
}

__attribute__ ((warn_unused_result))
static inline _Bool demux_IsContentType(demux_t *demux, const char *type)
{
    char *mime = stream_ContentType(demux->s);
    if (mime == ((void*)0))
        return 0;

    size_t len = strlen(type);
    _Bool ok = strncasecmp(mime, type, len) == 0
           && memchr("\t ;", (unsigned char)mime[len], 4) != ((void*)0);

    free(mime);
    return ok;
}

__attribute__ ((warn_unused_result))
static inline _Bool demux_IsForced( demux_t *p_demux, const char *psz_name )
{
   if( !p_demux->psz_demux || strcmp( p_demux->psz_demux, psz_name ) )
        return 0;
    return 1;
}
# 383 "./include/vlc_demux.h"
 __attribute__((visibility("default"))) decoder_t * demux_PacketizerNew( demux_t *p_demux, es_format_t *p_fmt, const char *psz_msg ) __attribute__ ((warn_unused_result));




 __attribute__((visibility("default"))) void demux_PacketizerDestroy( decoder_t *p_packetizer );
# 35 "modules/demux/wav.c" 2
# 1 "./include/vlc_aout.h" 1
# 104 "./include/vlc_aout.h"
struct audio_output
{
    const char *psz_object_type; char *psz_header; int i_flags; _Bool b_force; libvlc_int_t *p_libvlc; vlc_object_t * p_parent;

    struct aout_sys_t *sys;

    int (*start)(audio_output_t *, audio_sample_format_t *fmt);






    void (*stop)(audio_output_t *);



    int (*time_get)(audio_output_t *, mtime_t *delay);






    void (*play)(audio_output_t *, block_t *);



    void (*pause)( audio_output_t *, _Bool pause, mtime_t date);





    void (*flush)( audio_output_t *, _Bool wait);





    int (*volume_set)(audio_output_t *, float volume);





    int (*mute_set)(audio_output_t *, _Bool mute);




    int (*device_select)(audio_output_t *, const char *id);





    struct {
        void (*volume_report)(audio_output_t *, float);
        void (*mute_report)(audio_output_t *, _Bool);
        void (*policy_report)(audio_output_t *, _Bool);
        void (*device_report)(audio_output_t *, const char *);
        void (*hotplug_report)(audio_output_t *, const char *, const char *);
        int (*gain_request)(audio_output_t *, float);
        void (*restart_request)(audio_output_t *, unsigned);
    } event;
};




static const uint32_t pi_vlc_chan_order_wg4[] =
{
    0x2, 0x4,
    0x100, 0x200,
    0x20, 0x40, 0x10,
    0x1, 0x1000, 0
};
# 197 "./include/vlc_aout.h"
 __attribute__((visibility("default"))) unsigned aout_CheckChannelReorder( const uint32_t *, const uint32_t *,
                                           uint32_t mask, uint8_t *table );
 __attribute__((visibility("default"))) void aout_ChannelReorder(void *, size_t, uint8_t, const uint8_t *, vlc_fourcc_t);

 __attribute__((visibility("default"))) void aout_Interleave(void *dst, const void *const *planes,
                             unsigned samples, unsigned channels,
                             vlc_fourcc_t fourcc);
 __attribute__((visibility("default"))) void aout_Deinterleave(void *dst, const void *src, unsigned samples,
                             unsigned channels, vlc_fourcc_t fourcc);
# 223 "./include/vlc_aout.h"
 __attribute__((visibility("default"))) _Bool aout_CheckChannelExtraction( int *pi_selection, uint32_t *pi_layout, int *pi_channels, const uint32_t pi_order_dst[9], const uint32_t *pi_order_src, int i_channels );
# 232 "./include/vlc_aout.h"
 __attribute__((visibility("default"))) void aout_ChannelExtract( void *p_dst, int i_dst_channels, const void *p_src, int i_src_channels, int i_sample_count, const int *pi_selection, int i_bits_per_sample );


static inline unsigned aout_FormatNbChannels(const audio_sample_format_t *fmt)
{
    return popcount(fmt->i_physical_channels);
}

 __attribute__((visibility("default"))) unsigned int aout_BitsPerSample( vlc_fourcc_t i_format ) __attribute__ ((warn_unused_result));
 __attribute__((visibility("default"))) void aout_FormatPrepare( audio_sample_format_t * p_format );
 __attribute__((visibility("default"))) void aout_FormatPrint(vlc_object_t *, const char *,
                              const audio_sample_format_t *);

 __attribute__((visibility("default"))) const char * aout_FormatPrintChannels( const audio_sample_format_t * ) __attribute__ ((warn_unused_result));

 __attribute__((visibility("default"))) float aout_VolumeGet (audio_output_t *);
 __attribute__((visibility("default"))) int aout_VolumeSet (audio_output_t *, float);
 __attribute__((visibility("default"))) int aout_MuteGet (audio_output_t *);
 __attribute__((visibility("default"))) int aout_MuteSet (audio_output_t *, _Bool);
 __attribute__((visibility("default"))) char *aout_DeviceGet (audio_output_t *);
 __attribute__((visibility("default"))) int aout_DeviceSet (audio_output_t *, const char *);
 __attribute__((visibility("default"))) int aout_DevicesList (audio_output_t *, char ***, char ***);




static inline void aout_VolumeReport(audio_output_t *aout, float volume)
{
    aout->event.volume_report(aout, volume);
}




static inline void aout_MuteReport(audio_output_t *aout, _Bool mute)
{
    aout->event.mute_report(aout, mute);
}





static inline void aout_PolicyReport(audio_output_t *aout, _Bool cork)
{
    aout->event.policy_report(aout, cork);
}




static inline void aout_DeviceReport(audio_output_t *aout, const char *id)
{
    aout->event.device_report(aout, id);
}






static inline void aout_HotplugReport(audio_output_t *aout,
                                      const char *id, const char *name)
{
    aout->event.hotplug_report(aout, id, name);
}






static inline int aout_GainRequest(audio_output_t *aout, float gain)
{
    return aout->event.gain_request(aout, gain);
}

static inline void aout_RestartRequest(audio_output_t *aout, unsigned mode)
{
    aout->event.restart_request(aout, mode);
}

static inline int aout_ChannelsRestart (vlc_object_t *obj, const char *varname,
                            vlc_value_t oldval, vlc_value_t newval, void *data)
{
    audio_output_t *aout = (audio_output_t *)obj;
    (void)varname; (void)oldval; (void)newval; (void)data;

    aout_RestartRequest (aout, 2);
    return 0;
}


typedef struct aout_filters aout_filters_t;
typedef struct aout_request_vout aout_request_vout_t;

 __attribute__((visibility("default"))) aout_filters_t *aout_FiltersNew(vlc_object_t *,
                                        const audio_sample_format_t *,
                                        const audio_sample_format_t *,
                                        const aout_request_vout_t *) __attribute__ ((warn_unused_result));


 __attribute__((visibility("default"))) void aout_FiltersDelete(vlc_object_t *, aout_filters_t *);


 __attribute__((visibility("default"))) _Bool aout_FiltersAdjustResampling(aout_filters_t *, int);
 __attribute__((visibility("default"))) block_t *aout_FiltersPlay(aout_filters_t *, block_t *, int rate);
 __attribute__((visibility("default"))) block_t *aout_FiltersDrain(aout_filters_t *);
 __attribute__((visibility("default"))) void aout_FiltersFlush(aout_filters_t *);

 __attribute__((visibility("default"))) vout_thread_t * aout_filter_RequestVout( filter_t *, vout_thread_t *p_vout, video_format_t *p_fmt );
# 36 "modules/demux/wav.c" 2
# 1 "./include/vlc_codecs.h" 1
# 37 "./include/vlc_codecs.h"
typedef struct _GUID
{
    uint32_t Data1;
    uint16_t Data2;
    uint16_t Data3;
    uint8_t Data4[8];
} GUID, *REFGUID, *LPGUID;


typedef GUID guid_t;







#pragma pack(push, 1)







typedef struct

_WAVEFORMATEX {
    uint16_t wFormatTag;
    uint16_t nChannels;
    uint32_t nSamplesPerSec;
    uint32_t nAvgBytesPerSec;
    uint16_t nBlockAlign;
    uint16_t wBitsPerSample;
    uint16_t cbSize;
} WAVEFORMATEX, *PWAVEFORMATEX, *NPWAVEFORMATEX, *LPWAVEFORMATEX;




typedef struct

_WAVEFORMATEXTENSIBLE {
    WAVEFORMATEX Format;
    union {
        uint16_t wValidBitsPerSample;
        uint16_t wSamplesPerBlock;
        uint16_t wReserved;
    } Samples;

    uint32_t dwChannelMask;

    GUID SubFormat;
} WAVEFORMATEXTENSIBLE, *PWAVEFORMATEXTENSIBLE;




typedef struct

_WAVEHEADER {
    uint32_t MainChunkID;
    uint32_t Length;
    uint32_t ChunkTypeID;
    uint32_t SubChunkID;
    uint32_t SubChunkLength;
    uint16_t Format;
    uint16_t Modus;
    uint32_t SampleFreq;
    uint32_t BytesPerSec;
    uint16_t BytesPerSample;
    uint16_t BitsPerSample;
    uint32_t DataChunkID;
    uint32_t DataLength;
} WAVEHEADER;





typedef struct

{
    uint32_t biSize;
    uint32_t biWidth;
    uint32_t biHeight;
    uint16_t biPlanes;
    uint16_t biBitCount;
    uint32_t biCompression;
    uint32_t biSizeImage;
    uint32_t biXPelsPerMeter;
    uint32_t biYPelsPerMeter;
    uint32_t biClrUsed;
    uint32_t biClrImportant;
} VLC_BITMAPINFOHEADER, *VLC_PBITMAPINFOHEADER, *VLC_LPBITMAPINFOHEADER;

typedef struct

{
    VLC_BITMAPINFOHEADER bmiHeader;
    int bmiColors[1];
} VLC_BITMAPINFO, *VLC_LPBITMAPINFO;




typedef struct

{
    int left, top, right, bottom;
} RECT32;




typedef int64_t REFERENCE_TIME;




typedef struct

{
    RECT32 rcSource;
    RECT32 rcTarget;
    uint32_t dwBitRate;
    uint32_t dwBitErrorRate;
    REFERENCE_TIME AvgTimePerFrame;
    VLC_BITMAPINFOHEADER bmiHeader;
} VIDEOINFOHEADER;




typedef struct

{
    uint8_t rgbBlue;
    uint8_t rgbGreen;
    uint8_t rgbRed;
    uint8_t rgbReserved;
} RGBQUAD1;




typedef struct

{
    uint32_t dwBitMasks[3];
    RGBQUAD1 bmiColors[256];
} TRUECOLORINFO;




typedef struct

{
    RECT32 rcSource;
    RECT32 rcTarget;
    uint32_t dwBitRate;
    uint32_t dwBitErrorRate;
    REFERENCE_TIME AvgTimePerFrame;
    VLC_BITMAPINFOHEADER bmiHeader;

    union
    {
        RGBQUAD1 bmiColors[256];
        uint32_t dwBitMasks[3];
        TRUECOLORINFO TrueColorInfo;
    };

} VIDEOINFO;





#pragma pack(pop)
# 338 "./include/vlc_codecs.h"
static const struct
{
    uint16_t i_tag;
    vlc_fourcc_t i_fourcc;
    const char *psz_name;
}
wave_format_tag_to_fourcc[] =
{
    { 0x0001, ( ((uint32_t)'a') | ( ((uint32_t)'r') << 8 ) | ( ((uint32_t)'a') << 16 ) | ( ((uint32_t)'w') << 24 ) ), "Raw audio" },
    { 0x0001, ( ((uint32_t)'s') | ( ((uint32_t)'8') << 8 ) | ( ((uint32_t)' ') << 16 ) | ( ((uint32_t)' ') << 24 ) ), "PCM S8 audio" },
    { 0x0001, ( ((uint32_t)'s') | ( ((uint32_t)'1') << 8 ) | ( ((uint32_t)'6') << 16 ) | ( ((uint32_t)'l') << 24 ) ), "PCM S16L audio" },
    { 0x0001, ( ((uint32_t)'s') | ( ((uint32_t)'2') << 8 ) | ( ((uint32_t)'4') << 16 ) | ( ((uint32_t)'l') << 24 ) ), "PCM S24L audio" },
    { 0x0001, ( ((uint32_t)'s') | ( ((uint32_t)'3') << 8 ) | ( ((uint32_t)'2') << 16 ) | ( ((uint32_t)'l') << 24 ) ), "PCM S32L audio" },
    { 0x0002, ( ((uint32_t)'m') | ( ((uint32_t)'s') << 8 ) | ( ((uint32_t)0x00) << 16 ) | ( ((uint32_t)0x02) << 24 ) ), "ADPCM" },
    { 0x0003, ( ((uint32_t)'a') | ( ((uint32_t)'f') << 8 ) | ( ((uint32_t)'l') << 16 ) | ( ((uint32_t)'t') << 24 ) ), "IEEE Float audio" },
    { 0x0003, ( ((uint32_t)'f') | ( ((uint32_t)'3') << 8 ) | ( ((uint32_t)'2') << 16 ) | ( ((uint32_t)'l') << 24 ) ), "PCM 32 (Float) audio" },
    { 0x0003, ( ((uint32_t)'f') | ( ((uint32_t)'6') << 8 ) | ( ((uint32_t)'4') << 16 ) | ( ((uint32_t)'l') << 24 ) ), "PCM 64 (Float) audio" },
    { 0x0006, ( ((uint32_t)'a') | ( ((uint32_t)'l') << 8 ) | ( ((uint32_t)'a') << 16 ) | ( ((uint32_t)'w') << 24 ) ), "A-Law" },
    { 0x0007, ( ((uint32_t)'m') | ( ((uint32_t)'l') << 8 ) | ( ((uint32_t)'a') << 16 ) | ( ((uint32_t)'w') << 24 ) ), "Mu-Law" },
    { 0x0011, ( ((uint32_t)'m') | ( ((uint32_t)'s') << 8 ) | ( ((uint32_t)0x00) << 16 ) | ( ((uint32_t)0x11) << 24 ) ), "Ima-ADPCM" },
    { 0x0200, ( ((uint32_t)'m') | ( ((uint32_t)'s') << 8 ) | ( ((uint32_t)0x00) << 16 ) | ( ((uint32_t)0xC0) << 24 ) ), "Creative ADPCM" },
    { 0x0020, ( ((uint32_t)'m') | ( ((uint32_t)'s') << 8 ) | ( ((uint32_t)0x00) << 16 ) | ( ((uint32_t)0x20) << 24 ) ), "Yamaha ADPCM" },
    { 0x0022, ( ((uint32_t)0x22) | ( ((uint32_t)0x0) << 8 ) | ( ((uint32_t)0x0) << 16 ) | ( ((uint32_t)0x0) << 24 ) ), "Truespeech" },
    { 0x0031, ( ((uint32_t)'a') | ( ((uint32_t)'g') << 8 ) | ( ((uint32_t)'s') << 16 ) | ( ((uint32_t)'m') << 24 ) ), "Microsoft WAV GSM" },
    { 0x0032, ( ((uint32_t)'a') | ( ((uint32_t)'g') << 8 ) | ( ((uint32_t)'s') << 16 ) | ( ((uint32_t)'m') << 24 ) ), "Microsoft MSN Audio" },
    { 0x0045, ( ((uint32_t)'g') | ( ((uint32_t)'7') << 8 ) | ( ((uint32_t)'2') << 16 ) | ( ((uint32_t)'6') << 24 ) ), "G.726 ADPCM" },
    { 0x0064, ( ((uint32_t)'g') | ( ((uint32_t)'7') << 8 ) | ( ((uint32_t)'2') << 16 ) | ( ((uint32_t)'6') << 24 ) ), "G.726 ADPCM" },
    { 0xa100, ( ((uint32_t)'g') | ( ((uint32_t)'7') << 8 ) | ( ((uint32_t)'2') << 16 ) | ( ((uint32_t)0x31) << 24 ) ), "G.723.1" },
    { 0x0042, ( ((uint32_t)'g') | ( ((uint32_t)'7') << 8 ) | ( ((uint32_t)'2') << 16 ) | ( ((uint32_t)0x31) << 24 ) ), "Microsoft G.723 [G723.1]" },
    { 0x0111, ( ((uint32_t)'g') | ( ((uint32_t)'7') << 8 ) | ( ((uint32_t)'2') << 16 ) | ( ((uint32_t)0x31) << 24 ) ), "Vivo G.723.1" },
    { 0x0055, ( ((uint32_t)'m') | ( ((uint32_t)'p') << 8 ) | ( ((uint32_t)'3') << 16 ) | ( ((uint32_t)' ') << 24 ) ), "Mpeg Audio Layer 3" },
    { 0x0050, ( ((uint32_t)'m') | ( ((uint32_t)'p') << 8 ) | ( ((uint32_t)'g') << 16 ) | ( ((uint32_t)'a') << 24 ) ), "Mpeg Audio" },
    { 0x0057, ( ((uint32_t)'s') | ( ((uint32_t)'a') << 8 ) | ( ((uint32_t)'m') << 16 ) | ( ((uint32_t)'r') << 24 ) ), "AMR NB" },
    { 0x0038, ( ((uint32_t)'s') | ( ((uint32_t)'a') << 8 ) | ( ((uint32_t)'m') << 16 ) | ( ((uint32_t)'r') << 24 ) ), "AMR NB" },
    { 0x0058, ( ((uint32_t)'s') | ( ((uint32_t)'a') << 8 ) | ( ((uint32_t)'w') << 16 ) | ( ((uint32_t)'b') << 24 ) ), "AMR Wideband" },
    { 0x0130, ( ((uint32_t)'s') | ( ((uint32_t)'i') << 8 ) | ( ((uint32_t)'p') << 16 ) | ( ((uint32_t)'r') << 24 ) ), "Sipr Audio" },
    { 0x2000, ( ((uint32_t)'a') | ( ((uint32_t)'5') << 8 ) | ( ((uint32_t)'2') << 16 ) | ( ((uint32_t)' ') << 24 ) ), "A/52" },
    { 0x0160, ( ((uint32_t)'W') | ( ((uint32_t)'M') << 8 ) | ( ((uint32_t)'A') << 16 ) | ( ((uint32_t)'1') << 24 ) ), "Window Media Audio v1" },
    { 0x0161, ( ((uint32_t)'W') | ( ((uint32_t)'M') << 8 ) | ( ((uint32_t)'A') << 16 ) | ( ((uint32_t)'2') << 24 ) ), "Window Media Audio v2" },
    { 0x0162, ( ((uint32_t)'W') | ( ((uint32_t)'M') << 8 ) | ( ((uint32_t)'A') << 16 ) | ( ((uint32_t)'P') << 24 ) ), "Window Media Audio 9 Professional" },
    { 0x0163, ( ((uint32_t)'W') | ( ((uint32_t)'M') << 8 ) | ( ((uint32_t)'A') << 16 ) | ( ((uint32_t)'L') << 24 ) ), "Window Media Audio 9 Lossless" },
    { 0x000a, ( ((uint32_t)'W') | ( ((uint32_t)'M') << 8 ) | ( ((uint32_t)'A') << 16 ) | ( ((uint32_t)'S') << 24 ) ), "Window Media Audio 9 Speech" },
    { 0x0270, ( ((uint32_t)'a') | ( ((uint32_t)'t') << 8 ) | ( ((uint32_t)'r') << 16 ) | ( ((uint32_t)'c') << 24 ) ), "Sony Atrac3" },
    { 0x0272, ( ((uint32_t)'a') | ( ((uint32_t)'t') << 8 ) | ( ((uint32_t)'r') << 16 ) | ( ((uint32_t)'c') << 24 ) ), "Sony Atrac3" },
    { 0x0062, ( ((uint32_t)'m') | ( ((uint32_t)'s') << 8 ) | ( ((uint32_t)0x00) << 16 ) | ( ((uint32_t)0x62) << 24 ) ), "Duck DK3" },
    { 0x0061, ( ((uint32_t)'m') | ( ((uint32_t)'s') << 8 ) | ( ((uint32_t)0x00) << 16 ) | ( ((uint32_t)0x61) << 24 ) ), "Duck DK4" },
    { 0x2001, ( ((uint32_t)'d') | ( ((uint32_t)'t') << 8 ) | ( ((uint32_t)'s') << 16 ) | ( ((uint32_t)' ') << 24 ) ), "DTS Coherent Acoustics" },
    { 0x0008, ( ((uint32_t)'d') | ( ((uint32_t)'t') << 8 ) | ( ((uint32_t)'s') << 16 ) | ( ((uint32_t)' ') << 24 ) ), "DTS Coherent Acoustics" },
    { 0x4143, ( ((uint32_t)'m') | ( ((uint32_t)'p') << 8 ) | ( ((uint32_t)'4') << 16 ) | ( ((uint32_t)'a') << 24 ) ), "MPEG-4 Audio (Divio)" },
    { 0x00FF, ( ((uint32_t)'m') | ( ((uint32_t)'p') << 8 ) | ( ((uint32_t)'4') << 16 ) | ( ((uint32_t)'a') << 24 ) ), "MPEG-4 Audio" },
    { 0x1601, ( ((uint32_t)'m') | ( ((uint32_t)'p') << 8 ) | ( ((uint32_t)'4') << 16 ) | ( ((uint32_t)'a') << 24 ) ), "MPEG-4 Audio" },
    { 0xa106, ( ((uint32_t)'m') | ( ((uint32_t)'p') << 8 ) | ( ((uint32_t)'4') << 16 ) | ( ((uint32_t)'a') << 24 ) ), "MPEG-4 Audio" },
    { 0x1602, ( ((uint32_t)'m') | ( ((uint32_t)'p') << 8 ) | ( ((uint32_t)'4') << 16 ) | ( ((uint32_t)'a') << 24 ) ), "MPEG-4 Audio" },
    { 0x706D, ( ((uint32_t)'m') | ( ((uint32_t)'p') << 8 ) | ( ((uint32_t)'4') << 16 ) | ( ((uint32_t)'a') << 24 ) ), "MPEG-4 Audio" },
    { 0xa106, ( ((uint32_t)'m') | ( ((uint32_t)'p') << 8 ) | ( ((uint32_t)'4') << 16 ) | ( ((uint32_t)'a') << 24 ) ), "MPEG-4 Audio" },
    { 0x566f, ( ((uint32_t)'v') | ( ((uint32_t)'o') << 8 ) | ( ((uint32_t)'r') << 16 ) | ( ((uint32_t)'b') << 24 ) ), "Vorbis Audio" },
    { 0x674f, ( ((uint32_t)'v') | ( ((uint32_t)'o') << 8 ) | ( ((uint32_t)'r') << 16 ) | ( ((uint32_t)'1') << 24 ) ), "Vorbis 1 Audio" },
    { 0x676f, ( ((uint32_t)'v') | ( ((uint32_t)'o') << 8 ) | ( ((uint32_t)'1') << 16 ) | ( ((uint32_t)'+') << 24 ) ), "Vorbis 1+ Audio" },
    { 0x6750, ( ((uint32_t)'v') | ( ((uint32_t)'o') << 8 ) | ( ((uint32_t)'r') << 16 ) | ( ((uint32_t)'2') << 24 ) ), "Vorbis 2 Audio" },
    { 0x6770, ( ((uint32_t)'v') | ( ((uint32_t)'o') << 8 ) | ( ((uint32_t)'2') << 16 ) | ( ((uint32_t)'+') << 24 ) ), "Vorbis 2+ Audio" },
    { 0x6751, ( ((uint32_t)'v') | ( ((uint32_t)'o') << 8 ) | ( ((uint32_t)'r') << 16 ) | ( ((uint32_t)'3') << 24 ) ), "Vorbis 3 Audio" },
    { 0x6771, ( ((uint32_t)'v') | ( ((uint32_t)'o') << 8 ) | ( ((uint32_t)'3') << 16 ) | ( ((uint32_t)'+') << 24 ) ), "Vorbis 3+ Audio" },
    { 0xa109, ( ((uint32_t)'s') | ( ((uint32_t)'p') << 8 ) | ( ((uint32_t)'x') << 16 ) | ( ((uint32_t)' ') << 24 ) ), "Speex Audio" },
    { 0xf1ac, ( ((uint32_t)'f') | ( ((uint32_t)'l') << 8 ) | ( ((uint32_t)'a') << 16 ) | ( ((uint32_t)'c') << 24 ) ), "FLAC Audio" },
    { 0x7A21, ( ((uint32_t)'s') | ( ((uint32_t)'a') << 8 ) | ( ((uint32_t)'m') << 16 ) | ( ((uint32_t)'r') << 24 ) ), "GSM-AMR Audio CBR, no SID" },
    { 0x7A22, ( ((uint32_t)'s') | ( ((uint32_t)'a') << 8 ) | ( ((uint32_t)'m') << 16 ) | ( ((uint32_t)'r') << 24 ) ), "GSM-AMR Audio VBR, SID" },
    { 0x0215, ( ((uint32_t)'m') | ( ((uint32_t)'s') << 8 ) | ( ((uint32_t)0x02) << 16 ) | ( ((uint32_t)0x15) << 24 ) ), "Ulead DV audio NTSC" },
    { 0x0216, ( ((uint32_t)'m') | ( ((uint32_t)'s') << 8 ) | ( ((uint32_t)0x02) << 16 ) | ( ((uint32_t)0x16) << 24 ) ), "Ulead DV audio PAL" },
    { 0x0401, ( ((uint32_t)0x1) | ( ((uint32_t)0x4) << 8 ) | ( ((uint32_t)0x0) << 16 ) | ( ((uint32_t)0x0) << 24 ) ), "IMC" },
    { 0x0402, ( ((uint32_t)'m') | ( ((uint32_t)'s') << 8 ) | ( ((uint32_t)0x04) << 16 ) | ( ((uint32_t)0x02) << 24 ) ), "Indeo Audio Coder" },
    { 0x0075, ( ((uint32_t)'m') | ( ((uint32_t)'s') << 8 ) | ( ((uint32_t)0x00) << 16 ) | ( ((uint32_t)0x75) << 24 ) ), "VoxWare MetaSound" },
    { 0x0500, ( ((uint32_t)'m') | ( ((uint32_t)'s') << 8 ) | ( ((uint32_t)0x05) << 16 ) | ( ((uint32_t)0x00) << 24 ) ), "On2 Audio for Video Codec (VP7)" },
    { 0x0501, ( ((uint32_t)'m') | ( ((uint32_t)'s') << 8 ) | ( ((uint32_t)0x05) << 16 ) | ( ((uint32_t)0x00) << 24 ) ), "On2 Audio for Video Codec (VP6)" },

    { 0x0000, ( ((uint32_t)'u') | ( ((uint32_t)'n') << 8 ) | ( ((uint32_t)'d') << 16 ) | ( ((uint32_t)'f') << 24 ) ), "Unknown" }
};

static inline void wf_tag_to_fourcc( uint16_t i_tag, vlc_fourcc_t *fcc,
                                     const char **ppsz_name )
{
    int i;
    for( i = 0; wave_format_tag_to_fourcc[i].i_tag != 0; i++ )
    {
        if( wave_format_tag_to_fourcc[i].i_tag == i_tag ) break;
    }
    if( fcc ) *fcc = wave_format_tag_to_fourcc[i].i_fourcc;
    if( ppsz_name ) *ppsz_name = wave_format_tag_to_fourcc[i].psz_name;
}

static inline void fourcc_to_wf_tag( vlc_fourcc_t fcc, uint16_t *pi_tag )
{
    int i;
    for( i = 0; wave_format_tag_to_fourcc[i].i_tag != 0; i++ )
    {
        if( wave_format_tag_to_fourcc[i].i_fourcc == fcc ) break;
    }
    if( pi_tag ) *pi_tag = wave_format_tag_to_fourcc[i].i_tag;
}





static const struct
{
    const GUID guid_tag;
    const vlc_fourcc_t i_fourcc;
    const char *psz_name;
}
sub_format_tag_to_fourcc[] =
{
    { {0x00000001, 0x0721, 0x11D3, {0x86, 0x44, 0xC8, 0xC1, 0xCA, 0x00, 0x00, 0x00}}, ( ((uint32_t)'a') | ( ((uint32_t)'r') << 8 ) | ( ((uint32_t)'a') << 16 ) | ( ((uint32_t)'w') << 24 ) ), "Ambisonic B format (PCM)" },
    { {0x00000003, 0x0721, 0x11D3, {0x86, 0x44, 0xC8, 0xC1, 0xCA, 0x00, 0x00, 0x00}}, ( ((uint32_t)'a') | ( ((uint32_t)'f') << 8 ) | ( ((uint32_t)'l') << 16 ) | ( ((uint32_t)'t') << 24 ) ), "Ambisonic B format (IEEE float)" },
    { {0xE923AABF, 0xCB58, 0x4471, {0xA1, 0x19, 0xFF, 0xFA, 0x01, 0xE4, 0xCE, 0x62}}, ( ((uint32_t)'a') | ( ((uint32_t)'t') << 8 ) | ( ((uint32_t)'r') << 16 ) | ( ((uint32_t)'p') << 24 ) ), "Sony Atrac3+" },
    { {0x00000000, 0x0000, 0x0000, {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}}, ( ((uint32_t)'u') | ( ((uint32_t)'n') << 8 ) | ( ((uint32_t)'d') << 16 ) | ( ((uint32_t)'f') << 24 ) ), "Unknown" }
};

static inline int guidcmpbase( const GUID *s1, const GUID *s2 )
{
    return( s1->Data2 == s2->Data2 &&
            s1->Data3 == s2->Data3 && !memcmp( s1->Data4, s2->Data4, 8 ) );
}


static inline int guidcmp( const GUID *s1, const GUID *s2 )
{
    return( s1->Data1 == s2->Data1 && guidcmpbase( s1, s2 ) );
}
# 476 "./include/vlc_codecs.h"
static inline void sf_tag_to_fourcc( const GUID *guid_tag,
                                     vlc_fourcc_t *fcc, const char **ppsz_name )
{
    int i;
    _Bool b_found = 0;

    const GUID unknown = {0x00000000, 0x0000, 0x0000, {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}};
    const GUID waveformatex = {0x00000000, 0x0000, 0x0010, {0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71}};

    for( i = 0; !guidcmp( &sub_format_tag_to_fourcc[i].guid_tag,
                          &unknown ); i++ )
    {
        if( guidcmp( &sub_format_tag_to_fourcc[i].guid_tag, guid_tag ) )
        {
            b_found = 1;
            break;
        }
    }

    if( !b_found && guidcmpbase(guid_tag, &waveformatex) )
    {
        wf_tag_to_fourcc(guid_tag->Data1, fcc, ppsz_name);
    }
    else
    {
        if( fcc ) *fcc = sub_format_tag_to_fourcc[i].i_fourcc;
        if( ppsz_name ) *ppsz_name = sub_format_tag_to_fourcc[i].psz_name;
    }
}
# 37 "modules/demux/wav.c" 2

# 1 "modules/demux/windows_audio_commons.h" 1
# 29 "modules/demux/windows_audio_commons.h"
static const uint32_t pi_channels_src[] = { 0x1,
    0x2, 0x4,
    0x8, 0x10, 0x20,
    0x100, 0x200, 0x400, 0 };

static const uint32_t pi_channels_aout[] = { 0x2, 0x4,
    0x1, 0x1000, 0x20, 0x40,
    0x10, 0x100, 0x200, 0 };

static inline unsigned getChannelMask( uint32_t * wvfextChannelMask, int i_channels, int * i_match )
{
    unsigned i_channel_mask = 0;
    *i_match = 0;
    for( unsigned i = 0;
         i < sizeof(pi_channels_src)/sizeof(*pi_channels_src) &&
         *i_match < i_channels; i++ )
    {
        if( *wvfextChannelMask & pi_channels_src[i] )
        {
            if( !( i_channel_mask & pi_channels_aout[i] ) )
                 *i_match += 1;

            *wvfextChannelMask &= ~pi_channels_src[i];
            i_channel_mask |= pi_channels_aout[i];
        }
    }
    return i_channel_mask;
}
# 39 "modules/demux/wav.c" 2




static int Open ( vlc_object_t * );
static void Close( vlc_object_t * );

 int vlc_entry__MODULE_NAME (vlc_set_cb, void *); int vlc_entry__MODULE_NAME (vlc_set_cb vlc_set, void *opaque) { module_t *module; module_config_t *config = ((void*)0); if (vlc_set (opaque, ((void*)0), VLC_MODULE_CREATE, &module)) goto error; if (vlc_set (opaque, module, VLC_MODULE_NAME, ("modules/demux/wav.c"))) goto error;
    if (vlc_set (opaque, module, VLC_MODULE_DESCRIPTION, (const char *)(N_("WAV demuxer")))) goto error;
    vlc_set (opaque, ((void*)0), VLC_CONFIG_CREATE, (0x06), &config); vlc_set (opaque, config, VLC_CONFIG_VALUE, (int64_t)(4));
    vlc_set (opaque, ((void*)0), VLC_CONFIG_CREATE, (0x07), &config); vlc_set (opaque, config, VLC_CONFIG_VALUE, (int64_t)(403));
    if (vlc_set (opaque, module, VLC_MODULE_CAPABILITY, (const char *)("demux")) || vlc_set (opaque, module, VLC_MODULE_SCORE, (int)(142))) goto error;
    if (vlc_set (opaque, module, VLC_MODULE_CB_OPEN, Open) || vlc_set (opaque, module, VLC_MODULE_CB_CLOSE, Close)) goto error;
(void) config; return 0; error: return -1; }




static int Demux ( demux_t * );
static int Control( demux_t *, int i_query, va_list args );

struct demux_sys_t
{
    es_format_t fmt;
    es_out_id_t *p_es;

    int64_t i_data_pos;
    int64_t i_data_size;

    unsigned int i_frame_size;
    int i_frame_samples;

    date_t pts;

    uint32_t i_channel_mask;
    uint8_t i_chans_to_reorder;
    uint8_t pi_chan_table[9];
};

static int ChunkFind( demux_t *, const char *, unsigned int * );

static int FrameInfo_IMA_ADPCM( unsigned int *, int *, const es_format_t * );
static int FrameInfo_MS_ADPCM ( unsigned int *, int *, const es_format_t * );
static int FrameInfo_Creative_ADPCM( unsigned int *, int *, const es_format_t * );
static int FrameInfo_PCM ( unsigned int *, int *, const es_format_t * );
static int FrameInfo_MSGSM ( unsigned int *, int *, const es_format_t * );




static int Open( vlc_object_t * p_this )
{
    demux_t *p_demux = (demux_t*)p_this;
    demux_sys_t *p_sys;

    const uint8_t *p_peek;
    _Bool b_is_rf64;
    unsigned int i_size;
    uint64_t i_data_size;
    unsigned int i_extended;
    const char *psz_name;

    WAVEFORMATEXTENSIBLE *p_wf_ext = ((void*)0);
    WAVEFORMATEX *p_wf = ((void*)0);


    if( stream_Peek( p_demux->s, &p_peek, 12 ) < 12 )
        return (-1);

    b_is_rf64 = ( memcmp( p_peek, "RF64", 4 ) == 0 );
    if( ( !b_is_rf64 && memcmp( p_peek, "RIFF", 4 ) ) ||
          memcmp( &p_peek[8], "WAVE", 4 ) )
    {
        return (-1);
    }

    p_demux->pf_demux = Demux;
    p_demux->pf_control = Control;
    p_demux->p_sys = p_sys = malloc( sizeof( *p_sys ) );
    if( __builtin_expect(!!(!p_sys), 0) )
        return (-2);

    p_sys->p_es = ((void*)0);
    p_sys->i_data_size = 0;
    p_sys->i_chans_to_reorder = 0;
    p_sys->i_channel_mask = 0;


    if( stream_Read( p_demux->s, ((void*)0), 12 ) != 12 )
        goto error;

    if( b_is_rf64 )
    {

        if( ChunkFind( p_demux, "ds64", &i_size ) )
        {
            vlc_Log(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_demux)), psz_object_type), (void)0 , (vlc_object_t *)(p_demux)), VLC_MSG_ERR, "modules/demux/wav.c", "modules/demux/wav.c", 135, __func__, "cannot find 'ds64' chunk");
            goto error;
        }
        if( i_size < 24 )
        {
            vlc_Log(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_demux)), psz_object_type), (void)0 , (vlc_object_t *)(p_demux)), VLC_MSG_ERR, "modules/demux/wav.c", "modules/demux/wav.c", 140, __func__, "invalid 'ds64' chunk");
            goto error;
        }
        if( stream_Read( p_demux->s, ((void*)0), 8 ) != 8 )
            goto error;
        if( stream_Peek( p_demux->s, &p_peek, 24 ) < 24 )
            goto error;
        i_data_size = GetQWLE( &p_peek[8] );
        if( i_data_size >> 62 )
            p_sys->i_data_size = (int64_t)1 << 62;
        else
            p_sys->i_data_size = i_data_size;
        if( stream_Read( p_demux->s, ((void*)0), i_size ) != (int)i_size ||
            ( (i_size & 1) && stream_Read( p_demux->s, ((void*)0), 1 ) != 1 ) )
            goto error;
    }


    if( ChunkFind( p_demux, "fmt ", &i_size ) )
    {
        vlc_Log(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_demux)), psz_object_type), (void)0 , (vlc_object_t *)(p_demux)), VLC_MSG_ERR, "modules/demux/wav.c", "modules/demux/wav.c", 160, __func__, "cannot find 'fmt ' chunk");
        goto error;
    }
    i_size += 2;
    if( i_size < sizeof( WAVEFORMATEX ) )
    {
        vlc_Log(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_demux)), psz_object_type), (void)0 , (vlc_object_t *)(p_demux)), VLC_MSG_ERR, "modules/demux/wav.c", "modules/demux/wav.c", 166, __func__, "invalid 'fmt ' chunk");
        goto error;
    }
    if( stream_Read( p_demux->s, ((void*)0), 8 ) != 8 )
        goto error;



    p_wf_ext = malloc( i_size );
    if( __builtin_expect(!!(!p_wf_ext), 0) )
         goto error;

    p_wf = &p_wf_ext->Format;
    p_wf->cbSize = 0;
    i_size -= 2;
    if( stream_Read( p_demux->s, p_wf, i_size ) != (int)i_size ||
        ( ( i_size & 1 ) && stream_Read( p_demux->s, ((void*)0), 1 ) != 1 ) )
    {
        vlc_Log(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_demux)), psz_object_type), (void)0 , (vlc_object_t *)(p_demux)), VLC_MSG_ERR, "modules/demux/wav.c", "modules/demux/wav.c", 184, __func__, "cannot load 'fmt ' chunk");
        goto error;
    }

    es_format_Init( &p_sys->fmt, AUDIO_ES, 0 );
    wf_tag_to_fourcc( GetWLE( &p_wf->wFormatTag ), &p_sys->fmt.i_codec,
                      &psz_name );
    p_sys->fmt.audio.i_channels = GetWLE ( &p_wf->nChannels );
    p_sys->fmt.audio.i_rate = GetDWLE( &p_wf->nSamplesPerSec );
    p_sys->fmt.audio.i_blockalign = GetWLE( &p_wf->nBlockAlign );
    p_sys->fmt.i_bitrate = GetDWLE( &p_wf->nAvgBytesPerSec ) * 8;
    p_sys->fmt.audio.i_bitspersample = GetWLE( &p_wf->wBitsPerSample );
    if( i_size >= sizeof(WAVEFORMATEX) )
        p_sys->fmt.i_extra = ( ((GetWLE( &p_wf->cbSize )) < (i_size - sizeof(WAVEFORMATEX))) ? (GetWLE( &p_wf->cbSize )) : (i_size - sizeof(WAVEFORMATEX)) );
    i_extended = 0;




    if( GetWLE( &p_wf->wFormatTag ) == 0xFFFE &&
        i_size >= sizeof( WAVEFORMATEXTENSIBLE ) &&
        ( p_sys->fmt.i_extra + sizeof( WAVEFORMATEX )
            >= sizeof( WAVEFORMATEXTENSIBLE ) ) )
    {
        unsigned i_channel_mask;
        GUID guid_subformat;

        guid_subformat = p_wf_ext->SubFormat;
        guid_subformat.Data1 = GetDWLE( &p_wf_ext->SubFormat.Data1 );
        guid_subformat.Data2 = GetWLE( &p_wf_ext->SubFormat.Data2 );
        guid_subformat.Data3 = GetWLE( &p_wf_ext->SubFormat.Data3 );

        sf_tag_to_fourcc( &guid_subformat, &p_sys->fmt.i_codec, &psz_name );

        vlc_Log(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_demux)), psz_object_type), (void)0 , (vlc_object_t *)(p_demux)), VLC_MSG_DBG, "modules/demux/wav.c", "modules/demux/wav.c", 218, __func__, "extensible format guid " "0x%x-0x%x-0x%x-0x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x%2.2x", (unsigned)(guid_subformat).Data1, (guid_subformat).Data2, (guid_subformat).Data3, (guid_subformat).Data4[0],(guid_subformat).Data4[1],(guid_subformat).Data4[2],(guid_subformat).Data4[3], (guid_subformat).Data4[4],(guid_subformat).Data4[5],(guid_subformat).Data4[6],(guid_subformat).Data4[7]);

        i_extended = sizeof( WAVEFORMATEXTENSIBLE ) - sizeof( WAVEFORMATEX );
        p_sys->fmt.i_extra -= i_extended;

        i_channel_mask = GetDWLE( &p_wf_ext->dwChannelMask );
        if( i_channel_mask )
        {
            int i_match = 0;
            p_sys->i_channel_mask = getChannelMask( &i_channel_mask, p_sys->fmt.audio.i_channels, &i_match );
            if( i_channel_mask )
                vlc_Log(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_demux)), psz_object_type), (void)0 , (vlc_object_t *)(p_demux)), VLC_MSG_WARN, "modules/demux/wav.c", "modules/demux/wav.c", 229, __func__, "Some channels are unrecognized or uselessly specified (0x%x)", i_channel_mask);
            if( i_match < p_sys->fmt.audio.i_channels )
            {
                int i_missing = p_sys->fmt.audio.i_channels - i_match;
                vlc_Log(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_demux)), psz_object_type), (void)0 , (vlc_object_t *)(p_demux)), VLC_MSG_WARN, "modules/demux/wav.c", "modules/demux/wav.c", 233, __func__, "Trying to fill up unspecified position for %d channels", p_sys->fmt.audio.i_channels - i_match);

                static const uint32_t pi_pair[] = { 0x20|0x40,
                                                    0x100|0x200,
                                                    0x2|0x4 };






                for( unsigned i = 0; i < sizeof(pi_pair)/sizeof(*pi_pair); i++ )
                {
                    if( i_missing >= 2 && !(p_sys->i_channel_mask & pi_pair[i] ) )
                    {
                        i_missing -= 2;
                        p_sys->i_channel_mask |= pi_pair[i];
                    }
                }

                for( unsigned i = 0; i < sizeof(pi_channels_aout)/sizeof(*pi_channels_aout) && i_missing > 0; i++ )
                {
                    if( !( p_sys->i_channel_mask & pi_channels_aout[i] ) )
                    {
                        p_sys->i_channel_mask |= pi_channels_aout[i];
                        i_missing--;

                        if( i_missing <= 0 )
                            break;
                    }
                }

                i_match = p_sys->fmt.audio.i_channels - i_missing;
            }
            if( i_match < p_sys->fmt.audio.i_channels )
            {
                vlc_Log(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_demux)), psz_object_type), (void)0 , (vlc_object_t *)(p_demux)), VLC_MSG_ERR, "modules/demux/wav.c", "modules/demux/wav.c", 269, __func__, "Invalid/unsupported channel mask");
                p_sys->i_channel_mask = 0;
            }
        }
    }
    else if( GetWLE( &p_wf->wFormatTag ) == 0x0001 &&
             p_sys->fmt.audio.i_channels > 2 && p_sys->fmt.audio.i_channels <= 9 )
    {
        for( int i = 0; i < p_sys->fmt.audio.i_channels; i++ )
            p_sys->i_channel_mask |= pi_channels_aout[i];
    }

    if( p_sys->i_channel_mask )
    {
        if( p_sys->fmt.i_codec == ( ((uint32_t)'a') | ( ((uint32_t)'r') << 8 ) | ( ((uint32_t)'a') << 16 ) | ( ((uint32_t)'w') << 24 ) ) ||
            p_sys->fmt.i_codec == ( ((uint32_t)'a') | ( ((uint32_t)'f') << 8 ) | ( ((uint32_t)'l') << 16 ) | ( ((uint32_t)'t') << 24 ) ) )
            p_sys->i_chans_to_reorder =
                aout_CheckChannelReorder( pi_channels_aout, ((void*)0),
                                          p_sys->i_channel_mask,
                                          p_sys->pi_chan_table );

        vlc_Log(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_demux)), psz_object_type), (void)0 , (vlc_object_t *)(p_demux)), VLC_MSG_DBG, "modules/demux/wav.c", "modules/demux/wav.c", 291, __func__, "channel mask: %x, reordering: %u", p_sys->i_channel_mask, p_sys->i_chans_to_reorder);

    }

    p_sys->fmt.audio.i_physical_channels =
    p_sys->fmt.audio.i_original_channels = p_sys->i_channel_mask;

    if( p_sys->fmt.i_extra > 0 )
    {
        p_sys->fmt.p_extra = malloc( p_sys->fmt.i_extra );
        if( __builtin_expect(!!(!p_sys->fmt.p_extra), 0) )
        {
            p_sys->fmt.i_extra = 0;
            goto error;
        }
        __builtin___memcpy_chk (p_sys->fmt.p_extra, (uint8_t *)p_wf + sizeof( WAVEFORMATEX ) + i_extended, p_sys->fmt.i_extra, __builtin_object_size (p_sys->fmt.p_extra, 0));

    }

    vlc_Log(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_demux)), psz_object_type), (void)0 , (vlc_object_t *)(p_demux)), VLC_MSG_DBG, "modules/demux/wav.c", "modules/demux/wav.c", 315, __func__, "format: 0x%4.4x, fourcc: %4.4s, channels: %d, " "freq: %u Hz, bitrate: %uKo/s, blockalign: %d, bits/samples: %d, " "extra size: %d", GetWLE( &p_wf->wFormatTag ), (char *)&p_sys->fmt.i_codec, p_sys->fmt.audio.i_channels, p_sys->fmt.audio.i_rate, p_sys->fmt.i_bitrate / 8 / 1024, p_sys->fmt.audio.i_blockalign, p_sys->fmt.audio.i_bitspersample, p_sys->fmt.i_extra);







    free( p_wf );
    p_wf = ((void*)0);

    switch( p_sys->fmt.i_codec )
    {
    case ( ((uint32_t)'a') | ( ((uint32_t)'r') << 8 ) | ( ((uint32_t)'a') << 16 ) | ( ((uint32_t)'w') << 24 ) ):
    case ( ((uint32_t)'a') | ( ((uint32_t)'f') << 8 ) | ( ((uint32_t)'l') << 16 ) | ( ((uint32_t)'t') << 24 ) ):
    case ( ((uint32_t)'u') | ( ((uint32_t)'l') << 8 ) | ( ((uint32_t)'a') << 16 ) | ( ((uint32_t)'w') << 24 ) ):
    case ( ((uint32_t)'a') | ( ((uint32_t)'l') << 8 ) | ( ((uint32_t)'a') << 16 ) | ( ((uint32_t)'w') << 24 ) ):
    case ( ((uint32_t)'m') | ( ((uint32_t)'l') << 8 ) | ( ((uint32_t)'a') << 16 ) | ( ((uint32_t)'w') << 24 ) ):
        if( FrameInfo_PCM( &p_sys->i_frame_size, &p_sys->i_frame_samples,
                           &p_sys->fmt ) )
            goto error;
        p_sys->fmt.i_codec =
            vlc_fourcc_GetCodecAudio( p_sys->fmt.i_codec,
                                      p_sys->fmt.audio.i_bitspersample );
        if( p_sys->fmt.i_codec == 0 ) {
            vlc_Log(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_demux)), psz_object_type), (void)0 , (vlc_object_t *)(p_demux)), VLC_MSG_ERR, "modules/demux/wav.c", "modules/demux/wav.c", 334, __func__, "Unrecognized codec");
            goto error;
        }
        break;
    case ( ((uint32_t)'m') | ( ((uint32_t)'s') << 8 ) | ( ((uint32_t)0x00) << 16 ) | ( ((uint32_t)0x02) << 24 ) ):

    case ( ((uint32_t)'m') | ( ((uint32_t)'s') << 8 ) | ( ((uint32_t)0x00) << 16 ) | ( ((uint32_t)0x61) << 24 ) ):
    case ( ((uint32_t)'m') | ( ((uint32_t)'s') << 8 ) | ( ((uint32_t)0x00) << 16 ) | ( ((uint32_t)0x62) << 24 ) ):
        if( FrameInfo_MS_ADPCM( &p_sys->i_frame_size, &p_sys->i_frame_samples,
                                &p_sys->fmt ) )
            goto error;
        break;
    case ( ((uint32_t)'m') | ( ((uint32_t)'s') << 8 ) | ( ((uint32_t)0x00) << 16 ) | ( ((uint32_t)0x11) << 24 ) ):
        if( FrameInfo_IMA_ADPCM( &p_sys->i_frame_size, &p_sys->i_frame_samples,
                                 &p_sys->fmt ) )
            goto error;
        break;
    case ( ((uint32_t)'m') | ( ((uint32_t)'s') << 8 ) | ( ((uint32_t)0x00) << 16 ) | ( ((uint32_t)0xC0) << 24 ) ):
        if( FrameInfo_Creative_ADPCM( &p_sys->i_frame_size, &p_sys->i_frame_samples,
                                      &p_sys->fmt ) )
            goto error;
        break;
    case ( ((uint32_t)'m') | ( ((uint32_t)'p') << 8 ) | ( ((uint32_t)'g') << 16 ) | ( ((uint32_t)'a') << 24 ) ):
    case ( ((uint32_t)'a') | ( ((uint32_t)'5') << 8 ) | ( ((uint32_t)'2') << 16 ) | ( ((uint32_t)' ') << 24 ) ):

        goto error;
    case ( ((uint32_t)'a') | ( ((uint32_t)'g') << 8 ) | ( ((uint32_t)'s') << 16 ) | ( ((uint32_t)'m') << 24 ) ):
    case ( ((uint32_t)'g') | ( ((uint32_t)'7') << 8 ) | ( ((uint32_t)'2') << 16 ) | ( ((uint32_t)'6') << 24 ) ):
    case ( ((uint32_t)0x22) | ( ((uint32_t)0x0) << 8 ) | ( ((uint32_t)0x0) << 16 ) | ( ((uint32_t)0x0) << 24 ) ):
    case ( ((uint32_t)'a') | ( ((uint32_t)'t') << 8 ) | ( ((uint32_t)'r') << 16 ) | ( ((uint32_t)'p') << 24 ) ):
    case ( ((uint32_t)'a') | ( ((uint32_t)'t') << 8 ) | ( ((uint32_t)'r') << 16 ) | ( ((uint32_t)'c') << 24 ) ):
    case ( ((uint32_t)'g') | ( ((uint32_t)'7') << 8 ) | ( ((uint32_t)'2') << 16 ) | ( ((uint32_t)0x31) << 24 ) ):
    case ( ((uint32_t)'W') | ( ((uint32_t)'M') << 8 ) | ( ((uint32_t)'A') << 16 ) | ( ((uint32_t)'2') << 24 ) ):
        if( FrameInfo_MSGSM( &p_sys->i_frame_size, &p_sys->i_frame_samples,
                             &p_sys->fmt ) )
            goto error;
        break;
    default:
        vlc_Log(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_demux)), psz_object_type), (void)0 , (vlc_object_t *)(p_demux)), VLC_MSG_ERR, "modules/demux/wav.c", "modules/demux/wav.c", 373, __func__, "unsupported codec (%4.4s)", (char*)&p_sys->fmt.i_codec);

        goto error;
    }

    if( p_sys->i_frame_size <= 0 || p_sys->i_frame_samples <= 0 )
    {
        vlc_Log(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_demux)), psz_object_type), (void)0 , (vlc_object_t *)(p_demux)), VLC_MSG_DBG, "modules/demux/wav.c", "modules/demux/wav.c", 380, __func__, "invalid frame size: %i %i", p_sys->i_frame_size, p_sys->i_frame_samples);

        goto error;
    }
    if( p_sys->fmt.audio.i_rate <= 0 )
    {
        vlc_Log(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_demux)), psz_object_type), (void)0 , (vlc_object_t *)(p_demux)), VLC_MSG_DBG, "modules/demux/wav.c", "modules/demux/wav.c", 385, __func__, "invalid sample rate: %i", p_sys->fmt.audio.i_rate);
        goto error;
    }

    vlc_Log(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_demux)), psz_object_type), (void)0 , (vlc_object_t *)(p_demux)), VLC_MSG_DBG, "modules/demux/wav.c", "modules/demux/wav.c", 389, __func__, "found %s audio format", psz_name);

    if( ChunkFind( p_demux, "data", &i_size ) )
    {
        vlc_Log(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_demux)), psz_object_type), (void)0 , (vlc_object_t *)(p_demux)), VLC_MSG_ERR, "modules/demux/wav.c", "modules/demux/wav.c", 393, __func__, "cannot find 'data' chunk");
        goto error;
    }
    if( !b_is_rf64 || i_size < 4294967295U )
        p_sys->i_data_size = i_size;
    if( stream_Read( p_demux->s, ((void*)0), 8 ) != 8 )
        goto error;
    p_sys->i_data_pos = stream_Tell( p_demux->s );

    if( p_sys->fmt.i_bitrate <= 0 )
    {
        p_sys->fmt.i_bitrate = (int64_t)p_sys->i_frame_size *
            p_sys->fmt.audio.i_rate * 8 / p_sys->i_frame_samples;
    }

    p_sys->p_es = es_out_Add( p_demux->out, &p_sys->fmt );

    date_Init( &p_sys->pts, p_sys->fmt.audio.i_rate, 1 );
    date_Set( &p_sys->pts, 1 );

    return (-0);

error:
    vlc_Log(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_demux)), psz_object_type), (void)0 , (vlc_object_t *)(p_demux)), VLC_MSG_ERR, "modules/demux/wav.c", "modules/demux/wav.c", 416, __func__, "An error occurred during wav demuxing");
    free( p_wf );
    free( p_sys );
    return (-1);
}






static int Demux( demux_t *p_demux )
{
    demux_sys_t *p_sys = p_demux->p_sys;
    block_t *p_block;
    const int64_t i_pos = stream_Tell( p_demux->s );
    unsigned int i_read_size = p_sys->i_frame_size;

    if( p_sys->i_data_size > 0 )
    {
        int64_t i_end = p_sys->i_data_pos + p_sys->i_data_size;
        if ( i_pos >= i_end )
            return 0;


        if ( i_end < i_pos + i_read_size )
            i_read_size = i_end - i_pos;
    }

    if( ( p_block = stream_Block( p_demux->s, i_read_size ) ) == ((void*)0) )
    {
        vlc_Log(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_demux)), psz_object_type), (void)0 , (vlc_object_t *)(p_demux)), VLC_MSG_WARN, "modules/demux/wav.c", "modules/demux/wav.c", 447, __func__, "cannot read data");
        return 0;
    }

    p_block->i_dts =
    p_block->i_pts = (1LL) + date_Get( &p_sys->pts );


    es_out_Control( p_demux->out, ES_OUT_SET_PCR, p_block->i_pts );


    if( p_sys->i_chans_to_reorder )
        aout_ChannelReorder( p_block->p_buffer, p_block->i_buffer,
                             p_sys->fmt.audio.i_channels,
                             p_sys->pi_chan_table, p_sys->fmt.i_codec );

    es_out_Send( p_demux->out, p_sys->p_es, p_block );

    date_Increment( &p_sys->pts, p_sys->i_frame_samples );

    return 1;
}




static void Close ( vlc_object_t * p_this )
{
    demux_t *p_demux = (demux_t*)p_this;
    demux_sys_t *p_sys = p_demux->p_sys;

    free( p_sys );
}




static int Control( demux_t *p_demux, int i_query, va_list args )
{
    demux_sys_t *p_sys = p_demux->p_sys;
    int64_t i_end = -1;

    if( p_sys->i_data_size > 0 )
        i_end = p_sys->i_data_pos + p_sys->i_data_size;

    return demux_vaControlHelper( p_demux->s, p_sys->i_data_pos, i_end,
                                   p_sys->fmt.i_bitrate,
                                   p_sys->fmt.audio.i_blockalign,
                                   i_query, args );
}




static int ChunkFind( demux_t *p_demux, const char *fcc, unsigned int *pi_size )
{
    const uint8_t *p_peek;

    for( ;; )
    {
        uint32_t i_size;

        if( stream_Peek( p_demux->s, &p_peek, 8 ) < 8 )
        {
            vlc_Log(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_demux)), psz_object_type), (void)0 , (vlc_object_t *)(p_demux)), VLC_MSG_ERR, "modules/demux/wav.c", "modules/demux/wav.c", 511, __func__, "cannot peek");
            return (-1);
        }

        i_size = GetDWLE( p_peek + 4 );

        vlc_Log(__builtin_choose_expr( __builtin_offsetof(__typeof__(*(p_demux)), psz_object_type), (void)0 , (vlc_object_t *)(p_demux)), VLC_MSG_DBG, "modules/demux/wav.c", "modules/demux/wav.c", 517, __func__, "chunk: fcc=`%4.4s` size=%""u", p_peek, i_size);

        if( !memcmp( p_peek, fcc, 4 ) )
        {
            if( pi_size )
            {
                *pi_size = i_size;
            }
            return (-0);
        }


        if( stream_Read( p_demux->s, ((void*)0), 8 ) != 8 ||
            stream_Read( p_demux->s, ((void*)0), i_size ) != (int)i_size ||
            ( (i_size & 1) && stream_Read( p_demux->s, ((void*)0), 1 ) != 1 ) )
            return (-1);
    }
}

static int FrameInfo_PCM( unsigned int *pi_size, int *pi_samples,
                          const es_format_t *p_fmt )
{
    int i_bytes;


    *pi_samples = ( ((p_fmt->audio.i_rate / 20) > (1)) ? (p_fmt->audio.i_rate / 20) : (1) );

    i_bytes = *pi_samples * p_fmt->audio.i_channels *
        ( (p_fmt->audio.i_bitspersample + 7) / 8 );

    if( p_fmt->audio.i_blockalign > 0 )
    {
        const int i_modulo = i_bytes % p_fmt->audio.i_blockalign;
        if( i_modulo > 0 )
            i_bytes += p_fmt->audio.i_blockalign - i_modulo;
    }

    *pi_size = i_bytes;
    return (-0);
}

static int FrameInfo_MS_ADPCM( unsigned int *pi_size, int *pi_samples,
                               const es_format_t *p_fmt )
{
    if( p_fmt->audio.i_channels <= 0 )
        return (-1);

    *pi_samples = 2 + 2 * ( p_fmt->audio.i_blockalign -
        7 * p_fmt->audio.i_channels ) / p_fmt->audio.i_channels;
    *pi_size = p_fmt->audio.i_blockalign;

    return (-0);
}

static int FrameInfo_IMA_ADPCM( unsigned int *pi_size, int *pi_samples,
                                const es_format_t *p_fmt )
{
    if( p_fmt->audio.i_channels <= 0 )
        return (-1);

    *pi_samples = 2 * ( p_fmt->audio.i_blockalign -
        4 * p_fmt->audio.i_channels ) / p_fmt->audio.i_channels;
    *pi_size = p_fmt->audio.i_blockalign;

    return (-0);
}

static int FrameInfo_Creative_ADPCM( unsigned int *pi_size, int *pi_samples,
                                     const es_format_t *p_fmt )
{
    if( p_fmt->audio.i_channels <= 0 )
        return (-1);


    *pi_samples = p_fmt->audio.i_blockalign * 2 / p_fmt->audio.i_channels;
    *pi_size = p_fmt->audio.i_blockalign;

    return (-0);
}

static int FrameInfo_MSGSM( unsigned int *pi_size, int *pi_samples,
                            const es_format_t *p_fmt )
{
    if( p_fmt->i_bitrate <= 0 )
        return (-1);

    *pi_samples = ( p_fmt->audio.i_blockalign * p_fmt->audio.i_rate * 8)
                    / p_fmt->i_bitrate;
    *pi_size = p_fmt->audio.i_blockalign;

    return (-0);
}
