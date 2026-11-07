// FUN_00033628 @ 00033628  size=1500  callers=3
// program: cgminer


void FUN_00033628(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  time_t tVar3;
  char *pcVar4;
  char *param3;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  pthread_rwlock_t *__rwlock;
  uint local_890;
  uint uStack_88c;
  uint local_888 [7];
  uint uStack_86c;
  uint local_868 [8];
  undefined1 auStack_848 [32];
  char acStack_828 [2052];
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xd4));
  if (iVar2 != 0) {
    piVar5 = __errno_location();
    iVar2 = *piVar5;
    pcVar4 = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
    uVar8 = 0x20fb;
LAB_00033af8:
    snprintf(acStack_828,0x800,pcVar4,iVar2,"cgminer.c","gen_stratum_work",uVar8);
    FUN_0001dd98(3,acStack_828,1);
                    /* WARNING: Subroutine does not return */
    FUN_0002c290(1);
  }
  __rwlock = (pthread_rwlock_t *)(param_1 + 0xec);
  iVar2 = pthread_rwlock_wrlock(__rwlock);
  if (iVar2 != 0) {
    piVar5 = __errno_location();
    iVar2 = *piVar5;
    pcVar4 = "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d";
    uVar8 = 0x20fb;
    goto LAB_00033af8;
  }
  puVar9 = (uint *)(param_1 + 0x280);
  local_890 = *puVar9;
  uStack_88c = *(uint *)(param_1 + 0x284);
  FUN_00023324(*(int *)(param_1 + 0x630) + *(int *)(param_1 + 0x638),&local_890,
               *(undefined4 *)(param_1 + 0x288),"cgminer.c","gen_stratum_work",0x2100);
  uVar7 = *puVar9;
  iVar2 = *(int *)(param_1 + 0x284);
  *puVar9 = uVar7 + 1;
  *(uint *)(param_1 + 0x284) = iVar2 + (uint)(0xfffffffe < uVar7);
  *(uint *)(param_2 + 0x128) = uVar7;
  *(int *)(param_2 + 300) = iVar2;
  *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(param_1 + 0x288);
  iVar2 = pthread_rwlock_unlock(__rwlock);
  if (iVar2 != 0) {
    piVar5 = __errno_location();
    iVar2 = *piVar5;
    pcVar4 = "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d";
    uVar8 = 0x2106;
    goto LAB_00033af8;
  }
  iVar2 = pthread_rwlock_rdlock(__rwlock);
  if (iVar2 != 0) {
    piVar5 = __errno_location();
    iVar2 = *piVar5;
    pcVar4 = "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d";
    uVar8 = 0x2106;
    goto LAB_00033af8;
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xd4));
  if (iVar2 != 0) {
    piVar5 = __errno_location();
    iVar2 = *piVar5;
    pcVar4 = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
    uVar8 = 0x2106;
    goto LAB_00033af8;
  }
  FUN_0001ea74(*(undefined4 *)(param_1 + 0x630),*(undefined4 *)(param_1 + 0x634),acStack_828);
  FUN_0001ea74(acStack_828,0x20,local_888);
  FUN_00023324(local_868,local_888,0x20,"cgminer.c","gen_stratum_work",0x210a);
  if (0 < *(int *)(param_1 + 0x6bc)) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      FUN_00023324(auStack_848,*(undefined4 *)(*(int *)(param_1 + 0x2b4) + iVar1),0x20,"cgminer.c",
                   "gen_stratum_work",0x210e);
      FUN_0001ea74(local_868,0x40,acStack_828);
      FUN_0001ea74(acStack_828,0x20,local_888);
      FUN_00023324(local_868,local_888,0x20,"cgminer.c","gen_stratum_work",0x2110);
    } while (iVar2 < *(int *)(param_1 + 0x6bc));
  }
  puVar6 = &uStack_86c;
  puVar9 = &uStack_88c;
  do {
    puVar6 = puVar6 + 1;
    uVar7 = *puVar6;
    puVar9 = puVar9 + 1;
    *puVar9 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
              uVar7 >> 0x18;
  } while (local_868 + 7 != puVar6);
  FUN_00023324(param_2,param_1 + 0x63c,0x70,"cgminer.c","gen_stratum_work",0x2119);
  FUN_00023324(param_2 + 0x24,local_888,0x20,"cgminer.c","gen_stratum_work",0x211a);
  uVar8 = *(undefined4 *)(param_1 + 0x734);
  *(undefined4 *)(param_2 + 0x138) = *(undefined4 *)(param_1 + 0x730);
  *(undefined4 *)(param_2 + 0x13c) = uVar8;
  uVar8 = __strdup(*(undefined4 *)(param_1 + 0x2b0));
  *(undefined4 *)(param_2 + 0x120) = uVar8;
  uVar8 = __strdup(*(undefined4 *)(param_1 + 0x274));
  *(undefined4 *)(param_2 + 0x140) = uVar8;
  uVar8 = __strdup(param_1 + 0x71c);
  *(undefined4 *)(param_2 + 0x134) = uVar8;
  iVar2 = pthread_rwlock_unlock(__rwlock);
  if (iVar2 != 0) {
    piVar5 = __errno_location();
    iVar2 = *piVar5;
    pcVar4 = "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d";
    uVar8 = 0x2125;
    goto LAB_00033af8;
  }
  (*DAT_0006796c)();
  if (DAT_000686f1 == '\0') goto LAB_000338a4;
  pcVar4 = (char *)FUN_0001fac8(param_2,0x70);
  param3 = (char *)FUN_0001fac8(local_888,0x20);
  if (DAT_000686f1 != '\0') {
    if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 7)) {
LAB_000339f0:
      if ((DAT_000686f0 == '\0') && (DAT_00067848 < 7)) {
LAB_00033a58:
        if ((DAT_000686f0 != '\0') || (6 < DAT_00067848)) {
LAB_00033a78:
          snprintf(acStack_828,0x800,"Work job_id %s nonce2 %llu ntime %s",
                   *(char **)(param_2 + 0x120),*(ulonglong *)(param_2 + 0x128),
                   *(char **)(param_2 + 0x134));
          FUN_0001dd98(7,acStack_828,0);
        }
      }
      else {
LAB_00033a10:
        snprintf(acStack_828,0x800,"Generated stratum header %s",pcVar4);
        FUN_0001dd98(7,acStack_828,0);
        if (DAT_000686f1 != '\0') {
          if (DAT_00072da0 == '\0') goto LAB_00033a58;
          goto LAB_00033a78;
        }
      }
    }
    else {
      snprintf(acStack_828,0x800,"Generated stratum merkle %s",param3);
      FUN_0001dd98(7,acStack_828,0);
      if (DAT_000686f1 != '\0') {
        if (DAT_00072da0 == '\0') goto LAB_000339f0;
        goto LAB_00033a10;
      }
    }
  }
  free(pcVar4);
  free(param3);
LAB_000338a4:
  FUN_00028ce4(param_2);
  FUN_0002b530((int)*(undefined8 *)(param_2 + 0x138),param_2 + 0xa0);
  DAT_00072f24 = DAT_00072f24 + 1;
  tVar3 = time((time_t *)0x0);
  if (5 < tVar3 - DAT_00068ca4) {
    DAT_00068ca4 = time((time_t *)0x0);
    DAT_00068ca8 = DAT_00072f24;
  }
  uVar8 = DAT_00068cac;
  *(undefined1 *)(param_2 + 0x11c) = 1;
  *(undefined4 *)(param_2 + 0x150) = uVar8;
  *(undefined4 *)(param_2 + 0xf8) = 0;
  *(undefined1 *)(param_2 + 0x118) = 0;
  *(undefined1 *)(param_2 + 0x1b8) = 0x53;
  *(undefined4 *)(param_2 + 0xf4) = 0x3c;
  *(int *)(param_2 + 0x104) = param_1;
  FUN_00028af0((int)*(undefined8 *)(param_2 + 0x138),param_2);
  FUN_000206d8(param_2 + 0x108);
  return;
}

