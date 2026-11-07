// FUN_014c9ad8 @ 014c9ad8 size=196 calls_out=3 calls_in=3
// strings: 

int FUN_014c9ad8(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_a0 [18];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int *local_44;
  undefined *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  uStack_28 = param_1[4];
  local_44 = (int *)0x0;
  if (*param_2 != -0x7fffffd7) {
    local_44 = (int *)thunk_FUN_016d4a50(0x20);
    if (local_44 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x20);
    }
    iVar1 = param_2[1];
    iVar2 = param_2[2];
    iVar3 = param_2[3];
    *local_44 = *param_2;
    local_44[1] = iVar1;
    local_44[2] = iVar2;
    local_44[3] = iVar3;
    iVar1 = param_2[5];
    iVar2 = param_2[6];
    iVar3 = param_2[7];
    local_44[4] = param_2[4];
    local_44[5] = iVar1;
    local_44[6] = iVar2;
    local_44[7] = iVar3;
  }
  local_58 = *param_1;
  uStack_54 = param_1[1];
  uStack_50 = param_1[2];
  uStack_4c = param_1[3];
  uStack_48 = param_1[4];
  local_a0[0] = 2;
  local_40 = &DAT_018a5350;
  iVar1 = thunk_FUN_016d4a50(100);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,100);
  }
  FUN_016dd1aa(iVar1,local_a0,100);
  return iVar1;
}

