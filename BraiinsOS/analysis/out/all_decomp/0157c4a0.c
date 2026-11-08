// FUN_0157c4a0 @ 0157c4a0 size=80 calls_out=2 calls_in=137
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0157c4a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x14);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  *puVar1 = 1;
  puVar1[1] = param_1;
  puVar1[2] = param_2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}

