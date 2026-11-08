// FUN_01aa0da0 @ 01aa0da0 size=88 calls_out=2 calls_in=33
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01aa0da0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x18);
  }
  *puVar1 = 0;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 0x80000000;
  puVar1[4] = param_1;
  puVar1[5] = param_2;
  return;
}

