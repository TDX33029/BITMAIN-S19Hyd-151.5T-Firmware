// FUN_011d888c @ 011d888c size=84 calls_out=2 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011d888c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = 1;
  puVar1[3] = &DAT_01c21fdc;
  return;
}

