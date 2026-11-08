// FUN_010f8e1c @ 010f8e1c size=76 calls_out=2 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010f8e1c(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint local_18;
  
  local_18 = local_18 & 0xffffff00;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x14);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  *puVar1 = param_1;
  puVar1[1] = uStack_24;
  puVar1[2] = uStack_20;
  puVar1[3] = uStack_1c;
  puVar1[4] = local_18;
  return;
}

