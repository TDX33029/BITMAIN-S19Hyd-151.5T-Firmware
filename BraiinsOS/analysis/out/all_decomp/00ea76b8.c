// FUN_00ea76b8 @ 00ea76b8 size=228 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_00ea76b8(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  uint local_50 [2];
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  if (*param_1 != 0) {
    if (*param_1 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0035b674,0x45,&DAT_0187b564);
    }
    return 0;
  }
  piVar2 = (int *)param_1[2];
  FUN_00ec9e88(local_50,piVar2,param_2);
  if ((local_50[0] & 1) != 0) {
    return 1;
  }
  local_38 = local_48;
  iStack_34 = iStack_44;
  iStack_30 = iStack_40;
  iStack_2c = iStack_3c;
  local_24 = local_48;
  iStack_20 = iStack_44;
  iStack_1c = iStack_40;
  iStack_18 = iStack_3c;
  if (*piVar2 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(piVar2);
    if (bVar1) {
      *piVar2 = 0x84;
      goto LAB_00ea7764;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(piVar2[2] + 0x10))(piVar2);
LAB_00ea7764:
  *param_1 = 1;
  param_1[1] = local_28;
  param_1[2] = local_24;
  param_1[3] = iStack_20;
  param_1[4] = iStack_1c;
  param_1[5] = iStack_18;
  return 0;
}

