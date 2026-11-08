// FUN_00a5a494 @ 00a5a494 size=76 calls_out=2 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a5a494(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_24;
  uint local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  local_20 = local_20 & 0xffffff00;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x14);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  *puVar1 = param_1;
  puVar1[1] = uStack_24;
  puVar1[2] = local_20;
  puVar1[3] = uStack_1c;
  puVar1[4] = uStack_18;
  return;
}

