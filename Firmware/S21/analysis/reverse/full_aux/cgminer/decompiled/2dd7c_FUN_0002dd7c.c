// FUN_0002dd7c @ 0002dd7c  size=200  callers=0
// program: cgminer


undefined4 FUN_0002dd7c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = pthread_rwlock_rdlock((pthread_rwlock_t *)(param_1 + 0x140));
  if (iVar2 != 0) {
    FUN_0002dd20("clone_queued_work_byid",0x25a2);
    goto LAB_0002de38;
  }
  iVar2 = *(int *)(param_1 + 0x160);
  uVar3 = 0;
  if (iVar2 != 0) {
    iVar4 = *(int *)(iVar2 + 0x160);
    if (param_2 != *(int *)(iVar2 + 0x154)) {
      if (iVar4 == 0) {
        uVar3 = 0;
        goto LAB_0002dde8;
      }
      iVar1 = *(int *)(iVar4 + 0x160);
      iVar2 = iVar4;
      while (iVar4 = iVar1, param_2 != *(int *)(iVar2 + 0x154)) {
        uVar3 = 0;
        if (iVar4 == 0) goto LAB_0002dde8;
        iVar1 = *(int *)(iVar4 + 0x160);
        iVar2 = iVar4;
      }
    }
    uVar3 = FUN_0002d974();
    FUN_0002a654(uVar3,iVar2,0);
  }
LAB_0002dde8:
  iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x140));
  if (iVar2 == 0) {
    (*DAT_0006796c)();
    return uVar3;
  }
LAB_0002de38:
                    /* WARNING: Subroutine does not return */
  FUN_0002d70c("clone_queued_work_byid",0x25a6);
}

