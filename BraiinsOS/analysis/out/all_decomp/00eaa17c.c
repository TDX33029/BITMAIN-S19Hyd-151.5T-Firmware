// FUN_00eaa17c @ 00eaa17c size=288 calls_out=3 calls_in=1
// strings: 

void FUN_00eaa17c(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *local_20;
  uint local_1c;
  undefined1 *local_18;
  
  if (param_2[1] == 0) {
    local_18 = (undefined1 *)0x1;
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
      param_1[2] = &DAT_3b9aca00;
      return;
    }
    if (uVar1 == 1) {
      FUN_00f1457c(&local_20);
      if (local_18 == &DAT_3b9aca00) {
        *param_1 = local_20;
        param_1[2] = 0x3b9aca01;
        return;
      }
      *param_1 = local_20;
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
  param_1[2] = 0x3b9aca01;
  *param_1 = puVar2;
  return;
}

