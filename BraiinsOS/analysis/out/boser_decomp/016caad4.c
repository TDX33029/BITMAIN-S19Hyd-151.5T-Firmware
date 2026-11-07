// FUN_016caad4 @ 016caad4 size=104 calls_out=2 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016caad4(undefined4 *param_1)

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
  puVar1[3] = 0;
  puVar1[4] = 4;
  puVar1[5] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = 1;
  param_1[1] = puVar1;
  param_1[2] = 1;
  return;
}

