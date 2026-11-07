// FUN_00035694 @ 00035694  size=788  callers=0
// program: cgminer


void FUN_00035694(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  char *__format;
  int iVar7;
  int iVar8;
  int iVar9;
  pthread_rwlock_t *__rwlock;
  undefined4 uVar10;
  bool bVar11;
  longlong lVar12;
  undefined4 local_83c;
  int local_838;
  int local_834;
  int iStack_830;
  int iStack_82c;
  char acStack_828 [2052];
  
  iVar8 = param_1[9];
  local_834 = 0;
  iVar9 = *(int *)(iVar8 + 4);
  uVar10 = *param_1;
  lVar3 = 0;
  local_838 = 0;
LAB_000356cc:
  cVar1 = *(char *)(iVar8 + 0x16c);
  do {
    if (cVar1 != '\0') {
LAB_0003582c:
      *(undefined4 *)(iVar8 + 0x20) = 1;
      return;
    }
    *(undefined1 *)((int)param_1 + 0x3f) = 0;
    do {
      if (*(int *)(iVar8 + 0x164) != 0) goto LAB_000356e0;
      __rwlock = (pthread_rwlock_t *)(iVar8 + 0x140);
      local_83c = FUN_0003424c(param_1,uVar10);
      iVar4 = pthread_rwlock_wrlock(__rwlock);
      if (iVar4 != 0) {
        piVar5 = __errno_location();
        iVar8 = *piVar5;
        __format = "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d";
        uVar10 = 0x24f0;
        goto LAB_000358a0;
      }
      if (*(int *)(iVar8 + 0x164) == 0) {
        *(undefined4 *)(iVar8 + 0x164) = local_83c;
        iVar4 = pthread_rwlock_unlock(__rwlock);
        if (iVar4 != 0) {
LAB_000358f8:
          piVar5 = __errno_location();
          iVar8 = *piVar5;
          __format = "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d";
          uVar10 = 0x24fb;
LAB_000358a0:
          snprintf(acStack_828,0x800,__format,iVar8,"cgminer.c","fill_queue",uVar10);
          FUN_0001dd98(3,acStack_828,1);
                    /* WARNING: Subroutine does not return */
          FUN_0002c290(1);
        }
        (*DAT_0006796c)();
      }
      else {
        iVar4 = pthread_rwlock_unlock(__rwlock);
        if (iVar4 != 0) goto LAB_000358f8;
        (*DAT_0006796c)();
        FUN_0002aa68(&local_83c,"cgminer.c","fill_queue",0x24ff);
      }
LAB_000356e0:
      iVar4 = (**(code **)(iVar9 + 0x48))(iVar8);
    } while (iVar4 == 0);
    lVar12 = (**(code **)(iVar9 + 0x44))(param_1);
    *(undefined1 *)((int)param_1 + 0x3e) = 0;
    if (lVar12 == -1) {
      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
        snprintf(acStack_828,0x800,"%s %d failure, disabling!",*(char **)(iVar9 + 8),
                 *(int *)(iVar8 + 8));
        FUN_0001dd98(3,acStack_828,0);
      }
      *(undefined4 *)(iVar8 + 0x20) = 1;
      FUN_00022bec(iVar8);
      goto LAB_0003582c;
    }
    lVar3 = lVar12 + lVar3;
    FUN_000206d8(&iStack_830);
    iVar7 = iStack_82c - local_834;
    iVar4 = iStack_830 - local_838;
    if (iVar7 < 0) {
      iVar4 = iVar4 + -1;
      iVar7 = iVar7 + 1000000;
    }
    uVar6 = 0;
    if (lVar3 == 0) {
LAB_00035840:
      if (DAT_000681e0 <= iVar4) goto LAB_000357cc;
      lVar12 = lVar3;
      if (*(char *)(param_1 + 0xf) == '\0') goto LAB_000357fc;
LAB_00035860:
      FUN_00029a08(param_1,uVar10,iVar9 + 0x5c);
    }
    else {
      uVar6 = 200000;
      bVar11 = iVar7 == 200000;
      iVar2 = iVar7 + -200000;
      if (200000 >= iVar7) {
        bVar11 = iVar4 == 0;
        iVar2 = iVar4;
      }
      if (bVar11 || iVar2 < 0 != (200000 < iVar7 && SBORROW4(iVar7,200000))) goto LAB_00035840;
LAB_000357cc:
      FUN_00034b64(uVar10,uVar6,(int)lVar3,(int)((ulonglong)lVar3 >> 0x20));
      FUN_00023634(&local_838,&iStack_830);
      lVar3 = 0;
      lVar12 = 0;
      if (*(char *)(param_1 + 0xf) != '\0') goto LAB_00035860;
LAB_000357fc:
      lVar3 = lVar12;
      if (*(int *)(iVar8 + 0x20) != 0) goto LAB_00035860;
    }
    if (*(char *)((int)param_1 + 0x3f) == '\0') goto LAB_000356cc;
    (**(code **)(iVar9 + 0x50))(iVar8);
    cVar1 = *(char *)(iVar8 + 0x16c);
  } while( true );
}

