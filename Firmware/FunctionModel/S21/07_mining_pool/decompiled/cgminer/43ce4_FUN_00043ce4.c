// FUN_00043ce4 @ 00043ce4  size=1120  callers=0
// program: cgminer


void * FUN_00043ce4(void *param_1,size_t *param_2)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  void *__dest;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  char *__s;
  char *__s_00;
  size_t __n;
  undefined4 uVar13;
  undefined4 local_830;
  undefined4 uStack_82c;
  char acStack_828 [2052];
  
  local_830 = 0;
  uStack_82c = 0;
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)((int)param_1 + 0xd4));
  if (iVar2 != 0) {
    piVar6 = __errno_location();
    snprintf(acStack_828,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar6,
             "driver-btm-c5_socketa.c","rebuild_job_buf",0xde);
    FUN_0001dd98(3,acStack_828,1);
    FUN_0003c34c(1);
  }
  iVar2 = pthread_rwlock_rdlock((pthread_rwlock_t *)((int)param_1 + 0xec));
  if (iVar2 != 0) {
    piVar6 = __errno_location();
    snprintf(acStack_828,0x800,"WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",*piVar6,
             "driver-btm-c5_socketa.c","rebuild_job_buf",0xde);
    FUN_0001dd98(3,acStack_828,1);
    FUN_0003c34c(1);
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)((int)param_1 + 0xd4));
  if (iVar2 != 0) {
    piVar6 = __errno_location();
    snprintf(acStack_828,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar6,
             "driver-btm-c5_socketa.c","rebuild_job_buf",0xde);
    FUN_0001dd98(3,acStack_828,1);
    FUN_0003c34c(1);
  }
  __s_00 = *(char **)((int)param_1 + 0x2b0);
  iVar2 = *(int *)((int)param_1 + 0x6bc);
  __n = *(size_t *)((int)param_1 + 0x634);
  sVar3 = strlen(__s_00);
  __s = *(char **)((int)param_1 + 0x274);
  sVar4 = strlen(__s);
  sVar4 = __n + 0x75a + iVar2 * 0x20 + sVar3 + sVar4;
  __dest = calloc(1,sVar4);
  if (__dest == (void *)0x0) {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
      snprintf(acStack_828,0x800,"malloc temp job data buf failed: %d\n",sVar4);
      FUN_0001dd98(3,acStack_828,0);
      return (void *)0x0;
    }
  }
  else {
    memcpy(__dest,param_1,0x748);
    memcpy((void *)((int)__dest + 0x748),*(void **)((int)param_1 + 0x630),__n);
    iVar9 = __n + 0x748;
    if (0 < iVar2) {
      piVar11 = *(int **)((int)param_1 + 0x2b4);
      puVar10 = (undefined4 *)((int)__dest + iVar9);
      piVar6 = piVar11;
      do {
        piVar12 = piVar6 + 1;
        puVar8 = (undefined4 *)*piVar6;
        uVar13 = puVar8[1];
        uVar5 = puVar8[2];
        uVar7 = puVar8[3];
        *puVar10 = *puVar8;
        puVar10[1] = uVar13;
        puVar10[2] = uVar5;
        puVar10[3] = uVar7;
        uVar13 = puVar8[5];
        uVar5 = puVar8[6];
        uVar7 = puVar8[7];
        puVar10[4] = puVar8[4];
        puVar10[5] = uVar13;
        puVar10[6] = uVar5;
        puVar10[7] = uVar7;
        puVar10 = puVar10 + 8;
        piVar6 = piVar12;
      } while (piVar11 + iVar2 != piVar12);
      iVar9 = iVar9 + iVar2 * 0x20;
    }
    sVar3 = strlen(__s_00);
    memcpy((void *)((int)__dest + iVar9),__s_00,sVar3 + 1);
    iVar9 = sVar3 + 1 + iVar9;
    sVar3 = strlen(__s);
    memcpy((void *)((int)__dest + iVar9),__s,sVar3 + 1);
    iVar9 = iVar9 + sVar3;
    iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)((int)param_1 + 0xec));
    if (iVar2 != 0) {
      piVar6 = __errno_location();
      snprintf(acStack_828,0x800,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar6,
               "driver-btm-c5_socketa.c","rebuild_job_buf",0x102);
      FUN_0001dd98(3,acStack_828,1);
      FUN_0003c34c(1);
    }
    (*DAT_0006796c)();
    sscanf(&DAT_0006a6c8,"%.2lf",&local_830);
    cVar1 = DAT_000686f1;
    *(undefined4 *)((int)__dest + iVar9 + 1) = local_830;
    *(undefined4 *)((int)__dest + iVar9 + 5) = uStack_82c;
    uVar5 = DAT_000681f8._4_4_;
    *(undefined4 *)((int)__dest + iVar9 + 9) = (undefined4)DAT_000681f8;
    *(undefined4 *)((int)__dest + iVar9 + 0xd) = uVar5;
    if ((cVar1 != '\0') &&
       (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
      snprintf(acStack_828,0x800,"job buf total len:%d, offset:%d\n",sVar4,iVar9 + 0x11);
      FUN_0001dd98(7,acStack_828,0);
    }
    *param_2 = sVar4;
  }
  return __dest;
}

