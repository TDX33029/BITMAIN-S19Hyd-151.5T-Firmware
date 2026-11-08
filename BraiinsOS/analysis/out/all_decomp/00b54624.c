// FUN_00b54624 @ 00b54624 size=84 calls_out=2 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b54624(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  local_14 = local_14 & 0xffffff00;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x28);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x28);
  }
  *puVar1 = param_1;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  puVar1[4] = uStack_28;
  puVar1[5] = local_24;
  puVar1[6] = uStack_20;
  puVar1[7] = uStack_1c;
  puVar1[8] = uStack_18;
  puVar1[9] = local_14;
  return;
}

