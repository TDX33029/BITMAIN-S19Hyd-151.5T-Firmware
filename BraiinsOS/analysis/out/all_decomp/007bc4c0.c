// FUN_007bc4c0 @ 007bc4c0 size=324 calls_out=4 calls_in=1
// strings: 

void FUN_007bc4c0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char *local_60;
  undefined1 *local_5c;
  int local_58;
  int *local_54;
  int local_50;
  int local_48;
  int local_44;
  int iStack_40;
  char *local_38;
  undefined1 *local_34;
  int local_30;
  int local_2c;
  int iStack_28;
  
  local_60 = "";
  local_5c = &DAT_0033e416;
  FUN_007bc658(&local_48,&local_60);
  if (local_48 == -0x80000000) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    return;
  }
  piVar2 = (int *)thunk_FUN_016d4a50(0x30);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x30);
  }
  *piVar2 = local_48;
  piVar2[1] = local_44;
  piVar2[2] = iStack_40;
  local_34 = local_5c;
  iVar4 = 0xc;
  local_50 = 1;
  local_58 = 4;
  local_38 = local_60;
  local_54 = piVar2;
  while (iVar1 = local_50, FUN_007bc658(&local_30,&local_38), local_30 != -0x80000000) {
    if (iVar1 == local_58) {
      FUN_006bca64(&local_58,iVar1,1,4,0xc);
      piVar2 = local_54;
    }
    local_50 = iVar1 + 1;
    piVar3 = (int *)((int)piVar2 + iVar4);
    *piVar3 = local_30;
    iVar4 = iVar4 + 0xc;
    piVar3[1] = local_2c;
    piVar3[2] = iStack_28;
  }
  *param_1 = local_58;
  param_1[1] = (int)local_54;
  param_1[2] = local_50;
  return;
}

