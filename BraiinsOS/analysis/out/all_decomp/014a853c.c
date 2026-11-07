// FUN_014a853c @ 014a853c size=388 calls_out=5 calls_in=0
// strings: 

void FUN_014a853c(uint *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  uint local_c8;
  uint uStack_c4;
  uint local_c0;
  undefined *local_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  int local_88 [18];
  undefined2 local_40;
  uint local_2c;
  undefined *local_28;
  
  iVar1 = FUN_01657fc4(*(undefined4 *)(param_2 + 0x68),*param_3);
  if (iVar1 == 0) {
    local_2c = 1;
    local_40 = 4;
    local_28 = &DAT_018a5134;
    local_88[0] = 2;
    iVar1 = thunk_FUN_016d4a50(100);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,100);
    }
  }
  else {
    FUN_014a7f78(&local_c8,param_2,param_3);
    if (local_c8 == 6 && uStack_c4 == 0) {
      *param_1 = 6;
      param_1[1] = 0;
      return;
    }
    if ((local_c8 & 7) != 4) {
      if (local_c8 == 5) {
        *param_1 = 5;
        param_1[1] = 0;
        return;
      }
      param_1[4] = local_b8;
      param_1[5] = uStack_b4;
      param_1[6] = uStack_b0;
      param_1[7] = uStack_ac;
      param_1[8] = uStack_a8;
      param_1[9] = uStack_a4;
      param_1[10] = local_a0;
      param_1[0xb] = uStack_9c;
      param_1[0xc] = uStack_98;
      param_1[0xd] = uStack_94;
      param_1[0xe] = uStack_90;
      param_1[0xf] = uStack_8c;
      *param_1 = local_c8;
      param_1[1] = uStack_c4;
      param_1[2] = local_c0;
      param_1[3] = (uint)local_bc;
      return;
    }
    local_28 = local_bc;
    local_40 = 4;
    local_88[0] = 2;
    local_2c = local_c0;
    iVar1 = thunk_FUN_016d4a50(100);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,100);
    }
  }
  FUN_016dd1aa(iVar1,local_88,100);
  local_88[0] = iVar1;
  piVar2 = (int *)thunk_FUN_016d4a50(4);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  *piVar2 = iVar1;
  *param_1 = 4;
  param_1[1] = 0;
  param_1[2] = (uint)piVar2;
  param_1[3] = (uint)&DAT_018a5090;
  return;
}

