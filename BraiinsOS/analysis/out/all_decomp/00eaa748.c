// FUN_00eaa748 @ 00eaa748 size=404 calls_out=4 calls_in=1
// strings: 

void FUN_00eaa748(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint in_fpscr;
  double dVar3;
  undefined1 *local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined1 *local_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined4 *local_18;
  code *local_14;
  
  if (param_2[1] == 0) {
    local_38 = 1;
    local_3c = (undefined4 *)0x2501;
    local_40 = (undefined1 *)0x80000000;
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    param_1[2] = puVar2;
    *puVar2 = local_40;
    puVar2[1] = local_3c;
    puVar2[2] = local_38;
    *param_1 = 2;
    param_1[1] = 0;
    return;
  }
  uVar1 = (uint)*(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  param_2[1] = param_2[1] + -1;
  if (uVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if (uVar1 == 1) {
    FUN_00efbe38(&local_40);
    if (local_40 == (undefined1 *)0x1) {
      puVar2 = local_3c;
      goto LAB_00eaa880;
    }
    local_2c = local_34;
    local_30 = local_38;
    if (local_34 == 0) {
      dVar3 = (double)VectorUnsignedToFloat(local_38,(byte)(in_fpscr >> 0x16) & 3);
      *(double *)(param_1 + 2) = dVar3 / 1000.0;
      *param_1 = 1;
      param_1[1] = 0;
      return;
    }
    local_14 = FUN_00fac4cc;
    local_18 = &local_30;
    FUN_00600d2c(&local_28,&DAT_00584bb4,&local_18);
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
  }
  else {
    local_40 = &DAT_80000004;
    local_3c = (undefined4 *)uVar1;
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    local_28 = local_40;
    uStack_24 = (uint)local_3c;
    uStack_20 = local_38;
  }
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
LAB_00eaa880:
  param_1[2] = puVar2;
  *param_1 = 2;
  param_1[1] = 0;
  return;
}

