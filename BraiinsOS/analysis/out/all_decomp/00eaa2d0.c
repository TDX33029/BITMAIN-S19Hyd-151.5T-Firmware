// FUN_00eaa2d0 @ 00eaa2d0 size=364 calls_out=2 calls_in=1
// strings: 

void FUN_00eaa2d0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *local_28;
  uint local_24;
  undefined4 local_20;
  
  uVar1 = param_2[1];
  if (uVar1 == 0) {
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    param_1[2] = puVar2;
    *puVar2 = 0x80000000;
    puVar2[1] = 0x2501;
    puVar2[2] = 1;
    *param_1 = 2;
    param_1[1] = 0;
    return;
  }
  pbVar3 = (byte *)*param_2;
  local_24 = (uint)*pbVar3;
  *param_2 = pbVar3 + 1;
  param_2[1] = uVar1 - 1;
  if (local_24 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if (local_24 == 1) {
    if (8 < uVar1) {
      uVar4 = *(undefined4 *)(pbVar3 + 1);
      param_2[1] = uVar1 - 9;
      uVar5 = *(undefined4 *)(pbVar3 + 5);
      *param_2 = pbVar3 + 9;
      *(ulonglong *)(param_1 + 2) = CONCAT44(uVar5,uVar4);
      *param_1 = 1;
      param_1[1] = 0;
      return;
    }
    local_20 = 8;
    local_24 = 0x2501;
    local_28 = (undefined1 *)0x80000000;
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
  }
  else {
    local_28 = &DAT_80000004;
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
  }
  param_1[2] = puVar2;
  *puVar2 = local_28;
  puVar2[1] = local_24;
  puVar2[2] = local_20;
  *param_1 = 2;
  param_1[1] = 0;
  return;
}

