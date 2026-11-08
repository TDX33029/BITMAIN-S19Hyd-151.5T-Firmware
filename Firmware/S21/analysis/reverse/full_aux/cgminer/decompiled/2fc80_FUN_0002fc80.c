// FUN_0002fc80 @ 0002fc80  size=236  callers=0
// program: cgminer


void FUN_0002fc80(int param_1,int param_2,uint param_3)

{
  int iVar1;
  time_t tVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00072da4);
  if (iVar1 == 0) {
    iVar3 = *(int *)(param_1 + 0x24);
    iVar1 = (int)param_3 >> 0x1f;
    uVar4 = *(uint *)(iVar3 + 0xc0);
    bVar5 = CARRY4(DAT_00072dd8,param_3);
    DAT_00072dd8 = DAT_00072dd8 + param_3;
    DAT_00072ddc = DAT_00072ddc + iVar1 + (uint)bVar5;
    *(uint *)(iVar3 + 0xc0) = uVar4 + param_3;
    *(uint *)(iVar3 + 0xc4) = *(int *)(iVar3 + 0xc4) + iVar1 + (uint)CARRY4(uVar4,param_3);
    if (param_2 == 0) {
      iVar3 = FUN_0002fbd8();
      uVar4 = *(uint *)(iVar3 + 0x28);
      *(uint *)(iVar3 + 0x28) = uVar4 + param_3;
      *(uint *)(iVar3 + 0x2c) = *(int *)(iVar3 + 0x2c) + iVar1 + (uint)CARRY4(uVar4,param_3);
    }
    else {
      uVar4 = *(uint *)(param_2 + 0x28);
      *(uint *)(param_2 + 0x28) = uVar4 + param_3;
      *(uint *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + iVar1 + (uint)CARRY4(uVar4,param_3);
    }
    iVar1 = *(int *)(param_1 + 0x24);
    tVar2 = time((time_t *)0x0);
    *(time_t *)(iVar1 + 0xe8) = tVar2;
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00072da4);
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0002fd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0006796c)();
      return;
    }
  }
  else {
    FUN_0002cbc0("inc_work_stats",0x22e1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002cc1c("inc_work_stats",0x22ef);
}

