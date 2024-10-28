

#ifndef __OAL_WINDOWS_THREAD_H__
#define __OAL_WINDOWS_THREAD_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "oal_schedule.h"

/*****************************************************************************
  2 STRUCT定义
*****************************************************************************/
typedef struct task_struct          oal_task_stru;

/*****************************************************************************
  3 枚举定义
*****************************************************************************/


/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 宏定义
*****************************************************************************/
#define oal_kthread_create(fn, arg, namefmt, cpu)        ((oal_void *)0)
#define oal_kthread_bind(task, cpu)
#define oal_kthread_stop(task)
#define oal_kthread_run
#define oal_kthread_should_stop()     (0)
#define oal_schedule
#define oal_wake_up_process(task)
#define oal_set_current_state
#define oal_cond_resched

#define oal_sched_setscheduler(task, policy, param) (0)
#define oal_set_user_nice(task, nice)

/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/

OAL_STATIC OAL_INLINE oal_void oal_mutex_init(oal_mutex_stru *pst_mutex)
{

}


OAL_STATIC OAL_INLINE oal_void oal_mutex_lock(oal_mutex_stru *pst_mutex)
{
}



OAL_STATIC OAL_INLINE oal_void oal_mutex_unlock(oal_mutex_stru *pst_mutex)
{
}

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif
