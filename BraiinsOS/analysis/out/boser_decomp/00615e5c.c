// FUN_00615e5c @ 00615e5c size=76 calls_out=2 calls_in=7
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00615e5c(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint local_10;
  
  local_10 = local_10 & 0xffffff00;
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x1c);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x1c);
  }
  *puVar1 = param_1;
  puVar1[1] = uStack_24;
  puVar1[2] = uStack_20;
  puVar1[3] = local_1c;
  puVar1[4] = uStack_18;
  puVar1[5] = uStack_14;
  puVar1[6] = local_10;
  return;
}

