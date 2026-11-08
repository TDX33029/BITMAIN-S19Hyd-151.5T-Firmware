// FUN_00ea971c @ 00ea971c size=256 calls_out=3 calls_in=5
// strings: 

void FUN_00ea971c(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *local_20;
  uint local_1c;
  int local_18;
  
  if (param_2[1] == 0) {
    local_18 = 1;
    local_1c = 0x2501;
    local_20 = (undefined1 *)0x80000000;
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
  }
  else {
    uVar1 = (uint)*(byte *)*param_2;
    *param_2 = (byte *)*param_2 + 1;
    param_2[1] = param_2[1] + -1;
    if (uVar1 == 0) {
      *param_1 = -0x80000000;
      return;
    }
    if (uVar1 == 1) {
      FUN_00f16f58(&local_20);
      if (local_20 == (undefined1 *)0x80000000) {
        *param_1 = -0x7fffffff;
        param_1[1] = local_1c;
        return;
      }
      *param_1 = (int)local_20;
      param_1[1] = local_1c;
      param_1[2] = local_18;
      return;
    }
    local_20 = &DAT_80000004;
    local_1c = uVar1;
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
  }
  *puVar2 = local_20;
  puVar2[1] = local_1c;
  puVar2[2] = local_18;
  *param_1 = -0x7fffffff;
  param_1[1] = (int)puVar2;
  return;
}

