// FUN_010e98c8 @ 010e98c8 size=88 calls_out=2 calls_in=6
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010e98c8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  *puVar1 = 0;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 0x80000000;
  puVar1[4] = param_1;
  puVar1[5] = param_2;
  return;
}

