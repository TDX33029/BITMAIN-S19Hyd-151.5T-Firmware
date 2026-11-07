// FUN_000314b0 @ 000314b0  size=548  callers=3
// program: cgminer


void FUN_000314b0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  time_t tVar3;
  int *piVar4;
  char *__format;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  char acStack_820 [2052];
  
  dVar6 = DAT_000681f8;
  uVar7 = FUN_000311dc(param_2);
  *(undefined8 *)(param_2 + 0xe8) = uVar7;
  dVar5 = (double)FUN_0004acbc();
  cVar1 = DAT_00072da0;
  if (dVar6 <= dVar5) {
    *(undefined1 *)(param_2 + 0x11b) = 1;
    DAT_00076084 = DAT_00076084 + 1;
    *(int *)(*(int *)(param_2 + 0x104) + 0x20) = *(int *)(*(int *)(param_2 + 0x104) + 0x20) + 1;
    *(undefined1 *)(param_2 + 0x11a) = 1;
    if (((cVar1 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
      snprintf(acStack_820,0x800,"Found block for pool %d!",**(int **)(param_2 + 0x104));
      FUN_0001dd98(5,acStack_820,0);
    }
  }
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00072da4);
  if (iVar2 == 0) {
    dVar5 = *(double *)(param_2 + 0xe0);
    dVar6 = (double)FUN_0004accc(DAT_00072dd8,DAT_00072ddc);
    dVar6 = dVar6 + dVar5;
    uVar7 = FUN_0004ad64(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
    DAT_00072ddc = (undefined4)((ulonglong)uVar7 >> 0x20);
    DAT_00072dd8 = (undefined4)uVar7;
    iVar2 = *param_1;
    dVar6 = (double)FUN_0004accc(*(undefined4 *)(iVar2 + 0xc0),*(undefined4 *)(iVar2 + 0xc4));
    dVar6 = dVar6 + dVar5;
    uVar7 = FUN_0004ad64(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
    *(undefined8 *)(iVar2 + 0xc0) = uVar7;
    iVar2 = *(int *)(param_2 + 0x104);
    dVar6 = (double)FUN_0004accc(*(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x2c));
    dVar6 = dVar6 + *(double *)(param_2 + 0xe0);
    uVar7 = FUN_0004ad64(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
    *(undefined8 *)(iVar2 + 0x28) = uVar7;
    iVar2 = *param_1;
    tVar3 = time((time_t *)0x0);
    *(time_t *)(iVar2 + 0xe8) = tVar3;
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00072da4);
    if (iVar2 == 0) {
      (*DAT_0006796c)();
      return;
    }
    piVar4 = __errno_location();
    iVar2 = *piVar4;
    __format = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
    uVar8 = 0x22dc;
  }
  else {
    piVar4 = __errno_location();
    iVar2 = *piVar4;
    __format = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
    uVar8 = 0x22d7;
  }
  snprintf(acStack_820,0x800,__format,iVar2,"cgminer.c","update_work_stats",uVar8);
  FUN_0001dd98(3,acStack_820,1);
                    /* WARNING: Subroutine does not return */
  FUN_0002c290(1);
}

