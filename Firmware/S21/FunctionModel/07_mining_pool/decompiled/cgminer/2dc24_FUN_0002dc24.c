// FUN_0002dc24 @ 0002dc24  size=248  callers=0
// program: cgminer


int FUN_0002dc24(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  double in_d0;
  undefined4 extraout_s1;
  int local_34;
  undefined1 auStack_30 [12];
  
  FUN_000206d8(auStack_30);
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(param_1 + 0x140));
  if (iVar1 == 0) {
    local_34 = *(int *)(param_1 + 0x160);
    iVar1 = 0;
    if (local_34 != 0) {
      iVar2 = *(int *)(local_34 + 0x160);
      while( true ) {
        uVar3 = FUN_00020a04(auStack_30,local_34 + 0x1a8);
        if (in_d0 < (double)CONCAT44(extraout_s1,uVar3)) {
          FUN_0002c108(param_1,local_34);
          FUN_0002a76c(&local_34,"cgminer.c","age_queued_work",0x25c2);
          iVar1 = iVar1 + 1;
        }
        local_34 = iVar2;
        if (iVar2 == 0) break;
        iVar2 = *(int *)(iVar2 + 0x160);
      }
    }
    iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x140));
    if (iVar2 == 0) {
      (*DAT_0006796c)();
      return iVar1;
    }
  }
  else {
    FUN_0002cb64("age_queued_work",0x25bc);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002d70c("age_queued_work",0x25c7);
}

