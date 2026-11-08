// FUN_00eaa5dc @ 00eaa5dc size=288 calls_out=2 calls_in=1
// strings: 

void FUN_00eaa5dc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined1 *local_28;
  uint local_24;
  undefined4 local_20;
  
  uVar3 = param_2[1];
  if (uVar3 == 0) {
    local_20 = 1;
    local_24 = 0x2501;
    local_28 = (undefined1 *)0x80000000;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
  }
  else {
    pbVar4 = (byte *)*param_2;
    local_24 = (uint)*pbVar4;
    *param_2 = pbVar4 + 1;
    param_2[1] = uVar3 - 1;
    uVar2 = 0;
    if (local_24 == 0) goto LAB_00eaa6c8;
    if (local_24 == 1) {
      if (4 < uVar3) {
        *param_2 = pbVar4 + 5;
        param_2[1] = uVar3 - 5;
        param_1[1] = *(undefined4 *)(pbVar4 + 1);
        *param_1 = 1;
        return;
      }
      local_20 = 4;
      local_24 = 0x2501;
      local_28 = (undefined1 *)0x80000000;
      puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
    }
    else {
      local_28 = &DAT_80000004;
      puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
    }
  }
  *puVar1 = local_28;
  puVar1[1] = local_24;
  puVar1[2] = local_20;
  param_1[1] = puVar1;
  uVar2 = 2;
LAB_00eaa6c8:
  *param_1 = uVar2;
  return;
}

