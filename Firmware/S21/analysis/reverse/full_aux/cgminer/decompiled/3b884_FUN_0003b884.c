// FUN_0003b884 @ 0003b884  size=1872  callers=4
// program: cgminer


void FUN_0003b884(void *param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  void *local_81c [2];
  pthread_t pStack_814;
  char local_810 [2048];
  
  piVar4 = *(int **)((int)param_1 + 0x104);
  local_81c[0] = param_1;
  FUN_000206d8((int)param_1 + 0x1b0);
  if (DAT_00068c60 != '\0') {
    iVar1 = FUN_0002f6e8(*(undefined4 *)((int)local_81c[0] + 0x100));
    iVar5 = *(int *)(iVar1 + 0x24);
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00072da4);
    if (iVar1 == 0) {
      *(int *)(iVar5 + 0x24) = *(int *)(iVar5 + 0x24) + 1;
      bVar6 = 0xfffffffe < DAT_00072f00;
      DAT_00072f00 = DAT_00072f00 + 1;
      DAT_00072f04 = DAT_00072f04 + (uint)bVar6;
      uVar3 = piVar4[2];
      piVar4[2] = uVar3 + 1;
      piVar4[3] = piVar4[3] + (uint)(0xfffffffe < uVar3);
      *(double *)(iVar5 + 200) = *(double *)(iVar5 + 200) + *(double *)((int)local_81c[0] + 0x178);
      DAT_00074f38 = DAT_00074f38 + *(double *)((int)local_81c[0] + 0x178);
      *(double *)(piVar4 + 0x12) =
           *(double *)(piVar4 + 0x12) + *(double *)((int)local_81c[0] + 0x178);
      iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00072da4);
      if (iVar1 == 0) {
        (*DAT_0006796c)();
        if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 5)) {
          return;
        }
        snprintf(local_810,0x800,"Accepted %s %d benchmark share nonce %08x",
                 *(char **)(*(int *)(iVar5 + 4) + 8),*(int *)(iVar5 + 8),
                 *(uint *)((int)local_81c[0] + 0x4c));
        FUN_0001dd98(5,local_810,0);
        return;
      }
      piVar4 = __errno_location();
      iVar1 = *piVar4;
      pcVar2 = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
      uVar7 = 0x224a;
    }
    else {
      piVar4 = __errno_location();
      iVar1 = *piVar4;
      pcVar2 = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
      uVar7 = 0x2243;
    }
    snprintf(local_810,0x800,pcVar2,iVar1,"cgminer.c","submit_work_async",uVar7);
LAB_0003bdec:
    FUN_0001dd98(3,local_810,1);
                    /* WARNING: Subroutine does not return */
    FUN_0002c290(1);
  }
  iVar1 = FUN_00033d64(local_81c[0],1);
  if (iVar1 != 0) {
    if (DAT_0006820d == '\0') {
      if ((char)piVar4[0x1a] == '\0') {
        if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
          snprintf(local_810,0x800,"Pool %d stale share detected, discarding",*piVar4);
          FUN_0001dd98(5,local_810,0);
        }
        FUN_00033380("discard",local_81c[0]);
        iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00072da4);
        if (iVar1 == 0) {
          piVar4[0x1e] = piVar4[0x1e] + 1;
          bVar6 = 0xfffffffe < DAT_000762d8;
          DAT_000762d8 = DAT_000762d8 + 1;
          DAT_00072f08 = DAT_00072f08 + *(double *)((int)local_81c[0] + 0x178);
          DAT_000762dc = DAT_000762dc + (uint)bVar6;
          *(double *)(piVar4 + 0x16) =
               *(double *)(piVar4 + 0x16) + *(double *)((int)local_81c[0] + 0x178);
          iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00072da4);
          if (iVar1 == 0) {
            (*DAT_0006796c)();
            FUN_0002a76c(local_81c,"cgminer.c","submit_work_async",0x2268);
            return;
          }
          piVar4 = __errno_location();
          iVar1 = *piVar4;
          uVar7 = 0x2266;
          pcVar2 = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
        }
        else {
          piVar4 = __errno_location();
          iVar1 = *piVar4;
          uVar7 = 0x225f;
          pcVar2 = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
        }
        snprintf(local_810,0x800,pcVar2,iVar1,"cgminer.c","submit_work_async",uVar7);
        goto LAB_0003bdec;
      }
      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
        snprintf(local_810,0x800,"Pool %d stale share detected, submitting as pool requested",
                 *piVar4);
        FUN_0001dd98(5,local_810,0);
      }
    }
    else if ((DAT_000686f1 != '\0') &&
            (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
      snprintf(local_810,0x800,"Pool %d stale share detected, submitting as user requested",*piVar4)
      ;
      FUN_0001dd98(7,local_810,0);
    }
    *(undefined1 *)((int)local_81c[0] + 0x119) = 1;
  }
  if (*(char *)((int)local_81c[0] + 0x11c) == '\0') {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
      builtin_strncpy(local_810,"Pushing submit work to work thread",0x23);
      FUN_0001dd98(5,local_810,0);
    }
    iVar1 = pthread_create(&pStack_814,(pthread_attr_t *)0x0,(__start_routine *)&LAB_00028e78,
                           local_81c[0]);
    if (iVar1 != 0) {
      builtin_strncpy(local_810,"Failed to create submit_work_thread",0x23);
      FUN_0001dd98(3,local_810,1);
                    /* WARNING: Subroutine does not return */
      FUN_0002c290(1);
    }
    return;
  }
  if (DAT_000686f1 == '\0') {
LAB_0003bb60:
    iVar1 = piVar4[0xba];
    if (iVar1 != 0) {
LAB_0003bb70:
      iVar1 = FUN_00020108(iVar1,local_81c[0]);
      if (iVar1 != 0) {
        return;
      }
    }
    if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0003ba68;
LAB_0003bba8:
    builtin_strncpy(local_810,"Discarding work from removed pool",0x22);
    FUN_0001dd98(4,local_810,0);
    if (piVar4[0xba] != 0) goto LAB_0003ba84;
    if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0003bfc4;
  }
  else {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)) {
      snprintf(local_810,0x800,"Pushing pool %d work to stratum queue",*piVar4);
      FUN_0001dd98(7,local_810,0);
      goto LAB_0003bb60;
    }
    iVar1 = piVar4[0xba];
    if (iVar1 != 0) goto LAB_0003bb70;
LAB_0003ba68:
    if (3 < DAT_00067848) goto LAB_0003bba8;
    if (piVar4[0xba] != 0) goto LAB_0003ba84;
LAB_0003bfc4:
    if (DAT_00067848 < 5) goto LAB_0003ba84;
  }
  snprintf(local_810,0x800,"Pushing pool %d work to stratum queue",*piVar4);
  FUN_0001dd98(5,local_810,0);
LAB_0003ba84:
  FUN_0002a76c(local_81c,"cgminer.c","submit_work_async",0x2276);
  return;
}

