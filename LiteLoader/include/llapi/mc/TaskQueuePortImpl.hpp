/**
 * @file  TaskQueuePortImpl.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class TaskQueuePortImpl.
 *
 */
class TaskQueuePortImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TASKQUEUEPORTIMPL
public:
    class TaskQueuePortImpl& operator=(class TaskQueuePortImpl const &) = delete;
    TaskQueuePortImpl(class TaskQueuePortImpl const &) = delete;
#endif

public:
    /**
     * @vftbl  3
     * @symbol ?GetHandle@TaskQueuePortImpl@@UEAAPEAUXTaskQueuePortObject@@XZ
     * @hash   1867210007
     */
    virtual struct XTaskQueuePortObject * GetHandle();
    /**
     * @vftbl  4
     * @symbol ?QueueItem@TaskQueuePortImpl@@UEAAJPEAUITaskQueuePortContext@@IPEAXP6AX1_N@Z@Z
     * @hash   739418302
     */
    virtual long QueueItem(struct ITaskQueuePortContext *, unsigned int, void *, void ( *)(void *, bool));
    /**
     * @vftbl  5
     * @symbol ?RegisterWaitHandle@TaskQueuePortImpl@@UEAAJPEAUITaskQueuePortContext@@PEAX1P6AX1_N@ZPEAUXTaskQueueRegistrationToken@@@Z
     * @hash   -215227917
     */
    virtual long RegisterWaitHandle(struct ITaskQueuePortContext *, void *, void *, void ( *)(void *, bool), struct XTaskQueueRegistrationToken *);
    /**
     * @vftbl  6
     * @symbol ?UnregisterWaitHandle@TaskQueuePortImpl@@UEAAXUXTaskQueueRegistrationToken@@@Z
     * @hash   1765538015
     */
    virtual void UnregisterWaitHandle(struct XTaskQueueRegistrationToken);
    /**
     * @vftbl  7
     * @symbol ?PrepareTerminate@TaskQueuePortImpl@@UEAAJPEAUITaskQueuePortContext@@PEAXP6AX1@ZPEAPEAX@Z
     * @hash   1132869354
     */
    virtual long PrepareTerminate(struct ITaskQueuePortContext *, void *, void ( *)(void *), void **);
    /**
     * @vftbl  8
     * @symbol ?CancelTermination@TaskQueuePortImpl@@UEAAXPEAX@Z
     * @hash   -393520752
     */
    virtual void CancelTermination(void *);
    /**
     * @vftbl  9
     * @symbol ?Terminate@TaskQueuePortImpl@@UEAAXPEAX@Z
     * @hash   1236106409
     */
    virtual void Terminate(void *);
    /**
     * @vftbl  10
     * @symbol ?Attach@TaskQueuePortImpl@@UEAAJPEAUITaskQueuePortContext@@@Z
     * @hash   -333135431
     */
    virtual long Attach(struct ITaskQueuePortContext *);
    /**
     * @vftbl  11
     * @symbol ?Detach@TaskQueuePortImpl@@UEAAXPEAUITaskQueuePortContext@@@Z
     * @hash   1073353331
     */
    virtual void Detach(struct ITaskQueuePortContext *);
    /**
     * @vftbl  12
     * @symbol ?DrainOneItem@TaskQueuePortImpl@@UEAA_NXZ
     * @hash   1628844061
     */
    virtual bool DrainOneItem();
    /**
     * @vftbl  13
     * @symbol ?Wait@TaskQueuePortImpl@@UEAA_NPEAUITaskQueuePortContext@@I@Z
     * @hash   -832743749
     */
    virtual bool Wait(struct ITaskQueuePortContext *, unsigned int);
    /**
     * @vftbl  14
     * @symbol ?IsEmpty@TaskQueuePortImpl@@UEAA_NXZ
     * @hash   2127486511
     */
    virtual bool IsEmpty();
    /**
     * @vftbl  15
     * @symbol ?SuspendTermination@TaskQueuePortImpl@@UEAAJPEAUITaskQueuePortContext@@@Z
     * @hash   -1603005722
     */
    virtual long SuspendTermination(struct ITaskQueuePortContext *);
    /**
     * @vftbl  16
     * @symbol ?ResumeTermination@TaskQueuePortImpl@@UEAAXPEAUITaskQueuePortContext@@@Z
     * @hash   472375583
     */
    virtual void ResumeTermination(struct ITaskQueuePortContext *);
    /**
     * @vftbl  17
     * @hash   -2132124101
     */
    virtual ~TaskQueuePortImpl();
    /**
     * @symbol ?Initialize@TaskQueuePortImpl@@QEAAJW4XTaskQueueDispatchMode@@@Z
     * @hash   874283716
     */
    MCAPI long Initialize(enum class XTaskQueueDispatchMode);
    /**
     * @symbol ??0TaskQueuePortImpl@@QEAA@XZ
     * @hash   -793087383
     */
    MCAPI TaskQueuePortImpl();

//private:
    /**
     * @symbol ?AppendEntry@TaskQueuePortImpl@@AEAA_NAEBUQueueEntry@1@_K_N@Z
     * @hash   -1264210523
     */
    MCAPI bool AppendEntry(struct TaskQueuePortImpl::QueueEntry const &, unsigned __int64, bool);
    /**
     * @symbol ?AppendWaitRegistrationEntry@TaskQueuePortImpl@@AEAA_NPEAUWaitRegistration@1@_N@Z
     * @hash   2138505975
     */
    MCAPI bool AppendWaitRegistrationEntry(struct TaskQueuePortImpl::WaitRegistration *, bool);
    /**
     * @symbol ?CancelPendingEntries@TaskQueuePortImpl@@AEAAXPEAUITaskQueuePortContext@@_N@Z
     * @hash   -926511802
     */
    MCAPI void CancelPendingEntries(struct ITaskQueuePortContext *, bool);
    /**
     * @symbol ?InitializeWaitRegistration@TaskQueuePortImpl@@AEAAJPEAUWaitRegistration@1@@Z
     * @hash   1377416139
     */
    MCAPI long InitializeWaitRegistration(struct TaskQueuePortImpl::WaitRegistration *);
    /**
     * @symbol ?ScheduleTermination@TaskQueuePortImpl@@AEAAXPEAUTerminationEntry@1@@Z
     * @hash   -1284407932
     */
    MCAPI void ScheduleTermination(struct TaskQueuePortImpl::TerminationEntry *);
    /**
     * @symbol ?SubmitPendingCallback@TaskQueuePortImpl@@AEAAXXZ
     * @hash   -1564533213
     */
    MCAPI void SubmitPendingCallback();
    /**
     * @symbol ?EraseQueue@TaskQueuePortImpl@@CAXPEAV?$LocklessQueue@UQueueEntry@TaskQueuePortImpl@@@@@Z
     * @hash   1095848402
     */
    MCAPI static void EraseQueue(class LocklessQueue<struct TaskQueuePortImpl::QueueEntry> *);
    /**
     * @symbol ?WaitCallback@TaskQueuePortImpl@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@K@Z
     * @hash   1487055012
     */
    MCAPI static void WaitCallback(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, unsigned long);

private:

};