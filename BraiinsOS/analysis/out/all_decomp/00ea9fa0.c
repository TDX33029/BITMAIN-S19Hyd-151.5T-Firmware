// FUN_00ea9fa0 @ 00ea9fa0 size=392 calls_out=4 calls_in=1
// strings: 

void FUN_00ea9fa0(undefined2 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *local_48;
  undefined4 *local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined1 *local_30;
  uint uStack_2c;
  uint uStack_28;
  uint *local_20;
  code *local_1c;
  
  if (param_2[1] == 0) {
    local_44 = (undefined4 *)0x2501;
    local_48 = (undefined1 *)0x80000000;
    local_40 = 1;
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    *(undefined4 **)(param_1 + 2) = puVar2;
    *puVar2 = local_48;
    puVar2[1] = local_44;
    puVar2[2] = local_40;
    *param_1 = 1;
    return;
  }
  uVar1 = (uint)*(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  param_2[1] = param_2[1] + -1;
  if (uVar1 == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  if (uVar1 == 1) {
    FUN_00efbe38(&local_48);
    if (local_48 == (undefined1 *)0x1) {
      puVar2 = local_44;
      goto LAB_00eaa0f0;
    }
    local_34 = local_3c;
    local_38 = local_40;
    if (local_3c == 0 && (0xffff < local_40) <= local_3c) {
      param_1[2] = (short)local_40;
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    local_1c = FUN_00fac4cc;
    local_20 = &local_38;
    FUN_00600d2c(&local_30,&DAT_0058dbfe,&local_20);
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
  }
  else {
    local_48 = &DAT_80000004;
    local_44 = (undefined4 *)uVar1;
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    local_30 = local_48;
    uStack_2c = (uint)local_44;
    uStack_28 = local_40;
  }
  *puVar2 = local_30;
  puVar2[1] = uStack_2c;
  puVar2[2] = uStack_28;
LAB_00eaa0f0:
  *(undefined4 **)(param_1 + 2) = puVar2;
  *param_1 = 1;
  return;
}

