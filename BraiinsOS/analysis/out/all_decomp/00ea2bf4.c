// FUN_00ea2bf4 @ 00ea2bf4 size=248 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_00ea2bf4(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  uint local_30 [2];
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  if (*param_1 != 0) {
    if (*param_1 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0035b674,0x45,&DAT_0187b564);
    }
    return 0;
  }
  piVar2 = (int *)param_1[2];
  if (piVar2 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    FUN_00ec9e88(local_30,piVar2,param_2);
    if ((local_30[0] & 1) != 0) {
      return 1;
    }
    local_40 = local_28;
    iStack_3c = iStack_24;
    iStack_38 = iStack_20;
    iStack_34 = iStack_1c;
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
      if (bVar1) {
        *piVar2 = 0x84;
        iVar3 = 1;
        goto LAB_00ea2cb4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar3 = 1;
    (**(code **)(piVar2[2] + 0x10))(piVar2);
  }
LAB_00ea2cb4:
  *param_1 = 1;
  param_1[2] = iVar3;
  param_1[3] = 0;
  param_1[4] = local_40;
  param_1[5] = iStack_3c;
  param_1[6] = iStack_38;
  param_1[7] = iStack_34;
  return 0;
}

