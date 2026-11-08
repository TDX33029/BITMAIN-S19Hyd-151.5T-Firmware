// FUN_01966f50 @ 01966f50 size=80 calls_out=2 calls_in=188
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01966f50(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x14);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x14);
  }
  *puVar1 = 1;
  puVar1[1] = param_1;
  puVar1[2] = param_2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}

