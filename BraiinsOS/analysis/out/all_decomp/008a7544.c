// FUN_008a7544 @ 008a7544 size=80 calls_out=2 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008a7544(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint local_1c;
  
  local_1c = local_1c & 0xffffff00;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_1;
  puVar1[3] = uStack_24;
  puVar1[4] = uStack_20;
  puVar1[5] = local_1c;
  return;
}

