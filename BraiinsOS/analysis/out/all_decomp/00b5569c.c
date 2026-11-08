// FUN_00b5569c @ 00b5569c size=88 calls_out=2 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b5569c(undefined4 param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  uint local_14;
  
  local_14 = CONCAT31((int3)(local_14 >> 8),param_2) & 0xffff00ff;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x20);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x20);
  }
  *puVar1 = local_30;
  puVar1[1] = uStack_2c;
  puVar1[2] = uStack_28;
  puVar1[3] = uStack_24;
  puVar1[4] = local_20;
  puVar1[5] = uStack_1c;
  puVar1[6] = param_1;
  puVar1[7] = local_14;
  return;
}

